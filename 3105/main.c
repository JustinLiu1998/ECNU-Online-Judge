//
//  main.c
//  3105(2)
//
//  Created by 刘靖迪 on 2017/6/6.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char ans[100],temp[100];
    int max = -1;
    memset(temp, 0, sizeof(temp));
    while (scanf("%s",temp) != EOF) {
        int len = (int)strlen(temp);
        if (len > max) {
            memset(ans, 0, sizeof(ans));
            strcpy(ans, temp);
            max = len;
        }
        memset(temp, 0, sizeof(temp));
    }
    printf("%s\n",ans);
    return 0;
}
