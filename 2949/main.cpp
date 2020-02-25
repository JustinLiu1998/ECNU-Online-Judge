//
//  main.cpp
//  2949
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(int argc, const char * argv[]) {
    double x, y;
    cin >> x >> y;
    x = pow(x, y);
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << x << endl;
    return 0;
}
