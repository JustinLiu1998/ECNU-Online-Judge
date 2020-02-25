//
//  main.cpp
//  3237
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a[11];
    a[0]=1;
    for (int i=1; i<11; i++) {
        a[i] = a[i-1]*i;
    }
    int T, cas=0;
    cin >> T;
    while (T--) {
        int n, ans=0;
        cin >> n;
        for (int i=10; i; i--) {
            ans*=10;
            ans+=n / a[i];
            n %= a[i];
        }
        printf("case #%d:\n", cas++);
        cout << ans << endl;
    }
    return 0;
}
