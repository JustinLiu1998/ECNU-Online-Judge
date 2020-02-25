//
//  main.cpp
//  3123
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(int argc, const char * argv[]) {
    double a, b, c;
    cin >> a >> b >> c;
    cout << setiosflags(ios::fixed) << setprecision(6);
    double x1, x2;
    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    if (x1 == x2)
        cout << x1 <<endl;
    else {
        if (x1 < x2)
            cout << x1 << " " << x2 << endl;
        else cout << x2 << " " << x1 << endl;
    }
    return 0;
}
