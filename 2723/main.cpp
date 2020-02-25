//
//  main.cpp
//  2723
//
//  Created by 刘靖迪 on 2017/11/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a%b);
}
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}
int main(int argc, const char * argv[]) {
    int T, cas = 0;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << ++cas << " " << LCM(a, b) << " " << GCD(a, b) << endl;
    }
    return 0;
}
