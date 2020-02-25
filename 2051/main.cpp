//
//  main.cpp
//  2051
//
//  Created by 刘靖迪 on 16/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#define INF 0x3f3f3f3f
using namespace std;
int main(int argc, const char * argv[]) {
    int k, n;
    while (scanf("%d%d", &k, &n) == 2) {
        int ans = 2, tem = INF, t;
        for (int i = 2; i<=k; i++) {
            t = 0;
            for (int j=2; j<i; j++) {
                t += (i-j);
            }
            for (int j=i+1; j<=k; j++) {
                t += (j-i)*n;
            }
            if (t < tem) {
                ans = i;
                tem = t;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
