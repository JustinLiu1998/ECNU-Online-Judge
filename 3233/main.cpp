//
//  main.cpp
//  3233
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

void solve(int n) {
    int ans=0;
    while (n) {
        n /= 5;
        ans +=n;
    }
    cout << ans << endl;
}

int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n) {
        solve(n);
    }
    return 0;
}
