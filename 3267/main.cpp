//
//  main.cpp
//  3267
//
//  Created by 刘靖迪 on 2017/10/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int power(int n) {
    return n+(n/10)*9+(n/100)*9;
}
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int a, b, k, ans=0;
        cin >> a >> b >> k;
        int r1=power(a), r2=power(b);
        for (int i=0; i<=k; i++)
            ans = max(ans, (power(a+i)-r1+power(b+k-i)-r2));
        printf("Case %d: %d\n", ++cas, ans);
    }
    return 0;
}
