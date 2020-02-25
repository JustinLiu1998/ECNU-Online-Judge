//
//  main.cpp
//  1805
//
//  Created by 刘靖迪 on 2017/10/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iomanip>
#include <climits>
#include <new>
#include <utility>
#include <iterator>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <ctime>
using namespace std;

const int maxn = 1000200;

int n, k;
int sa[maxn], Rank[maxn], tmp[maxn], lcp[maxn];

bool compare_sa(int i, int j)
{
    if (Rank[i] != Rank[j])
        return Rank[i] < Rank[j];
    int ri = i + k <= n ? Rank[i+k] : -1;
    int rj = j + k <= n ? Rank[j+k] : -1;
    return ri < rj;
}

void construct_sa(char* s)
{
    n = (int)strlen(s);
    for (int i = 0; i <= n; ++i)
    {
        sa[i] = i;
        Rank[i] = i < n ? s[i] : -1;
    }
    for (k = 1; k <= n; k <<= 1)
    {
        sort(sa, sa+n+1, compare_sa);
        tmp[sa[0]] = 0;
        for (int i = 1; i <= n; ++i)
            tmp[sa[i]] = tmp[sa[i-1]] + (compare_sa(sa[i-1], sa[i]) ? 1 : 0);
        for (int i = 0; i <= n; ++i)
            Rank[i] = tmp[i];
    }
}

void construct_lcp(char* s)
{
    n = (int)strlen(s);
    for (int i = 0; i <= n; ++i)
        Rank[sa[i]] = i;
    int h = 0;
    lcp[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = sa[Rank[i]-1];
        if (h > 0)
            h--;
        for (; j + h < n && i + h < n; ++h)
            if (s[j+h] != s[i+h])
                break;
        lcp[Rank[i]-1] = h;
    }
}

void solve()
{
    char s[200000], t[100000];
    scanf("%s%s", s, t);
    int len = (int)strlen(s);
    s[len] = ' ';
    for (int i = len+1; i <= len*2; ++i)
        s[i] = t[i-len-1];
    s[len*2+1] = 0;
    construct_sa(s);
    construct_lcp(s);
    int ans = 0;
    for (int i = 0; i < strlen(s); ++i)
        if ((sa[i] < len) != (sa[i+1] < len))
            ans = max(ans, lcp[i]);
    printf("%d\n", ans);
}

int main()
{
    solve();
    return 0;
}

