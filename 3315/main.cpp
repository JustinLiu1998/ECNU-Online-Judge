//
//  main.cpp
//  3315
//
//  Created by 刘靖迪 on 2017/9/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005], b[100005];

void heap_adjust(int *a, int i, int Len) {
    int Child;
    for( ; 2*i+1 < Len; i=Child) {
        Child = 2*i+1;
        if(Child < Len-1 && a[Child+1] > a[Child])
            Child++;
        if(a[i]<a[Child]) {
            int tem = a[i];
            a[i] = a[Child];
            a[Child] = tem;
        }
        else break;
    }
}

void heap_sort(int *a,int length) {
    int i;
    for(i = length/2 - 1; i>=0; i--)
        heap_adjust(a, i, length);
    for(i=length-1;i>0;i--) {
        int tem = a[0];
        a[0] = a[i];
        a[i] = tem;
        heap_adjust(a,0,i);
    }
}

int main(int argc, const char * argv[]) {
    int n, q;
    cin >> n >> q;
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int l, r, k;
    for (int i=0; i<q; i++) {
        scanf("%d%d%d", &l, &r, &k);
        memcpy(b, a+l-1, sizeof(int) * (r-l+1));
        heap_sort(b, r-l+1);
        printf("%d\n", b[r-l-k+1]);
    }
    return 0;
}
