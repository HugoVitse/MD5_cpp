import hashlib
import requests
import random

test = []

words = requests.get("https://random-word-api.herokuapp.com/word?number=100000").json()

for i in range(100):
    print(i)
    str = ""
    for j in range(50):
        str += words[random.randint(0,len(words)-1)] + (" " if j < 19 else "")
    hash_object = hashlib.md5(str.encode())
    hash = hash_object.hexdigest()
    test.append(str)
    test.append(hash)

with open("test.cpp", "w") as f:
    f.write("""#include  "../include/md5.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string>\n
""")
    for i in range(0,len(test),2):
        f.write(f"""TEST(MD5Test, test{i//2}) {{
    hash_md5* hash = new hash_md5("{test[i]}");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "{test[i+1]}");
}}
""")
    f.write("""\nint main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
""")

