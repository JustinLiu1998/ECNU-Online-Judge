//
//  main.cpp
//  2610
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        int M, K;
        cin >> M >> K;
        int a[M], ans=0;
        for (int i=0; i<M; i++) {
            cin >> a[i];
        }
        for (int i=0; i<K; i++) {
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
