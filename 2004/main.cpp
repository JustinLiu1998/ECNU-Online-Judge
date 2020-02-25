//
//  main.cpp
//  2004
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void solve(int n) {
    int sum=0, x=n;
    while (x) {
        sum += pow(x%10, 4);
        x /= 10;
    }
    if (sum == n)
        cout << n << endl;
}
int main(int argc, const char * argv[]) {
    for (int i=1000; i<10000; i++)
        solve(i);
    return 0;
}
