//
//  main.cpp
//  3098
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    string s1, s2;
    cin >> s1 >> s2;
    int i=0;
    int len = s1.length() < s2.length() ? (int)s1.length() : (int)s2.length();
    while (i<len) {
        cout << s1.at(i);
        cout << s2.at(i++);
    }
    if (s1.length() < s2.length())
        while (i<s2.length())
            cout << s2.at(i++);
    if (s1.length() > s2.length())
        while (i<s1.length())
            cout << s1.at(i++);
    cout << endl;
    return 0;
}
