//
//  main.cpp
//  3352
//
//  Created by 刘靖迪 on 2017/9/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        ll n, x;
        cin >> n;
        int sum=0;
        for (int i=0; i<n; i++) {
            cin >> x;
            sum += x;
        }
        cout << sum * (ll)pow(2, n-1) << endl;
    }
    return 0;
}
