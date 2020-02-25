//
//  main.cpp
//  3032
//
//  Created by 刘靖迪 on 2017/11/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef unsigned long long ULL;
ULL a[64];
int main(int argc, const char * argv[]) {
    ULL tem = 1;
    a[1] = 1;
    for (int i=2; i<64; i++) {
        tem*=2;
        a[i] = a[i-1] + tem;
    }
    cout << a[5] << endl;
    return 0;
}
