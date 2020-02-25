//
//  main.cpp
//  3322
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string dayOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int DateToInt (int m, int d, int y){
    return
    1461 * (y + 4800 + (m - 14) / 12) / 4 +
    367 * (m - 2 - (m - 14) / 12 * 12) / 12 -
    3 * ((y + 4900 + (m - 14) / 12) / 100) / 4 +
    d - 32075;
}

void IntToDate (int jd, int &m, int &d, int &y){
    int x, n, i, j;
    
    x = jd + 68569;
    n = 4 * x / 146097;
    x -= (146097 * n + 3) / 4;
    i = (4000 * (x + 1)) / 1461001;
    x -= 1461 * i / 4 - 31;
    j = 80 * x / 2447;
    d = x - 2447 * j / 80;
    x = j / 11;
    m = j + 2 - 12 * x;
    y = 100 * (n - 49) + i + x;
}

string IntToDay (int jd){
    return dayOfWeek[jd % 7];
}

int main()
{
    int m,d,y;
    scanf("%d-%d-%d",&y,&m,&d);
    cout<<IntToDay(DateToInt(m,d,y))<<endl;
    return 0;
}
