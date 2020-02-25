//
//  main.cpp
//  3244
//
//  Created by 刘靖迪 on 20/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef struct node{
    double val;
    int i;
    bool operator < (const struct node& y) const {
        return (val == y.val ? i < y.i : val < y.val);
    }
} NODE;
int x[15], K[15], y[15];
double px[15], py[15];
NODE a[210];
int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        int k, n;
        scanf("%d%d", &k, &n);
        const double kk = 1.0/k;
        
        int count = 0;
        for (int i=0; i<k; i++) {
            scanf("%d", &x[i]);
            count += x[i];
        }
        for (int i=0; i<k; i++) {
            px[i] = (x[i] + kk) / (count + 1);
        }
        
        for (int i=0; i<n; i++) {
            int m = 0;
            a[i].val = 0;
            a[i].i = i;
            for (int j=0; j<k; j++) {
                scanf("%d", &y[j]);
                m += y[j];
            }
            for (int j=0; j<k; j++) {
                py[j] = (y[j] + kk) / (m+1);
                a[i].val += px[j] * log(px[j] / py[j]);
            }
            if (abs(a[i].val) < 1e-7)
                a[i].val = 0.0000;
        }
        sort(a, a+n);
        for (int i=0; i<n; i++) {
            printf("%d %.4lf\n", a[i].i+1, a[i].val);
        }
    }
    return 0;
}
