//
//  main.cpp
//  1082
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};       //a[9]是9的阶乘
    int n;
    while (scanf("%d", &n) && n >= 0) {
        if (n==0)
            cout << "NO";
        else {
            for (int i=9; i>=0; i--) {
                if (n >= a[i]) n-=a[i];
            }
            if (n == 0)
                cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
