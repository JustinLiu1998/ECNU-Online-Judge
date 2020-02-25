//
//  main.cpp
//  1075
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n && n != 0) {
        ll ans = (pow(n, 3) + 5*n)/6 + 1;
        cout << ans << endl;
    }
    return 0;
}
