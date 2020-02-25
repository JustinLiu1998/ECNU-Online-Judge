//
//  main.cpp
//  3044
//
//  Created by 刘靖迪 on 2017/11/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        string a;
        int n;
        cin >> a >> n;
        if (n == 0)
            puts("");
        else{
            string ans;
            while (n--)
                ans += a;
            cout << ans << endl;
        }
    }
    return 0;
}
