//
//  main.cpp
//  2449
//
//  Created by 刘靖迪 on 2017/11/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
#include <map>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    map<char, char> MAP;
    MAP[')'] = '('; MAP[']'] = '['; MAP['}'] = '{';
    int k;
    cin >> k;
    while (k--) {
        char s[1010], tem;
        scanf("%s", s);
        stack<char> sk;
        int flag = 1;
        for (int i=0; i<strlen(s); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
                sk.push(s[i]);
            if (s[i] == '}' || s[i] == ')' || s[i] == ']') {
                if (sk.size() && (tem = sk.top()) == MAP[s[i]])
                    sk.pop();
                else {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag && !sk.size()) puts("YES");
        else puts("NO");
    }
    return 0;
}
