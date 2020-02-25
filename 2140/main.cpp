//
//  main.cpp
//  2140
//
//  Created by 刘靖迪 on 2017/9/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int A[1010][1010], B[1010][1010];
void solve() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++)
            cin >> A[i][j];
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++) {
            cin >> B[i][j];
            A[i][j] += B[i][j];
        }
    for (int i=0; i<N; i++) {
        for (int j=0; j<M-1; j++)
            cout << A[i][j] << " ";
        cout << A[i][M-1] << endl;
    }
}
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) solve();
    return 0;
}
