//
//  main.cpp
//  2539
//
//  Created by 刘靖迪 on 2017/11/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
#define x 1e-30
int main(int argc, const char * argv[]) {
    int r, cas=0;
    while (scanf("%d", &r) && r) {
        printf("Pizza %d ", ++cas);
        int l, w;
        scanf("%d%d", &w, &l);
        if ((double)2*r - sqrt(w*w + l*l) > -x)
            puts("fits on the table.");
        else puts("does not fit on the table.");
    }
    return 0;
}
