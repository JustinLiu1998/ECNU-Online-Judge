//
//  main.cpp
//  3095
//
//  Created by 刘靖迪 on 2017/9/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
#define N 10

void solve(int A[N][N], int B[N][N], int n) {
    int C[N][N], sum;
    for (int i=0; i<n; i++) {
        for (int j=0; j<N; j++) {
            sum=0;
            for (int k=0; k<n; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            printf("%d%c", C[i][j], j < n-1 ? ' ': '\n');
}
int main(int argc, const char * argv[]) {
    int A[N][N],B[N][N],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&B[i][j]);
    solve (A, B, n);
    return 0;
}
