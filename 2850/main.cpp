//
//  main.cpp
//  2850
//
//  Created by 刘靖迪 on 2017/10/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int nyears (int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return 366;
    else return 365;
}

int nmonths (int y,int m) {
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    else if (nyears(y)==366 && m==2) return 29;
    else if (nyears(y)==365 && m==2) return 28;
    else return 30;
}

int getday (int year, int month) {
    int i, sum=0;                //sum为天数总和
    if (year > 2008){
        for (i=2008; i<year; i++)
            sum += nyears(i);
    }
    if (month > 1)
        for (i=1; i<month; i++)
            sum += nmonths(year,i);
    return sum;
}

int main(int argc, const char * argv[]) {
    int i, j, sum, year, day;
    while ((scanf("%d",&year))!=EOF) {
        sum = getday(year,2) - getday(2008,2);
        day = (sum % 7 + 5) % 7;                            //判断1号是星期几
        printf(" SU MO TU WE TH FR SA\n");
        for (i=0;i<day;i++)                         //1号之前都空格
            printf("   ");                          //打印空格“3个宽度”
        for (i=1, j=day;i <= nmonths(year,2); i++,j++) {  //i代表天数
            if(j%7==0 && i>1)
                printf("\n");
            printf(" %2d",i);
        }
        printf("\n\n");
    }
    return 0;
}
