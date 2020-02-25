//
//  main.cpp
//  3354
//
//  Created by 刘靖迪 on 20/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
const int N = 1e5+100;
int a[400];
int dp[N];
const char s1[30] = "JDG will get takeaways!", s2[30] = "LJJ will get takeaways!";
int main(int argc, const char * argv[]) {
    for (int i=1; i*i<=N; i++) {
        a[i] = i*i;
    }
    for (int i=1; i<=N; i++) {                 //为1意味着 LJJ赢
        for (int j=1; a[j] <= i; j++) {
            if (dp[i-a[j]] == 0) {
                dp[i] = 1;
                break;
            }
        }
    }
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%s\n", dp[n] ? s1 : s2);
    }
    return 0;
}
