//
//  main.cpp
//  2982
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int T,n;
vector<int> V;
int solve()
{
    int ret;
    for(int i=0;i<V.size()-3;i++)
        if(V[i]==-1 || V[i+1]==-1 || V[i+2]==-1 || V[i+3]==-1)
        {
            if(V[i+3]==-1) ret=V[i+3]=V[i]+V[i+1]+V[i+2];
            else if(V[i+2]==-1) ret=V[i+2]=V[i+3]-V[i+1]-V[i];
            else if(V[i+1]==-1) ret=V[i+1]=V[i+3]-V[i+2]-V[i];
            else if(V[i]==-1) ret=V[i]=V[i+3]-V[i+2]-V[i+1];
        }
    if(ret<=0) return -1;
    for(int i=0;i<V.size()-3;i++)
        if(V[i+3]!=V[i]+V[i+1]+V[i+2]) return -1;
    return ret;
}

int main(int argc, const char * argv[]) {
    cin>>T;
    for(int step=0;step<T;step++)
    {
        cin>>n;
        V.clear();
        for(int i=1;i<=n;i++)
        {
            int xx;cin>>xx;
            V.push_back(xx);
        }
        printf("case #%d:\n",step);
        cout<<solve()<<endl;
    }
    return 0;
}
