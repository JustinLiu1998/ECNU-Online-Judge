//
//  main.cpp
//  2992
//
//  Created by 刘靖迪 on 2017/11/11.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;
int ans[210];
deque<int> D;
void cal(int n) {
    D.clear();
    for (int i=1; i<=n; i++) D.push_front(i);
    while(D.size() > 1) {
        D.pop_back();
        int x = D.back();
        D.pop_back();
        D.push_front(x);
    }
    ans[n] = D.front();
    return;
}

int main(int argc, const char * argv[]) {
    for (int i=5; i<=200; i++) {
        cal(i);
    }
    int T, cas=0; cin >> T;
    while (T--) {
        int n; cin >> n;
        printf("case #%d:\n%d\n", cas++, ans[n]);
    }
    return 0;
}
