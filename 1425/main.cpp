//
//  main.cpp
//  1425
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string a, b;
    while (cin >> a >> b) {
        int i=0, j=0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                i++; j++;
            }
            else j++;
        }
        if (i == (int)a.size())
            puts("Yes");
        else puts("No");
    }
    return 0;
}
