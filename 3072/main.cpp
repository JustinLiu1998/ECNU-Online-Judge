//
//  main.cpp
//  3072
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int T, cas=0;
int a[510];
int main(int argc, const char * argv[]) {
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i=0; i<n-1; i++) {
            for (int j=i; j<n; j++) {
                ans = max(ans, a[j]-a[i]);
            }
        }
        printf("case #%d:\n", cas++);
        cout << ans << endl;
    }
    return 0;
}
