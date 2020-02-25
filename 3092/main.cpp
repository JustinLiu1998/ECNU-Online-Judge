//
//  main.cpp
//  3092
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    int n, r;
    cin >> n >> r;
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << pow(1+(double)r/100, n) << endl;
    return 0;
}
