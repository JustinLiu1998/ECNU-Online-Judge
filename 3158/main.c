//
//  main.c
//  3158
//
//  Created by 刘靖迪 on 2017/3/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d",(a && b),(a & b));
    return 0;
}
