//
//  main.c
//  3190
//
//  Created by 刘靖迪 on 2017/8/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T;
    scanf("%d",&T);
    for (int i=0; i<T; i++) {
        char a[30];
        scanf("%s",a);
        int j=0;
        int ans = 0;
        for (j=0; a[j] != '\0'; j++) {
            ans *= 3;
            if (a[j] == '1')
                ans+=1;
            else if (a[j] == '-')
                ans-=1;
        }
        printf("case #%d:\n%d\n",i ,ans);
    }
    return 0;
}
