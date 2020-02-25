//
//  main.cpp
//  2033
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    while (getline(cin, s)) {
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
