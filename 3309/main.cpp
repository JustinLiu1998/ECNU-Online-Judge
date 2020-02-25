//
//  main.cpp
//  3309
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int a[100010];
const string s1 = "Is SBT", s2 = "Is not SBT";
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        memset(a, 0, sizeof(a));
        int flag = 0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i] < 10 || a[i] > 30) {
                flag = 1;
            }
        }
        sort(a, a+n);
        if (!flag && a[n-1] - a[0] <= 3)
            cout << s1;
        else cout << s2;
        cout << endl;
    }
    return 0;
}
