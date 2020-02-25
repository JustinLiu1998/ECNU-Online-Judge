//
//  main.cpp
//  3621
//
//  Created by 刘靖迪 on 2018/7/6.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef pair<int, int> PI;
#define MAXN 150
int N;
#define Left(i) ((N+i-2)%N)+1
#define Right(i) (i%N)+1
#define min(a, b) a < b ? a : b
PI a[MAXN];
int path[MAXN];
double dis[MAXN][MAXN];

void input_addr() {
    cin >> N;
    for (int i=1; i<=N; i++) {
        scanf("%d%d%d", &a[i].first, &a[i].first, &a[i].second);
    }
}

inline double count_dis(int i, int j) {
    return sqrt((a[i].first - a[j].first)*(a[i].first - a[j].first) + (a[i].second - a[j].second)*(a[i].second - a[j].second));
}

void pre_count_distance() {                                  //预处理
    for (int i=1; i<=N; i++) {
        for (int j=i+1; j<=N; j++) {
            dis[i][j] = dis[j][i] = count_dis(i, j);
        }
    }
}

inline double get_distance(int i, int j) {
    return dis[path[i]][path[j]];                         //查表
}

void create_path() {
    for (int i=1; i<=N; i++) {
        path[i] = i;
    }
    srand((unsigned)time(0));
    for (int i = N; i>=1; i--) {
        int t = (rand() % i) + 1;
        swap(path[i], path[t]);
    }
}

void create_path2(int r = 2) {
    srand((unsigned)time(0));
    int k = (rand()%N) + 1;
    path[1] = k;
    set<int> p;
    for (int i=2; i<=N; i++) {
        int t = path[i-1];
        p.insert(t);
        set<pair<double, int>> S;
        for (int j = 1; j<=N; j++) {
            if (p.find(j) == p.end()) {
                S.insert(pair<double, int> {dis[t][j], j});
            }
        }
        int cnt = min(rand()%r, (int)S.size() - 1);
        set<pair<double, int>>::iterator iter = S.begin();
        while (cnt > 0) {
            iter++;
            cnt--;
        }
        path[i] = iter->second;
    }
}

double total_count() {
    double tem = 0;
    for (int i=1; i<=N; i++) {
        tem += get_distance(i, Right(i));
    }
    return tem;
}

double quick_cnt(int i, int j, double tem) {
    tem -= get_distance(j, Right(j));
    tem -= get_distance(i, Left(i));
    swap(path[i], path[j]);
    tem += get_distance(j, Right(j));
    tem += get_distance(i, Left(i));
    swap(path[i], path[j]);
    return tem;
}

void solve() {
    double temperature = 1000, end_temperature = 0.001;               //初始温度
    double rate = 0.97;
    create_path();
    double temp = total_count();
    srand((int)time(0));
    
    while (temperature - end_temperature > 0) {
        for (int i=1; i<=N; ++i) {
            for (int j=1; j<=N; ++j) {
                
                double tem = quick_cnt(i, j, temp);             //tem是f(j); temp是f(i)
                double f = exp((-(tem - temp)) / temperature);
                double random = (double)(rand() % 10000) / 10000;
                
                if (tem < temp || f > random) {                               //随机接受差解
                    bool r[MAXN] = {false};
                    int u = i, v = j;
                    while (1) {
                        if (r[u] || r[v])
                            break;
                        swap(path[u], path[v]);
                        r[u] = r[v] = true;
                        u = Right(u);
                        v = Left(v);
                    }
                    
//                    cout << setprecision(8) << temperature << '\t' << temp << endl;
                    temp = tem;
                }
            }
        }
        temperature *= rate;
    }
}

void output() {
//    for (int i=1;i<N; i++) {
//        printf("%d ", path[i]);
//    }
//    printf("%d\n", path[N]);
    cout << total_count() << endl;
}

int main(int argc, const char * argv[]) {
    input_addr();
    pre_count_distance();
    solve();
    output();
    return 0;
}
