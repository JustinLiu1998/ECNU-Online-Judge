//
//  main.cpp
//  3210
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    stack<int> Sk;
    multiset<int> St;
    int n;
    cin >> n;
    while (n--) {
        char c;
        cin >> c;
        switch (c) {
            case '1':
                int x;
                cin >> x;
                Sk.push(x);
                St.insert(x);
                break;
            case '2':
                St.erase(St.find(Sk.top()));
                Sk.pop();
                break;
            case '3':
                cout << *St.rbegin() << endl;
                break;
        }
    }
    return 0;
}
