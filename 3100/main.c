//
//  main.c
//  3100
//
//  Created by 刘靖迪 on 2017/8/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

//* Specification of GCD *

int GCD(int m,int n)

/* PreCondition:
 
 m,n are two positive integers
 
 PostCondition:
 
 return Greatest Common Divisor of m and n
 
 */

{ //TODO: your function definition
    int tem;
    if (m < n) {
        tem = m; m = n; n = tem;
    }
    
    if (m % n == 0 )
        return n;
    else return GCD(n, m % n);
}

/*********/

int main()

{ int m,n;
    
    scanf("%d%d",&m,&n);
    
    //* GCD is called here *****
    
    printf("GCD(%d,%d)=%d\n",m,n,GCD(m,n));
    
    //********
    
    return 0;
    
}
