//
//  main.cpp
//  3124
//
//  Created by 刘靖迪 on 2017/11/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    getchar();
    while (T--) {
        printf("case #%d:\n", cas++);
        set<string> ans;
        string a;
        getline(cin, a);
        for (int i=0; i<a.length(); i++) {
            if (a[i] == ',') a[i] = ' ';
            else if (a[i] == '.') a[i] = ' ';
            else if (a[i] == '!') a[i] = ' ';
            else if (a[i] == '?') a[i] = ' ';
        }
        stringstream ss(a);
        string tem;
        while (ss >> tem) {
            ans.insert(tem);
        }
        while (ans.size()) {
            auto iter = ans.begin();
            cout << (*iter) << (ans.size() == 1 ? "\n" : " ");
            ans.erase(iter);

        }
    }
    return 0;
}
