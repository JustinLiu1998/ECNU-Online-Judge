//
//  main.cpp
//  3104
//
//  Created by 刘靖迪 on 2017/9/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

char* i2a(char* p,int n)
{
    static int i=0;
    if(n/10) i2a(p,n/10);
    else i=0;
    p[i++]=n%10+'0';
    p[i]=0;                                                         //即'/0'
    return p;
}

int main()
{  int n; char s[20];
    scanf("%d",&n);
    printf("%s\n",i2a(s,n));
    return 0;
}
