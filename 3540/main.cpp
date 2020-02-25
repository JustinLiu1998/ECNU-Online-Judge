//
//  main.cpp
//  3540
//
//  Created by 刘靖迪 on 2018/5/12.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}
int main(int argc, const char * argv[]) {
    int n, x, y;
    cin >> n >> x >> y;
    cout << (n % gcd(x, y) == 0 ? "Yes" : "No") << endl;
    return 0;
}
