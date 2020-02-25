//
//  main.c
//  2130
//
//  Created by 刘靖迪 on 2017/3/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i,a,u,v;
    double x,y;                         /*x为偶数和，y为奇数和，u为偶数个数，v为奇数个数*/
    while (scanf("%d",&n)!=EOF&&n<=1000) {
        x=0,y=0,u=0,v=0;
        for (i=1; i<=n; i++) {
            scanf("%d",&a);
            if (a%2==0) {
                u++;
                x+=a;
            }
            if (a%2!=0) {
                v++;
                y+=a;
            }
        }
        if (v) {
            printf("%.3f ",y/v);
        }
        else printf("None ");
        if (u) {
            printf("%.3f\n",x/u);
        }
            else printf("None\n");
    }
    return 0;
}
