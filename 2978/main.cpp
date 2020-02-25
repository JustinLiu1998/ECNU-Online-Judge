//
//  main.cpp
//  2978
//
//  Created by 刘靖迪 on 2017/11/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        int a, b, ans=0, len=0;
        scanf("%d", &a);
        b = a;
        while (b) {
            ans += b%10;
            b/=10;
            len++;
        }
        int p = a%10, q = (a % 100) / 10, r = (a % 1000) / 100;
        while (len < a) {
            int t = p * (q + r);
            t %= 10;
            ans += t;
            r = q;
            q = p;
            p = t;
            len++;
            if (q == 0 && r == 0 && p == 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
