//
//  main.cpp
//  9
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n, i=1;
    cin >> m >> n;
    for (int j=0; j<m; j++) {
        for (int k=0; k<n; k++) {
            cout << i++ << (k < n-1 ? ' ' : '\n');
        }
    }
    return 0;
}
