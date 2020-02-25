//
//  main.cpp
//  3269
//
//  Created by 刘靖迪 on 2018/1/13.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> a;
    int n, r, m, cnt = 0;
    scanf("%d%d%d", &n, &r, &m);
    r++;
    for (int i=1; i<=r; i++) {
        if (i <= n) {
            a.push_back(i);
            cnt++;
        }
        else a.push_back(n);
    }
    for (int i=1; i<(m+r-1)/r; i++) {
        int j = i*r;
        for (int k=1; k<=r; k++) {
            if (j+k <= m) {
                if (k <= n) {
                    if (a[j+k-r] != k)
                        cnt++;
                    a.push_back(k);
                }
                else a.push_back(n);
            }
            else a.push_back(n);
        }
    }
    printf("%d\n", cnt);
    for (int i=0; i<m; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    return 0;
}
