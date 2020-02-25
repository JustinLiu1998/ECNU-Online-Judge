//
//  main.c
//  2031
//
//  Created by 刘靖迪 on 2017/4/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    while (scanf("%d",&n)!=EOF) {
        int a[n-1];
        for (int i=0; i<n; i++) {
            scanf("%d",&a[i]);      //输入n个数
        }
        int b[n-1];
        for (int j=0; j<n; j++) {
            b[j]=abs(a[j]);         //b数组为a数组的绝对值
        }
        for (int p=0; p<n; p++) {
            int min=b[p],k=p,c=0,q=0;       //k为最小值的下标
            for (q=p; q<n; q++) {   //最前面的下标为p
                if (min<=b[q]) {
                    min=min;
                }
                else {
                    min=b[q];
                    k=q;        //最小值下标为q
                }
            }
            c=b[k];b[k]=b[p];b[p]=c;        //b[k]也要变化，故写成min=b[p]出bug
            c=a[k];a[k]=a[p];a[p]=c;
        }
        printf("%d",a[0]);
        for (int x=1; x<n; x++) {
            printf(" %d",a[x]);
        }
        printf("\n");
    }
    return 0;
}
