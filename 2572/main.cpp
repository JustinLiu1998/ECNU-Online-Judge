//
//  main.cpp
//  2572
//
//  Created by 刘靖迪 on 2017/10/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int k;
    cin >> k;
    while (k--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", a[x-1]);
    }
    return 0;
}
