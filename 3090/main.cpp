//
//  main.cpp
//  3090
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[10][10];
    for (int i=0; i<10; i++) {
        a[i][0] = 1;   a[i][i] = 1;
    }
    for (int i=2; i<10; i++) {
        for (int j=1; j<i; j++) {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << a[i][j] << " ";
        }
        cout << a[i][i] << endl;
    }
    return 0;
}
