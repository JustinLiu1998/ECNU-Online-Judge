//
//  main.cpp
//  1499
//
//  Created by 刘靖迪 on 2017/11/1.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<iostream>
#include<vector>

using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;
const int mod = 1e8;
mat mul(mat A, mat B) {
    mat C(A.size(), vec(B[0].size()));
    for(int i= 0; i< A.size(); i++)
        for(int k= 0; k< B.size(); k++)
            for(int j= 0; j< B[0].size(); j++)
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % mod;
    return C;
}
mat pow(mat A, int n) {
    mat B(A.size(), vec(A.size()));
    for(int i= 0; i< A.size(); i++)
        B[i][i] = 1;
    while(n > 0) {
        if(n & 1) B = mul(B, A);
        A = mul(A, A);
        n >>= 1;
    }
    return B;
}

int main() {
    int n;
    while(scanf("%d", &n) == 1) {
        mat A(2, vec(2));
        A[0][0] = A[0][1] = A[1][0] = 1;
        A[1][1] = 0;
        A = pow(A, n+2);
        printf("%lld\n", A[1][0] - 1);
    }
    return 0;
}
