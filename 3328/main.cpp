//
//  main.cpp
//  3328
//
//  Created by 刘靖迪 on 2017/12/13.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
using namespace std;
#define ll long long
#define F first
#define S second
#define mp make_pair
const int mod = 1e9+7;
inline int add(int a, int b){a += b; if(a >= mod) a -= mod; return a;}
inline int sub(int a, int b){a -= b; if(a < 0) a += mod; return a;}
const int N = 200005;
int x[N], P[N];
int ft[2][N];
set<int> s;
map<int,int> myp;
vector<pair<int,int> > vec;

int sum(int k, int b){
    int ret = 0;
    for (; b; b -= (b & (-b))) ret = add(ret, ft[k][b]);
    return ret;
}
int sum(int k, int l, int r){
    return sub(sum(k,r), sum(k, l - 1));
}
void update(int i, int k, int v){
    for (; k < N; k += (k & (-k))) ft[i][k] = add(ft[i][k], v);
}

int main(int argc, const char * argv[]){
    int n, m;
    cin >> n; m = 0; memset(ft, 0, sizeof (ft));
    s.clear(), myp.clear(); vec.clear();
    for(int i = 1; i <= n; i++) cin >> x[i], s.insert(x[i]);
    for(int i = 1; i <= n; i++) cin >> P[i], vec.push_back(mp(P[i], x[i]));
    for(int ele: s)myp[ele] = ++m;
    sort(vec.begin(), vec.end());
    int ans = 0;
    for(int i = 0;i < n;i++){
        int ind = myp[vec[i].S];
        ll suml = sum(0, ind), cntl = sum(1, ind);
        ll sumr = sum(0, ind, m), cntr = sum(1, ind, m);
        ans += (vec[i].F * ((cntl - cntr) * vec[i].S + sumr - suml))%mod;
        ans %= mod;
        update(0, ind, vec[i].S);
        update(1, ind, 1);
    }
    cout << (ans%mod + mod)%mod << endl;
    return 0;
}

