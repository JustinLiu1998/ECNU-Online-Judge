//
//  main.cpp
//  1072
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    set<string> St;
    while (n--) {
        string a;
        cin >> a;
        St.insert(a);
    }
    for (auto iter = St.begin(); iter != St.end(); iter++) {
        cout << *iter << endl;
    }
    return 0;
}
