//
//  main.cpp
//  3002
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

typedef long long ll;
void lplus (char y[], char z[], char ans[]) {
    char a[1200]= "", b[1200] = "";
    strcpy(a, y); strcpy(b, z);
    int m, n, x;
    m = (int)strlen(a); n = (int)strlen(b);
    char p[1200] = "", q[1200] = "0", c[1200] ="";
    if (m >= n) {
        x = m-n;
        for (int i=0; i<x; i++) {
            strcat (p, q);
        }
        strcat(p, b);
        strcpy(b, p);
    }
    else {
        x = n-m;
        for (int i=0; i<x; i++) {
            strcat(p, q);
        }
        strcat(p, a);
        strcpy(a, p);
    }
    x = (int)strlen(a);
    int flag=0 ,i;
    for (i=x-1; i>=0; i--) {
        c[i] = (a[i] - '0' + b[i] - '0' + flag) % 10 + '0';
        flag = (a[i] - '0' + b[i] - '0' + flag) / 10;
    }
    if (flag == 0) {
        strcpy(ans, c);
    }
    else {
        strcpy(ans, "1");
        strcat(ans, c);
    }
}


int main(int argc, const char * argv[]) {
    char Ti[75][1200];
    Ti[0][0]='0', Ti[1][0]='1', Ti[2][0]='1';
    Ti[0][1] = Ti[1][1] = Ti[2][1] = '\0';
    for (int i=3; i<75; i++) {
        lplus(Ti[i-3], Ti[i-2], Ti[i]);
        lplus(Ti[i], Ti[i-1], Ti[i]);
    }
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int x;
        cin >> x;
        printf("case #%d:\n", i);
        cout << Ti[x] << endl;
    }
    return 0;
}
