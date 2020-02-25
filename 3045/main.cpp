//
//  main.cpp
//  3045
//
//  Created by 刘靖迪 on 2017/12/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef struct student{
    long long num;
    char name[10];
    int score[3];
    bool operator < (const student y) const {
        return (score[0] + score[1] + score[2] == y.score[0] + y.score[1] + y.score[2]) ? num < y.num : (score[0] + score[1] + score[2] > y.score[0] + y.score[1] + y.score[2]);
    }
} STUDENT;

int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int n;
        scanf("%d", &n);
        STUDENT a[n];
        for (int i=0; i<n; i++) {
            scanf("%lld%s%d%d%d", &a[i].num, a[i].name, &a[i].score[0], &a[i].score[1], &a[i].score[2]);
        }
        sort(a, a+n);
        for (int i=0; i<n; i++) {
            printf("%lld %s %d %d %d\n", a[i].num, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2]);
        }
    }
    return 0;
}
