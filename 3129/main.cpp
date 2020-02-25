//
//  main.cpp
//  3129
//
//  Created by 刘靖迪 on 2017/10/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas = 0;
    cin >> T;
    while (T--) {
        char x[150], y[150], ans[150];
        cin >> x;
        int len = (int)strlen(x);
        sort(x, x+len);
        strcpy(y, x);
        reverse(y, y+len);
        int flag = 0;
        for (int i=len-1; i>=0; i--) {
            ans[i] = y[i] - x[i] + flag + '0';
            if (ans[i] < '0') {
                ans[i] += 10;
                flag = -1;
            }
            else flag = 0;
        }
        ans[len] = '\0';
        int i=0;
        while (ans[i] == '0') i++;
        printf("case #%d:\n", cas++);
        if (ans[i] == '\0')
            puts("0");
        else cout << ans + i << endl;
    }
    return 0;
}
