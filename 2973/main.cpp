//
//  main.cpp
//  2973
//
//  Created by 刘靖迪 on 19/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int a[110];
int n, m;
int ret(int i, int j) {
    int tem = m-a[i]-a[j];
    int l=0, r=n-1, mid, ans=-1;
    if (tem >= a[0])
        while (l <= r) {
            mid = (l+r)/2;
            if (a[mid] <= tem) {
                if (mid != i && mid != j)
                    ans = max(ans, a[i]+a[j]+a[mid]);
                l = mid+1;
            }
            else
                r = mid-1;
        }
    return ans;
}
int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        memset(a, 0, sizeof a);
        scanf("%d%d", &n, &m);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int ans = 0;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                int t = ret(i, j);
                ans = max(ans, t);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
