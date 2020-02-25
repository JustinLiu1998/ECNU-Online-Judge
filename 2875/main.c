//
//  main.c
//  2875
//
//  Created by 刘靖迪 on 2017/6/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
typedef struct {char s[11]; int a;} stu;
int main() {
    stu rank[101];
    int n;
    double avg=0, x=0;
    scanf("%d",&n);
    for (int k=0; k<n; k++) {
        scanf("%s%d",rank[k].s, &rank[k].a);
        avg+=rank[k].a;
    }
    avg/=n;
    for (int k=0; k<n; k++) {
        x+=pow((double)(rank[k].a - avg), 2);
    }
    x=sqrt(x/(n-1));
    printf("%.2lf %.2lf\n",avg,x);
    return 0;
}
