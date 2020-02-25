//
//  main.cpp
//  1841
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);
    return 0;
}
