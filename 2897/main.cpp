//
//  main.cpp
//  2897
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
    const string del[6] = {"THE", "AN", "A", "OF", "AND", "FOR"};
    string s, temp;
    while (getline(cin, s)) {
        for (int i=0; i<s.size(); ++i)
            if (islower(s[i])) s[i] = toupper(s[i]);
            else if (s[i] == '-') s[i] = ' ';
        stringstream ss(s);
        while (ss >> temp) {
            int flag = 1;
            for (int i=0; i<6; ++i)
                if (temp == del[i]) {flag = 0; break;}
            if (flag) cout << temp[0];
        }
        cout << endl;
    }
    return 0;
}
