
#include <string>
#include <cstdint>
#include <stdio.h>
#include <iostream>
#include <bitset>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>

#pragma once

namespace MD5_Const {

    constexpr u_int A_init = 0x67452301;
    constexpr u_int B_init = 0xefcdab89;
    constexpr u_int C_init = 0x98badcfe;
    constexpr u_int D_init = 0x10325476;

}

namespace SHA256_Const {

    constexpr u_int H0_init = 0x6a09e667;
    constexpr u_int H1_init = 0xbb67ae85;
    constexpr u_int H2_init = 0x3c6ef372;
    constexpr u_int H3_init = 0xa54ff53a;
    constexpr u_int H4_init = 0x510e527f;
    constexpr u_int H5_init = 0x9b05688c;
    constexpr u_int H6_init = 0x1f83d9ab;
    constexpr u_int H7_init = 0x5be0cd19;

}

namespace SHA224_Const {

    constexpr u_int H0_init = 0xc1059ed8;
    constexpr u_int H1_init = 0x367cd507;
    constexpr u_int H2_init = 0x3070dd17;
    constexpr u_int H3_init = 0xf70e5939;
    constexpr u_int H4_init = 0xffc00b31;
    constexpr u_int H5_init = 0x68581511;
    constexpr u_int H6_init = 0x64f98fa7;
    constexpr u_int H7_init = 0xbefa4fa4;

}

namespace SHA512_Const {

    constexpr u_int64_t H0_init = 0x6a09e667f3bcc908;
    constexpr u_int64_t H1_init = 0xbb67ae8584caa73b;
    constexpr u_int64_t H2_init = 0x3c6ef372fe94f82b;
    constexpr u_int64_t H3_init = 0xa54ff53a5f1d36f1;
    constexpr u_int64_t H4_init = 0x510e527fade682d1;
    constexpr u_int64_t H5_init = 0x9b05688c2b3e6c1f;
    constexpr u_int64_t H6_init = 0x1f83d9abfb41bd6b;
    constexpr u_int64_t H7_init = 0x5be0cd19137e2179;

}

u_int* getPrimeNumber(u_int n);


#include "classes.hpp"
#include "functions.hpp"