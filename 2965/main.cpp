//
//  main.cpp
//  2965
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int w;
    while (cin >> w) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int ans=0;
        int i = 0, j = n-1;
        while (i <= j) {
            if (a[i] + a[j] <= w && i != j)
                i++;
            j--;
            ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}

