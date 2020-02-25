//
//  main.cpp
//  2008
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const string a = "yes!\n", b = "no!\n";
int s[510];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int m;
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        s[x]++;
    }
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (s[x])
            cout << a;
        else cout << b;
    }
    return 0;
}
