//
//  main.c
//  3173
//
//  Created by 刘靖迪 on 2017/5/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

//********** Specification of binarySearch **********
int binarySearch(int a[],int L,int R,int x)
/* PreCondition:
 a is an array in ascending order, x is the value to be found
 L and R are lower and upper bounds to be searched
 PostCondition:
 return index of an element of a that has value x, -1 if not found
 */

{ //TODO: your function definition -- RECURSIVE SOLUTION
    
    int mid = (L + R) / 2;
    if (R < L) return -1;
    if (a[mid] == x) return mid;
    else if (a[mid] > x) return binarySearch(a, L, mid-1, x);
    //high = mid-1;
    else if (a[mid] < x) return binarySearch(a, mid+1, R, x);
    //low = mid + 1;
    return 0;
}

/***************************************************************/

#define N 1000

int main()
{
    int n,i,a[N+1],x;
    scanf("%d",&n);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    
    //********** binarySearch is called here ************
    printf("%d\n",binarySearch(a,0,n-1,x));
    //**************************************************
    return 0;
}
