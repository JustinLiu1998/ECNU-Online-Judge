//
//  main.cpp
//  3213
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
const int maxn = 1E6 + 100;
int n, a[maxn], ans[maxn];
stack<int> S;                                               //栈内存位置，从0开始的位置
int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = n - 1; i >= 0; --i) {
        while (!S.empty() && a[S.top()] <= a[i]) S.pop();    //a[S.top()]表示从右往左的最大高度
        if (S.empty()) ans[i] = -1;                          //如果没有，放-1
        else ans[i] = S.top();
        S.push(i);                                           //更新
    }
    for (int i = 0; i < n; ++i)
        printf("%d\n", ans[i] + 1);                         //+1

    return 0;
}
