//
//  main.cpp
//  2030
//
//  Created by 刘靖迪 on 2017/9/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

void solve (int T) {                            //x, u分别是偶数和 偶数；y, v类似
    int  a, u=0, v=u;
    double x=0, y=x;
    for (int i=0; i<T; i++) {
        cin >> a;
        if (a%2) {y+=a; v++;}
        else {x+=a; u++;}
    }
    if (v) printf("%.3f ", y/v);
    else printf("None ");
    if (u) printf("%.3f\n", x/u);
    else printf("None\n");
}

int main(int argc, const char * argv[]) {
    int T; while (scanf("%d", &T) != EOF && T <=1000) solve(T);
    return 0;
}
