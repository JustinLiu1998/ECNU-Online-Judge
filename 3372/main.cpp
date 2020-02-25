//
//  main.cpp
//  3372（2）
//
//  Created by 刘靖迪 on 2017/10/26.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include<iostream>
#include<algorithm>
#include<set>
#define LL long long
using namespace std;
multiset<int> t;
multiset<int>::iterator pos;
const int maxn=200000+63;
struct Node{
    int in,out,bi;
    bool operator <(const Node &rhs)const{return bi>rhs.bi||(bi==rhs.bi&&in>rhs.in);}
}a[maxn];
int n;
LL ans;
int main(){
    scanf("%d",&n);    t.insert(0);
    for(int i=1;i<=n;i++) scanf("%d%d%d",&a[i].out,&a[i].in,&a[i].bi),t.insert(-a[i].out);
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        pos=t.upper_bound(-a[i].in);
        ans+=(LL)(a[i].in+*pos)*a[i].bi;
        if(*pos!=0)
            t.erase(t.find(*pos));
    }
    cout<<ans<<endl;
    return 0;
}
