//
//  main.cpp
//  1820
//
//  Created by 刘靖迪 on 2017/11/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
LL a[45];
int main(int argc, const char * argv[]) {
    a[1] = 1;
    for (int i=2; i<=40; i++)
        a[i] = (a[i-1] + a[i-2]) * 2 + 3;
    int n;
    while (cin >> n)
        cout << a[n] << endl;
    return 0;
}
