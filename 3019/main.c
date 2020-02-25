//
//  main.c
//  3019
//
//  Created by 刘靖迪 on 2017/6/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>


/********** Specification of CharsReplace **********/
char*  CharsReplace(char *p) {
    int i;
    for (i=0; p[i]!='\0'; i++) {
        if (p[i]<'Z' && p[i] >= 'A') {
            p[i]+=1;
        }
        else if (p[i] == 'Z')
            p[i]='A';
    }
    return p;
}

/***************************************************************/

void solve()
{  char s[51];  scanf("%s",s);
    /********** CharsReplace is called here **********/
    printf("%s\n",CharsReplace(s));
    /*************************************************/
}

int main()
{  int i,t; scanf("%d\n",&t);
    for (i=0;i<t;i++) { printf("case #%d:\n",i); solve(); }
    return 0;
}
