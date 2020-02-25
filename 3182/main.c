//
//  main.c
//  3182（2）
//
//  Created by 刘靖迪 on 2017/6/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
#define LEN 80
/********** Specification of SortStrings **********/
struct str{char *a; char b;} data[100];

int cmp(const void *c,const void *d){
    struct str *x = (struct str *)c; struct str *y = (struct str *)d;
    if (y->b - x->b ) return x->b - y->b;
    else return strcmp(x->a,y->a);
}
void SortStrings(char *p[], int n)
{
    int i,j,flag;
    for(i=0;i<n;i++){
        data[i].a=p[i];
        flag=0;
        for(j=0;p[i][j]!='\0';j++){
            if(p[i][j]<='9'&&p[i][j]>='0') {data[i].b=p[i][j];flag=1;break;}}
        if(flag==0) data[i].b=0;
    }
    qsort(data,n,sizeof(data[0]),cmp);
    for(i=0;i<n;i++) p[i]=data[i].a;
}
/***************************************************************/
int main()
{   char s[N][LEN],*a[N];
    int n,i,t,cas;
    scanf("%d",&cas);
    for(t=0; t<cas; t++)
    {   scanf("%d",&n);
        getchar();
        for (i=0; i<n; i++) scanf("%s",a[i]=s[i]);
        /***** function SortStrings is called here *****/
        SortStrings(a,n);
        /****************************************/
        printf("case #%d:\n",t);
        for (i=0; i<n; i++) printf("%s%c",a[i],i<n-1?' ':'\n');
    }
    return 0;
}
