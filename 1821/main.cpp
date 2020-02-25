//
//  main.cpp
//  1821
//
//  Created by 刘靖迪 on 2017/11/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
LL a[62];
int main(int argc, const char * argv[]) {
    LL x = 1;
    for (int i=1; i<62; i++) {
        x *= 2;
        a[i] = (x - 1) * 2;
    }
    int n;
    while (cin >> n)
        cout << a[n] << endl;
    return 0;
}
