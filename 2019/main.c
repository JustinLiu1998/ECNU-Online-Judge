//
//  main.c
//  2019(2)
//
//  Created by 刘靖迪 on 2017/3/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//
#include <stdio.h>
unsigned int encrypt(unsigned int number)
{
    unsigned short high16, low16;
    unsigned int value = 0;
    low16 = (unsigned short ) (number>>16);
    high16 = (unsigned short) (number & 0xFFFF);
    low16= ~low16;
    high16 ^= low16;
    value |= high16;
    value <<=16;
    value |= low16;
    return value;
}
int main()
{
    unsigned int input;
    while (scanf("%u", &input) == 1)
    {
        printf("%X\n", encrypt(input));
    }
    return 0;
}
