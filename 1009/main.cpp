//
//  main.cpp
//  1009
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int a[101];
int main(int argc, const char * argv[]) {
    memset(a, 1, sizeof(a));
//    for (int i=1; i<=100; i++) {
//        for (int j=1; j<i; j++) {
//            int x = min (i-j, j);
//            if (i / x > 1) {
//                a[i] += (i / x - 1) * a[x];
//            }
//        }
//    }
    int n;
    while (cin >> n) {
        cout << a[n] << endl;
    }
    return 0;
}
