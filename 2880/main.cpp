//
//  main.cpp
//  2880
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n, a, b, c = b = a = 0;
        cin >> n;
        while (n--) {
            int x, y, z;
            cin >> x >> y >> z;
            a+=x;
            b+=y;
            c+=z;
        }
        if (a == 0 && b == 0 && c == 0)
            puts("YES");
        else puts("NO");
    }
    return 0;
}
