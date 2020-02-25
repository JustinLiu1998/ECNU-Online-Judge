//
//  main.cpp
//  2863
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[20] = {0};
    a[2] = 5;
    a[3] = 10;
    for (int i=4; i<=17; i++)
        a[i] = a[i-1] + 3;
    int n;
    cin >> n;
    printf("%.3lf\n",  sqrt( (2*(a[n] + 1.75))/9.8 ));
    return 0;
}
