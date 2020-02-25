//
//  main.c
//  3164
//
//  Created by 刘靖迪 on 2017/3/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1,i = 0;
    char c;
    while((c=getchar()) != EOF){
        if((c == '\n'||c == ' ') && n== 0)
        {
            i++;
            n=1;
        }
        if (c >= 'A'&&c <= 'Z')
        n = 0;
    }
    printf("%d\n",i);
}
