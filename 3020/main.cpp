//
//  main.cpp
//  3020
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int n, count=1;
        cin >> n;
        int max=n;
        while (n != 1) {
            if (n % 2 == 0)
                n /= 2;
            else {
                n *= 3;
                n++;
            }
            max = n > max ? n : max;
            if (n != 1) count++;
        }
        printf("case #%d:\n%d %d\n", cas++, max, count);
    }
    return 0;
}
