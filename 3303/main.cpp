//
//  main.cpp
//  3303
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef unsigned long long ULL;
int main(int argc, const char * argv[]) {
    ULL a[64];
    a[0] = 1; ULL tem = 1;
    for (int i=1; i<63; i++) {
        tem *=2;
        a[i] = tem - 1;
    }
    a[63] = 9223372036854775807;
    int T, cas=0; cin >> T;
    while (T--) {
        printf("Case %d: ", ++cas);
        ULL x, y;
        cin >> x >> y;
        for (int i=63; i>0; i--) {
            if (a[i] <= y) {
                cout << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}
