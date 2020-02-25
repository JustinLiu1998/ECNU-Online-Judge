//
//  main.c
//  3017
//
//  Created by 刘靖迪 on 2017/6/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

//********** Specification of FactorialZeros **********
int FactorialZeros(int n)
/* PreCondition:
 n is an integer, 1=<n<=20
 PostCondition:
 return the number of right zeros of n!
 */

{
    return n/5;
    
    
}

/***************************************************************/

void solve()
{  int n;  scanf("%d",&n);
    //********** FactorialZeros is called here **********
    printf("%d\n",FactorialZeros(n));
    //***************************************************
}

int main()
{  int i,t; scanf("%d\n",&t);
    for (i=0;i<t;i++) { printf("case #%d:\n",i); solve(); }
    return 0;
}

