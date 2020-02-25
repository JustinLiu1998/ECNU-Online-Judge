//
//  main.cpp
//  1031最短路径(C++)
//
//  Created by 刘靖迪 on 2017/10/30.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
const int MAXN=1000000;
vector<int> g[605];//邻接表，g[i]一次存储与i邻接的边的下标，方便快速查找
bool vis[605];//标记数组
int low[605],n,m;//当前最短距离
struct Edge{//边类
    int from,to,dis;
};
vector<Edge> edge;//存储边的情况
struct Node{//用于优先队列中的节点
    int d,u;
    bool operator<(const Node &b)const{
        return this->d>b.d;
    }
};
void dijkstra(){
    for(int i=0;i<=n;++i) low[i]=MAXN;//初始化
    low[1]=0;
    memset(vis,false,sizeof(vis));
    priority_queue<Node> q;
    q.push((Node){0,1});
    while(!q.empty()){
        Node x=q.top();//快速找当前最短距离点
        q.pop();
        int u=x.u;
        if(vis[u]) continue;//如果该点已经为最优，则忽略
        vis[u]=true;
        for(int i=0;i<g[u].size();++i){//更新
            Edge &e=edge[g[u][i]];
            if(low[e.to]>low[u]+e.dis){
                low[e.to]=low[u]+e.dis;
                q.push((Node){low[e.to],e.to});
            }
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    while(m--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        edge.push_back((Edge){a,b,c});
        g[a].push_back(edge.size()-1);
    }
    dijkstra();
    if(low[n]>=MAXN) printf("-1\n");
    else printf("%d\n",low[n]);
    return 0;
}

