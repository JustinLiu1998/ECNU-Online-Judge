//
//  main.cpp
//  2444
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

int a[100][100], b[100][100];

void solve () {
    int N, IA, IB, DA, DB;
    cin >> N;
    cin >> IA >> IB >> DA >> DB;
    int x, y, ans=0;
    x = IA < DB ? IA : DB;                                              //a[][]-b[][] == -1
    y = IB < DA ? IB : DA;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> b[i][j];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (a[i][j] - b[i][j] == -1)    ans += x;
            else if (a[i][j] - b[i][j] == 1)    ans += y;
            else ;
        }
    }
    cout << ans << endl;
}

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
