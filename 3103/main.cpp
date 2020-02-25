//
//  main.cpp
//  3103
//
//  Created by 刘靖迪 on 2017/9/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIMU_T 1000000

double getpi() {
    double x, y;
    srand((unsigned int)time(NULL));
    int inArea = 0;
    for(int i = 0; i < SIMU_T; ++i)
    {
        x = ((double)rand()) / RAND_MAX;
        y = ((double)rand()) / RAND_MAX;
        if(x * x + y * y <= 1)
            ++inArea;
    }
    return (double)4 * inArea / SIMU_T;
}

int main() {
    printf("%.2f\n",getpi());
    return 0;
}
