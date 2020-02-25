//
//  main.cpp
//  3290
//
//  Created by 刘靖迪 on 2017/10/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
void solve () {
    string a;
    cin >> a;
    int jinwei = 0;                                             //进位
    for (int i=0; i < a.length()-1; i++) {
        if (a.at(i) < a.at(i+1)) {
            for (int j=i+1; j<a.length(); j++) {                //后面全部置0
                a.at(j) = '0';
            }
            int j = i;
            jinwei = 1;
            while (j>=0) {
                a.at(j) += jinwei;
                jinwei = (a.at(j) - '0') / 10;
                if (jinwei)
                    a.at(j) = '0';
                j--;
            }
            //第一位是9，并且有进位的情况是永远不会发生的
            if (i <= 0)                                        //后退一位重新判断 i-1 和 i
                break ;
            else i -= 2;                                        //后面会i++
        }
    }
    cout << a << endl;
}
int main(int argc, const char * argv[]) {
    int T, cas = 0; cin >> T;
    while (T--)  {
        printf("case #%d:\n", cas++);
        solve();
    }
    return 0;
}
