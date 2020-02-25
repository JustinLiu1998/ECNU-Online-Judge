//
//  main.cpp
//  3212
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
#include <map>
using namespace std;
map<char, char> mp;
string s;
bool solve () {
    stack<char> Sk;
    int n = (int)s.length();
    for (int i=0; i<n; i++) {
        if (mp.count(s[i])) {                              //如果s[i]是')', '}'或']'， 这里count的是key
            if (!Sk.empty() && Sk.top() == mp[s[i]])  Sk.pop();
            else return false;
        } else Sk.push(s[i]);
    }
    if (Sk.empty()) return true;
    return false;
}
int main(int argc, const char * argv[]) {
    mp[')'] = '('; mp['}'] = '{'; mp[']'] = '[';
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        if (solve()) puts("YES");
        else puts("NO");
    }
    return 0;
}
