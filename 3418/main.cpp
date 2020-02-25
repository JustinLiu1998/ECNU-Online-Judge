//
//  main.cpp
//  3418
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    int sum = 0;
    for (int i=0; i<s.size(); i++) {
        if (isdigit(s[i]))
            sum++;
    }
    cout << sum << endl;
    return 0;
}
