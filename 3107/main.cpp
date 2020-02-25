//
//  main.cpp
//  3107
//
//  Created by 刘靖迪 on 2017/9/9.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
#define N 10

void input(int* p, int n) {
    for (int i=0; i<n; i++)
        cin >> p[i];
}

void process(int* p, int n) {
    int max=p[n-1], mx = n-1;
    for (int i=0; i<n; i++) {
        if (p[i] > max) {
            mx = i;
            max = p[i];
        }
    }
    p[mx] = p[n-1]; p[n-1] = max;
    int min=p[0], mn = 0;
    for (int i=0; i<n; i++) {
        if (p[i] < min) {
            mn = i;
            min = p[i];
        }
    }
    p[mn] = p[0]; p[0] = min;
}

void output(int* p, int n) {
    for (int i=0; i<n-1; i++)
        cout << p[i] << " ";
    cout << p[n-1] << endl;
}

int main() {
    int a[N],n;
    scanf("%d",&n);
    input(a,n);
    process(a,n);
    output(a,n);
    return 0;
}
