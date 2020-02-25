//
//  main.cpp
//  2611
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    int h=0, m=0, s=0;

    while (T--) {
        char x[20];
        cin >> x;
        h = (x[0]-'0') * 10 + (x[1] - '0');
        m = (x[3]-'0') * 10 + (x[4] - '0');
        s = (x[6]-'0') * 10 + (x[7] - '0');
        if (h >= 8) cout << "You are late!" << endl;
        else if (m > 50 || (m == 50 && s > 0)) cout << "You are late!" << endl;
        else if ((m > 45) || (m == 45 && s > 0)) cout << "Hurry up!" << endl;
        else cout << "You are living a healthy life!" << endl;
    }
    return 0;
}
