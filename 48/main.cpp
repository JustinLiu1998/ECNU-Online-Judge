//
//  main.cpp
//  48
//
//  Created by 刘靖迪 on 2018/1/11.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool cmp(string &a, string &b) {
    if (a[0] == b[0])
        return a > b;
    else return a < b;
}
int main(int argc, const char * argv[]) {
    string s[101];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    sort(s, s+n, cmp);
    for (int i=0; i<n; i++) {
        cout << s[i] << endl;
    }
}
