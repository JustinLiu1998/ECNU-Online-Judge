//
//  main.cpp
//  2945
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef struct k{
    string s;
    int val, i;
    bool operator < (const struct k &y) const {
        return (val == y.val ? i < y.i : val > y.val);
    }
} K;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    K q[n];
    for (int i=0; i<n; i++) {
        string a;
        int b;
        cin >> a >> b;
        q[i] = {a, b, i};
    }
    sort(q, q+n);
    cout << q[0].s << endl;
    for (int i=1; q[i].val == q[i-1].val; i++) {
        cout << q[i].s << endl;
    }
    return 0;
}
