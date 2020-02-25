//
//  main.cpp
//  3234
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#define max 1000001
long long a[max],b[max];
long long count;

void Merge(long long *a, int start, int mid, int end){
    int i = start,j = mid + 1,k = start;
    while(i <= mid && j <= end) {
        if(a[i] <= a[j])  b[k++] = a[i++];
        else {
            count += j - k;
            b[k++] = a[j++];
        }
    }
    while(i <= mid) b[k++] = a[i++];
    while(j <= end) b[k++] = a[j++];
    for(int i = start; i <= end; i++)
        a[i] = b[i];
}

void MergeSort(long long *a, int start, int end) {
    if(start < end) {
        int mid = (start + end)/2;
        MergeSort(a,start,mid);
        MergeSort(a,mid+1,end);
        Merge(a,start,mid,end);
    }
}
int main() {
    int n;
    while(scanf("%d",&n) != EOF) {
        count = 0;
        for(int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        MergeSort(a,0,n-1);
        printf("%lld\n",count);
    }
    return 0;
}
