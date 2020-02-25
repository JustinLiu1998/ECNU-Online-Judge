//
//  main.cpp
//  2015
//
//  Created by 刘靖迪 on 2017/11/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int a[18][18];
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1) {
        int ans=-1, DIS=99999999;
        while (n--) {
            memset(a, 0, sizeof(a));
            int id, dis, r, c;
            scanf("%d%d%d%d", &id, &dis, &r, &c);
            for (int i=1; i<=r; i++) {
                for (int j=1; j<=c; j++) {
                    scanf("%1d", &a[i][j]);
                }
            }
            int flag = 0;
            for (int i=1; i<=r; i++) {
                if (flag) break;
                for (int j=1; j<=c; j++) {
                    if (!a[i][j-1] && !a[i][j+1] && !a[i-1][j] && !a[i][j]) {
                        if (dis < DIS) {
                            DIS = dis;
                            ans = id;
                        }
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (ans == -1) puts("Bad Luck,Rocker!");
        else cout << ans << endl;
    }
    return 0;
}
