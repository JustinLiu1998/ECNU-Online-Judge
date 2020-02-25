//
//  main.c
//  3274
//
//  Created by 刘靖迪 on 2017/8/12.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d",&n) != EOF) {
        int num[51], flag = 0, ad=0;
        for (int i=0; i<n; i++) {
            scanf("%d",&num[i]);
            if (num[i] > 1  && num[i] < 5 && flag == 0)
            {flag = 1; ad=i;}
        }
        if (flag == 0)
            printf("Deep Dark Fantasy of ECNU\n");
        else {
            for (int i=0; i<n; i++) {
                if (i==ad)
                    printf("1 1");
                else
                    printf("%d",num[i]);
                if (i < n-1)
                    printf(" ");
                else if (i == n-1)
                    printf("\n");
            }
        }
    }
    return 0;
}
