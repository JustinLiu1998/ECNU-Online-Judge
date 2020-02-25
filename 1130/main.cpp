//
//  main.cpp
//  1130
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAXN 16
typedef struct node{
    int r, c, tag;
} NODE;
int queens (int n) {
    NODE stack[MAXN * MAXN];
    int top = -1;
    int col[MAXN], md[2*MAXN - 1], sd[2*MAXN - 1];
    int str, stc, i;
    int ans = 0;
    for (i=0; i<n; i++) {
        col[i] = 0;
    }
    for (i=0; i<2*MAXN-1; i++) {
        md[i] = sd[i] = 0;
    }
    for (i=0; i<n; i++) {
        stack[++top].r = 0;
        stack[top].c = n-1 - i;
        stack[top].tag = 0;
    }
    while (top >= 0) {
        str = stack[top].r;
        stc = stack[top].c;
        if (stack[top].tag == 0) {
            if (col[stc] || md[str - stc + n-1] || sd[str + stc]) {
                top--;
            }
            else {
                col[stc] = 1;
                md[str - stc + n-1] = 1;
                sd[str + stc] = 1;
                stack[top].tag = 1;
                if (str == n-1)
                    ans++;
                else {
                    for (i=0; i<n; i++) {
                        stack[++top].r = str+1;
                        stack[top].c = n-1 - i;
                        stack[top].tag = 0;
                    }
                }
            }
        }
        else {
            col[stc] = 0;
            md[str - stc + n-1] = 0;
            sd[str + stc] = 0;
            top--;
        }
    }
    return ans;
}
int main(int argc, const char * argv[]) {
    int ans[10];
    for (int i=0; i<8; i++) {
        ans[i] = queens(i+1);
    }
    int k;
    while (scanf("%d", &k) == 1) {
        int n;
        for (int i=0; i<k; i++) {
            scanf("%d", &n);
            printf("%d\n", ans[n-1]);
        }
    }
    return 0;
}

