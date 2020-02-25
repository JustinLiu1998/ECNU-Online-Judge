//
//  main.cpp
//  3060
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        ll a, b, ans=1;
        int n;
        cin >> a >> b >> n;
        for (int i=0; i<b; i++) {
            ans *= a;
            ans %= 1000000000;
        }
        ans %= (ll)pow(10, n);
        printf("case #%d:\n", cas++);
        cout << setw(n) << setfill('0') << ans << endl;
    }
    return 0;
}
