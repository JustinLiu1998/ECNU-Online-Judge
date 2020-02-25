//
//  main.cpp
//  3165
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
long long a[70];
int main(int argc, const char * argv[]) {
    a[0] = 0; a[1] = 1;
    for (int i=2; i<70; i++)
        a[i] = a[i-1] + a[i-2];
    int n;
    cin >> n;
    cout << a[n] << endl;
    return 0;
}
