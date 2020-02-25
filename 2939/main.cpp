//
//  main.cpp
//  2939
//
//  Created by 刘靖迪 on 2018/1/24.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
typedef struct kk{
    char name[35] = "";
    int R = 0, P = 0, B = 0, G = 0;
    int RP = 0;
    string NAME;
    kk(char *s) {
        strcpy(name, s);
    }
    kk() {};
    void sets(char *s) {
        strcpy(name, s);
    }
    void sets(int a, int b, int c, int d) {
        R = a; P = b; B = c; G = d;
    }
    void build(){
        NAME.assign(name);
        int len = (int)strlen(name);
        for (int i=0; i<len; i++) {
            if (name[i] == 'R')
                R++;
            else if (name[i] == 'P')
                P++;
            else if (name[i] == 'B')
                B++;
            else if (name[i] == 'G')
                G++;
        }
        RP = (int)(pow(R, 4) + pow(P, 3) + pow(B, 2) + G) * (int)(R + pow(P, 2) + pow(B, 3) + pow(G, 4));
        RP %= 1211;
    }
    bool operator < (const struct kk &y) const {
        if (RP == y.RP)
            return NAME < y.NAME;
        else return RP > y.RP;
    }
} KK;
KK a[310];
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        char t[35];
        scanf("%s%d", t, &n);
        KK tem(t);
        tem.build();
        for (int i=0; i<n; i++) {
            scanf("%s", t);
            a[i].sets(t);
            a[i].sets(tem.R, tem.P, tem.B, tem.G);
            a[i].build();
        }
        sort(a, a+n);
        printf("%s\n", a[0].name);
    }
    return 0;
}
