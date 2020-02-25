//
//  main.cpp
//  2567
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int N = 15000+10;
int a[N];
int main(int argc, const char * argv[]) {
    a[0] = 0; a[1] = 1;
    for (int i=2; i<15000; i++)
        a[i] = (a[i-2] + a[i-1]) % 10000;
    int x;
    while (scanf("%d", &x) && x != -1)
        printf("%d\n", a[x%15000]);
    return 0;
}
