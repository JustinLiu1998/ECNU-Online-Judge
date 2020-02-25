//
//  main.cpp
//  2831
//
//  Created by 刘靖迪 on 2017/11/29.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int ans[1010];
int main(int argc, const char * argv[]) {
    ans[1] = 1;
    for (int i=2; i<=1000; i++) {
        ans[i] = ans[i-1] * i;
        while (ans[i] % 10 == 0) {
            ans[i] /= 10;
        }
        ans[i] %= 1000;
    }
    int T;
    cin >> T;
    while (T--) {
        int n;
        scanf("%d", &n);
        cout << ans[n]%10 << endl;
    }
    return 0;
}
