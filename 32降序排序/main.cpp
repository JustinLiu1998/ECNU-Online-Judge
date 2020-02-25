//
//  main.cpp
//  32降序排序
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a[MAX];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n, greater<int>());
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    return 0;
}
