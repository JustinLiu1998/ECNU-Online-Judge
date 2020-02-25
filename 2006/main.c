//
//  main.c
//  2006
//
//  Created by 刘靖迪 on 2017/4/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//
#include<stdio.h>
char a[1000001]={0};
int main(){
    long k, i=0, c, d;
    for(;i<1000000;i++){
        d=c=i;
        while(c){
        d+=c%10;
        c=c/10;
        }
    if(d<1000000){
        a[d]=1;
        }
    }
    for(k=1;k<1000001;k++){
        if (!a[k]){
        printf("%ld\n",k);
        }
    }
    return 0;
}
