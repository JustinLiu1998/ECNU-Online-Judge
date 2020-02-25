//
//  main.cpp
//  3291
//
//  Created by 刘靖迪 on 2017/9/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int tab[10001];
typedef struct {int p; int x; int y;} mystruct;
void pre() {
    memset(tab, 1, sizeof(tab));
    tab[0]=tab[1]=0; tab[2]=1;
    for (int i=2; i*i<10001; i++) {
        if (tab[i]) {
            for (int j=i+i; j<10001; j+=i) {
                tab[j]=0;                                               //不是素数则为0
            }
        }
    }
}
int p(int x, int y) {
    int num=0;
    for (int i=x; i<=y; i++) {
        if (tab[i]) num++;
    }
    return num;
}
int cmp (const void* x, const void* y) {
    mystruct* a = (mystruct*) x; mystruct* b = (mystruct*) y;
    if (a->p != b->p) return a->p - b->p;
    else if (a->x != b->x) return a->x - b->x;
    else return a->y - b->y;
}
void solve(int i) {
    int n;
    cin >> n;
    mystruct ranking[n+1];
    for (int j=0; j<n; j++) {
        cin >> ranking[j].x >> ranking[j].y;
        ranking[j].p = p(ranking[j].x, ranking[j].y);
    }
    qsort(ranking, n, sizeof(ranking[0]), cmp);
    printf("case #%d:\n", i);
    for (int j=0; j<n; j++) {
        cout << ranking[j].x << " " << ranking[j].y << endl;
    }
}
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    pre();
    for (int i=0; i<T; i++) {
        solve(i);
    }
    return 0;
}
