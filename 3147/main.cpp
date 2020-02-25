//
//  main.cpp
//  3147
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
void solve() {
    string a, b;
    char ans[310];
    getline(cin, a);
    getline(cin, b);
    int len = (int)b.size();
    int j=0;
    for (int i=0; i<a.size(); i++) {
        if (a[i] == ' ') { ans[i] = ' '; continue; }
        ans[i] = a[i] + b[j%len] - 'A';
        if (ans[i] > 'Z') ans[i] -= 26;
        j++;
    }
    ans[a.size()] = '\0';
    cout << ans << endl;
}
int main(int argc, const char * argv[]) {
    int T, cas=0;  cin >> T; getchar();
    while (T--) {
        printf("case #%d:\n", cas++);
        solve();
    }
    return 0;
}
