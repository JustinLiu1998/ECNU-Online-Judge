//
//  main.cpp
//  3363
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[6], b[6];
    for (int i=0; i<6; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<6; i++)
        scanf("%d", &b[i]);
    int count = 0, equ = 0;
    for (int i=0; i<6; i++)
        for (int j=0; j<6; j++) {
            if (a[i] > b[j])
                count++;
            else if (a[i] == b[j])
                equ++;
        }
    double ans = (double)count / (36 - equ);
    cout << ans << endl;
    return 0;
}
