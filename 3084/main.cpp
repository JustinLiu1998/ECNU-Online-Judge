//
//  main.cpp
//  3084
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int GCD (int m, int n){
    if (m < n){
        int tem = m;
        m = n;
        n = tem;
    }
    if (m % n == 0)
        return n;
    else return GCD(n, m%n);
}
int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
    return 0;
}
