//
//  main.cpp
//  3358
//
//  Created by 刘靖迪 on 2017/9/25.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int n, a, num=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a;
            if (a <= 10)
                num++;
        }
        cout << num << endl;
    }
    return 0;
}
