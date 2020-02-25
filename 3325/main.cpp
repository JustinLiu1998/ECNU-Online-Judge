//
//  main.cpp
//  3325
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

//一年有72个素数天
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
#define FOR(i, a, b)  for(LL i = (a); i < (b); i++)

LL prime[5] = {2, 3, 5, 233, 331};                          //米勒-罗宾素性检测模板
LL pow_mod(LL a, LL n, LL mod)
{
    LL ret = 1;
    while (n)
    {
        if (n&1)
            ret = ret * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return ret;
}

int isPrime(LL n)
{
    if (n < 2 || (n != 2 && !(n&1)))
        return 0;
    LL s = n - 1;
    while (!(s&1))
        s >>= 1;
    for (int i = 0; i < 5; ++i)
    {
        if (n == prime[i])
            return 1;
        LL t = s, m = pow_mod(prime[i], s, n);
        while (t != n-1 && m != 1 && m != n-1)
        {
            m = m * m % n;
            t <<= 1;
        }
        if (m != n-1 && !(t&1))
            return 0;
    }
    return 1;
}

int leapyear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 366 : 365;
}
int pdays[100] = {102, 103, 105, 107, 111, 113, 117, 119, 123, 129, 131, 206, 210, 212, 216, 222, 228, 302, 308, 312, 314, 320, 324, 330, 407, 411, 413, 417, 419, 423, 507, 511, 517, 519, 529, 531, 606, 612, 616, 622, 628, 630, 710, 712, 716, 718, 730, 811, 815, 817, 821, 827, 829, 908, 914, 920, 926, 928, 1004, 1008, 1010, 1020, 1103, 1107, 1109, 1113, 1127, 1203, 1213, 1215, 1219, 1225};
int ldays[100] = {102, 103, 105, 107, 111, 113, 117, 119, 123, 129, 131, 206, 210, 212, 216, 222, 228, 301, 307, 311, 313, 319, 323, 329, 406, 410, 412, 416, 418, 422, 506, 510, 516, 518, 528, 530, 605, 611, 615, 621, 627, 629, 709, 711, 715, 717, 729, 810, 814, 816, 820, 826, 828, 907, 913, 919, 925, 927, 1003, 1007, 1009, 1019, 1102, 1106, 1108, 1112, 1126, 1202, 1212, 1214, 1218, 1224};

int main(int argc, const char * argv[]) {
    int y, daynum, x=0;
    cin >> y;
    daynum = leapyear(y);
    y *= 10000;
    if (daynum == 366){
        FOR(i, 0, 72)
            if (isPrime(y+ldays[i])) x++;
    }
    else FOR(i, 0, 72)
        if (isPrime(y+pdays[i])) x++;
    cout << (double)x/daynum << endl;
    return 0;
}
