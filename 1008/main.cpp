//
//  main.cpp
//  1008
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long LL;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    while (n--) {
        LL t = 5, m;
        int ans = 0;
        cin >> m;
        while (t <= m) {
            ans += m/t;
            t *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}
