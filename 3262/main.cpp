//
//  main.cpp
//  3262
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int GCD (int m, int n ) {
    if (m < n) {
        int tem = m; m = n; n = tem;
    }
    if (m % n == 0) {
        return n;
    }
    else return GCD(n, m%n);
}
int main(int argc, const char * argv[]) {
    int x, n;
    cin >> x >> n;
    for (int i=2; i<=n; i++) {
        if (x%i == 0)
            cout << "1\n";
        else
            cout << i / GCD(x, i) << "\n";
    }
    return 0;
}
