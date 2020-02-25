//
//  main.c
//  3159
//
//  Created by 刘靖迪 on 2017/3/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    unsigned long n;
    gets(s);
    n = strlen(s);
    for (i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
        else s[i] = s[i];
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
