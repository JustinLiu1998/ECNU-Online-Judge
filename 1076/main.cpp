//
//  main.cpp
//  1076
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;

const int maxn = 100000 + 10;
int main(int argc, const char * argv[]) {
    int N;
    while (scanf("%d", &N) && N) {
        int x[maxn] = {0};
        int a, b;
        for (int i=0; i<N; i++) {
            cin >> a >> b;
            x[a]++;
            x[b+1]--;
        }
        int ans=0;
        for (int i=1; i<=N-1; i++)
            printf("%d ", ans+=x[i]);
        printf("%d\n", ans+=x[N]);
    }
    return 0;
}
