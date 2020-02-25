//
//  main.cpp
//  1493
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    ll a, b;
    cin >> a;
    b = sqrt(a);
    if (b * b < a)
        b += 1;
    cout << b << endl;
    return 0;
}
