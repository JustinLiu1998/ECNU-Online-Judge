//
//  main.cpp
//  3023
//
//  Created by 刘靖迪 on 2018/3/28.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int cas=0; cas<n; cas++) {
        printf("case #%d:\n", cas);
        set<string> a;
        char s[20];
        scanf("%s", s);
        for (int i=0; i<(int)strlen(s); i++) {
            string tem(1, s[i]);
            a.insert(tem);
        }
        set<string> b;
        string t;
        for (auto iter = a.rbegin(); iter != a.rend(); iter++) {
            vector<string> vec;
            t = *iter;
            vec.push_back(t);
            if (b.size()) {
                for (auto i = b.begin(); i != b.end(); i++) {
                    string tem = t + *i;
                    vec.push_back(tem);
                }
            }
            while (vec.size()) {
                b.insert(vec.back());
                vec.pop_back();
            }
        }
        for (auto iter = b.begin(); iter != b.end(); iter++) {
            cout << *iter << endl;
        }
    }
    return 0;
}
