//
//  main.cpp
//  27
//
//  Created by 刘靖迪 on 2017/12/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
typedef long long LL;
void PRINT (set<LL> &A) {
    if (A.size()) {
        printf("{%lld", *A.begin());
        A.erase(A.begin());
        for (auto iter = A.begin(); iter != A.end(); iter++) {
            printf(",%lld", *iter);
        }
        puts("}");
    }
    else puts("{}");
}
int main(int argc, const char * argv[]) {
    int m ,n;
    scanf("%d%d", &m, &n);
    LL a[10100], b[10100];
    set<LL> I, U, D;
    for (int i=0; i<m; i++) {
        scanf("%lld", &a[i]);
        U.insert(a[i]);
        D.insert(a[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%lld", &b[i]);
        U.insert(b[i]);
        if (D.find(b[i]) != D.end())
            D.erase(b[i]);
    }
    int i=0, j=0;
    while (i<m && j<n) {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else {
            I.insert(a[i]);
            i++;
            j++;
        }
    }
    PRINT(I);
    PRINT(U);
    PRINT(D);
    return 0;
}
