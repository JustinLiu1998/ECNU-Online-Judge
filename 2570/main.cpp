//
//  main.cpp
//  2570
//
//  Created by 刘靖迪 on 2017/9/10.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdbool>

using namespace std;

#define MAX 10000
bool x[MAX+1];
int main() {
    memset(x, true , sizeof(x));
    x[0] = x[1] = false; x[2] = true;
    int i,j;
    for(i = 2; i * i <= MAX; i ++) {
        if(x[i]){
            for(j = i + i; j <= MAX; j += i)
                x[j] = false;
        }
    }
    int C;
    cin >> C;
    while (C--) {
        int N, ans=0;
        cin >> N;
        for (int i=1; i<=N; i++) {
            if (x[i] && x[N+1-i])
                ans ++;
        }
        cout << ans << endl;
    }
    return 0;
}
