//
//  main.c
//  3275
//
//  Created by 刘靖迪 on 2017/7/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year, month, day;
    int s=0;
    int days[13];
    days[0]=days[2]=days[4]=days[6]= days[7]=days[9]=days[11]=31;
    days[3]=days[5]=days[8]=days[10]=30;
    scanf("%d-%d-%d",&year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0)
        days[1] = 29;
    else
        days[1] = 28;
    if (month < 1 || month >12)
        s= -1;
    else if (day < 0 || day > days[month - 1])
        s = -1;
    else {
        for (int i=0; i<month - 1; i++)
            s+=days[i];
        s+=day;
    }
    printf("%d\n",s);
    return 0;
}
