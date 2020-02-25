//
//  main.cpp
//  2145
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int C, n;
    cin >> C;
    while (C--) {
        cin >> n;
        int ans=0, a=4;
        while (n) {
            ans += (n--) * a;
            a += 8;
        }
        cout << ans << endl;
    }
    return 0;
}
