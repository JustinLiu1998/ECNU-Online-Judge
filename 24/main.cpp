//
//  main.cpp
//  24
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int MAXN = 1e5+10;
string s1[MAXN], s2[MAXN];
int k1, k2;
int judge() {
    if (k1 != k2) return 0;
    for (int i = 0; i < k1; i++)
        if (s1[i] != s2[i]) return 0;
    return 1;
}
int main(int argc, const char * argv[]) {
    int K, cas = 0;
    cin >> K;
    while (K--) {
        scanf("%d", &k1);
        for (int i=0; i<k1; i++) {
            cin >> s1[i];
            transform(s1[i].begin(), s1[i].end(), s1[i].begin(), ::tolower);
        }
        scanf("%d", &k2);
        for (int i=0; i<k2; i++) {
            cin >> s2[i];
            transform(s2[i].begin(), s2[i].end(), s2[i].begin(), ::tolower);
        }
        sort(s1, s1 + k1);
        sort(s2, s2 + k2);
        printf("Case %d: %s\n", ++cas, judge() ? "YES" : "NO");
    }
    return 0;
}
