//
//  main.c
//  2003
//
//  Created by 刘靖迪 on 2017/3/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    double x,y;
    while (scanf("%lf%lf",&x,&y) != EOF) {
        printf("%.3f\n",pow(x, y));
        
    }
    return 0;
}
