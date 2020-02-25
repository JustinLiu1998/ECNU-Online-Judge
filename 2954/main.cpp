//
//  main.cpp
//  2954
//
//  Created by 刘靖迪 on 2017/9/4.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int m, n;
        cin >> m >> n;
        char s[m][n+1];
        for (int j=0; j<m; j++) {
            cin >> s[j];
        }
        int num=0;
        for (int j=0; j<m; j++) {
            for (int k=0 ;k<n ;k++) {
                if (s[j][k] == '.')
                    num++;
            }
        }
        cout << "case #" << i << ":\n" << num << endl;
    }
    return 0;
}
