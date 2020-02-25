//
//  main.cpp
//  2994
//
//  Created by 刘靖迪 on 19/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct k{
    int x, num;
    bool operator < (const struct k& y) const{
        return (num == y.num ? x < y.x : num > y.num);
    }
} K;
K a[510];
int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        memset(a, 0, sizeof(a));
        int n;
        scanf("%d", &n);
        for (int i=0; i<500; i++) {
            a[i].x = i;
        }
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            a[x].num++;
        }
        sort(a, a+500);
        for (int i=0; i<500; i++) {
            if (a[i].num)
                for (int j=0; j<a[i].num; j++) {
                    printf("%d ", a[i].x);
                }
        }
        puts("");
    }
    return 0;
}
