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
    sha_objet = hashlib.sha256(str.encode())
    sha = sha_objet.hexdigest()
    sha_objet512 = hashlib.sha512(str.encode())
    sha512 = sha_objet512.hexdigest()
    test.append(str)
    test.append(hash)
    test.append(sha)
    test.append(sha512)

with open("test.cpp", "w") as f:
    f.write("""#include  "../include/hash.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string>\n
""")
    for i in range(0,len(test),4):
        f.write(f"""TEST(MD5Test, test{i//3}) {{
    hash_md5* hash = new hash_md5("{test[i]}");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "{test[i+1]}");
}}
""")
        f.write(f"""TEST(SHA256Test, test{i//3}) {{
    hash_sha256* hash = new hash_sha256("{test[i]}");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "{test[i+2]}");
}}
""")
        f.write(f"""TEST(SHA512Test, test{i//3}) {{
    hash_sha512* hash = new hash_sha512("{test[i]}");
    hash->hash_message();
    EXPECT_EQ(*hash->get_hash(), "{test[i+3]}");
}}
""")
    f.write("""\nint main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
""")

