//
//  main.cpp
//  2002(c++)
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main () {
    int a, b;
    while (scanf("%d%d", &a, &b) == 2) {
        double c;
        c=sqrt(a*a + b*b);
        cout << setiosflags(ios::fixed) << setprecision(3);
        cout << c << endl;
    }
    return 0;
}
