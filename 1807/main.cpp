//
//  main.cpp
//  1807(c++)
//
//  Created by 刘靖迪 on 2017/9/3.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b[20000];
    while (cin >> a) {
        for (int i=0; i<a; i++) {
            cin >> b[i];
        }
        sort(b, b+a);
        cout << b[0];
        for (int i=1; i<a; i++) {
            cout << ' ' << b[i];
        }
        cout << endl;
    }
    return 0;
}
