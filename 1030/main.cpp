//
//  main.cpp
//  1030
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<iostream>
using namespace std;
int a[100];
int main(){
    int n;
    a[1] = a[2] = a[3] = 1;
    for (int i=4;i<=60;i++) a[i]=a[i-1]+a[i-3];
    while (scanf("%d", &n) && n != 0) printf("%d\n", a[n+2]);
    return 0;
}
