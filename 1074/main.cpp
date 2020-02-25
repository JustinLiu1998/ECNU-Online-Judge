//
//  main.cpp
//  1074
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int N;
    while (cin >> N && N != 0) {
        double m, x;
        m = modf(N*1.0*log10(N*1.0), &x);
        m = modf(pow((double)10, m), &x);
        printf("%d\n",(int)x);
    }
    return 0;
}
