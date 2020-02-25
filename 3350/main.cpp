//
//  main.cpp
//  3350
//
//  Created by 刘靖迪 on 2017/9/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct {int num, diff;} mystr;
mystr data[1000];
bool cmp_1(mystr &x, mystr &y) {return x.diff > y.diff;}
bool cmp_2(mystr &x, mystr &y) {return x.num < y.num;}

int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, k, tem;
        scanf("%d%d", &n, &k);
        for (int i=0; i<n; i++) {
            scanf("%d", &tem);
            data[i].diff = tem;
            data[i].num = i+1;
        }
        sort(data, data+n, cmp_1);
        sort(data, data+k, cmp_2);
        for (int i=0; i<k; i++)
            printf("%d%c", data[i].num, i<k-1 ? ' ' : '\n');
    }
    return 0;
}

