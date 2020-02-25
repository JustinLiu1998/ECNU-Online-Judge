//
//  main.cpp
//  2568
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    while (T--) {
        LL a, b; cin >> a >> b;
        LL c = a+b;
        int ans = 0;
        while (c) {
            ans++;
            c /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}
