//
//  main.cpp
//  2907
//
//  Created by 刘靖迪 on 2017/9/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 1) {
        cout << "YES" << endl;
        return 0;
    }
    else if (N == 2 || N == 3 || N == 4 || N == 5) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        int flag = 1;
        for (int i=2; i*i <= N; i++) {
            if (N % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
