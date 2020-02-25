//
//  main.cpp
//  3005
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long double ld;

int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        printf("case #%d:\n", cas++);
        ld m ,n;
        cin >> m >> n;
        ld x=m-n;
        if (x < n) n=x;
        ld ans=1, num=n;
        for (int i=0; i<num; i++) {
            ans *= m, ans /= n;
            m--,  n--;
        }
        printf("%.0Lf\n", ans);
        
    }
    return 0;
}
