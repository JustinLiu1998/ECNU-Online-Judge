//
//  main.c
//  3160
//
//  Created by 刘靖迪 on 2017/3/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main()
{
        char c;
        int a,line,maxlength,i;
        a = line = maxlength = i = 0;
        while (scanf("%c",&c) != EOF)
        {
            if (c != '\n')
            {
                a++;
                i++;
            }
            if (c == '\n')
            {
                line++;
                if (i >= maxlength)
                    maxlength = i;
                i = 0;
            } 
        }
        printf("%d,%d,%d",a,line,maxlength);
        return 0;
}
