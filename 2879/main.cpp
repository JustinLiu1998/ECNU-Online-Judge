//
//  main.cpp
//  2879
//
//  Created by 刘靖迪 on 18/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int dp[510][510];
int gcd(int a,int b) {
    return b ? gcd(b, a%b) : a;
}
int main(int argc, const char * srgv[]) {
    int n, a[510], i, j, sum=0, x, y;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (i=0; i<n; i++)
        for (j = i+1; j<n; j++)
            dp[i][j] = dp[j][i] = gcd(a[i],a[j]);
    for (i=0; i<n; i++) {
        x = y = 0;
        for (j=0; j<n; j++)
            if (i != j) {
                if (dp[i][j] == 1)
                    x++;
                else y++;
            }
        sum += x*y;
    }
    printf("%d\n", n*(n-1)*(n-2)/6 - sum/2);
}

