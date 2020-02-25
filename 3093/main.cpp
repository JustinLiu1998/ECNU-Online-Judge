//
//  main.cpp
//  3093
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int GCD(int m, int n) {
    if (m<n){
        int t = m;
        m = n;
        n = t;
    }
    if (m % n == 0)
        return n;
    else return GCD(n, m%n);
}
int main(int argc, const char * argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << GCD(a, GCD(b, c)) << endl;
    return 0;
}
