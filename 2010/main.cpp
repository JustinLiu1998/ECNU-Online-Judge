//
//  main.cpp
//  2010
//
//  Created by 刘靖迪 on 2017/9/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n && n !=EOF) {
        for (int i=0; i<n; i++)
            cout << string(n-i, ' ') << string(2*i + 1, '*') << string(n-i, ' ') << endl;
        cout << string(2*n + 1, '*') << endl;
        for (int i=n-1; i>=0; i--)
            cout << string(n-i, ' ') << string(2*i + 1, '*') << string(n-i, ' ') << endl;
    }
    return 0;
}
