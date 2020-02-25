//
//  main.cpp
//  3298
//
//  Created by 刘靖迪 on 2017/9/14.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int main() {
    int kase;
    cin >> kase;
    while(kase--) {
        string s;
        cin >> s;
        stack<char> sc;
        for(int i=0;i<s.size();i++) {
            if(sc.empty() || sc.top()==s[i]) {
                sc.push(s[i]);
            }
            else if(sc.top()!=s[i]) {
                sc.pop();
            }
        }
        cout << sc.size() << endl;
    }
    return 0;
}

