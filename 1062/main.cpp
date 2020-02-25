//
//  main.cpp
//  1062
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
void bubble_sort (int *a, int n) {
    int t;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (a[j] > a[j+1]) {
                printf("%d %d\n", a[j], a[j+1]);
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
    puts("");
    return 0;
}

