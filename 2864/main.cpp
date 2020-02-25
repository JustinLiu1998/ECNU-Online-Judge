//
//  main.cpp
//  2864
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s.length() << " " << s << endl;
    return 0;
}
