//
//  main.cpp
//  2442
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    getchar();
    while (T--) {
        char c;
        int a;
        while ((c = getchar()) != '\n') {
            a = c - 'a' + 1;
            printf("%02d", a);
        }
        cout << endl;
    }
    return 0;
}
