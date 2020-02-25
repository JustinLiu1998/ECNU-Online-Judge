//
//  main.cpp
//  3087
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
double x[500];
double f(double x) {
    return 2*pow(x, 3) - 4*pow(x, 2) + 3*x - 6;
}
double F(double x) {
    return 6*pow(x, 2) - 8*x +3;
}
int main(int argc, const char * argv[]) {
    x[0] = 1.5;
    int i=0;
    while (f(x[i]) > 1e-15 || f(x[i]) < -1e-15) {
        x[i+1] = x[i] - f(x[i])/F(x[i]);
        i++;
    }
    printf("%.2f %d\n", x[i], i);    return 0;
}
