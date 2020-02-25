//
//  main.cpp
//  2971
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        int C, W;
        scanf("%d%d", &C, &W);
        int cnt = 0;
        for (int i=int(pow(10, C-1)); i<pow(10, C); i+=10) {
            int x = i + W;
            if (x % 3 == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
