//
//  main.cpp
//  2458
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn];
int main(int argc, const char * argv[]) {
    int n, q;
    cin >> n >> q;
    a[0] = maxn;
    for (int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    for (int cas=0; cas<q; cas++) {
        int i, j, ans=1, dp = 1;
        scanf("%d%d", &i, &j);
        for (int t = i+1; t<=j; t++) {
            if (a[t] == a[t-1])
                dp++;
            else dp = 1;
            ans = max(ans, dp);
        }
        cout << ans << endl;
    }
    cin >> a[0];
    return 0;
}
