//
//  main.cpp
//  2147
//
//  Created by 刘靖迪 on 2017/11/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T; cin >> T;
    while (T--) {
        int x, y;
        string a, b;
        cin >> x >> y >> a >> b;
        a+=a;
        a.pop_back();
        std::size_t found = a.find(b);
        if (found == std::string::npos || x < y)
            puts("NO");
        else puts("YES");
    }
    return 0;
}
