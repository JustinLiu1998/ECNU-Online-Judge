//
//  main.cpp
//  1890
//
//  Created by 刘靖迪 on 2017/9/23.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    cout << setiosflags(ios::fixed) << setprecision(4);
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        M++;
        int a[N];
        for (int i=0; i<N; i++)
            scanf("%d", &a[i]);
        sort(a, a+N);
        int sum=0;
        for (int i=0; N-1-i>=0 && i<M; i++) {
            if (a[N-i-1]*a[N-i-1] >= (sum)/M ){
                sum+=a[N-i-1]*a[N-i-1];
            }
        }
        cout << 3.1415926*(sum/M) << endl;
    }
    
    return 0;
}
