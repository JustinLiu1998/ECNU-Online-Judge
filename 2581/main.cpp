//
//  main.cpp
//  2581
//
//  Created by 刘靖迪 on 2017/11/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
void solve() {
    int a; cin >> a;
    int x=0, y=0;
    while (a) {
        if (a & 1) y++; else x++;
        a>>=1;
    }
    cout << x << " " << y << endl;
}
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    while (T--) solve();
    return 0;
}
