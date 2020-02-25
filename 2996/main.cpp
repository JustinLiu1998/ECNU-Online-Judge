//
//  main.cpp
//  2996
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int a, n;
        cin >> a >> n;
        ll ans=1;
        for (int i=0; i<n; i++) {
            ans *= a;
        }
        printf("case #%d:\n", cas++);
        cout << ans << endl;
    }
    return 0;
}
