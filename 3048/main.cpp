//
//  main.cpp
//  3048
//
//  Created by 刘靖迪 on 2017/11/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T;
    while (T--) {
        getchar();
        string s, temp;
        getline(cin, s);
        stringstream ss(s);
        cin >> s;
        int ans = 0;
        while (ss >> temp) {
            if (s == temp)
                ans++;
        }
        printf("case #%d:\n", cas++);
        cout << ans << endl;
    }
    return 0;
}
