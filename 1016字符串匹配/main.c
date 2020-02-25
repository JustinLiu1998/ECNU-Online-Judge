//
//  main.c
//  1016字符串匹配
//
//  Created by 刘靖迪 on 2017/10/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int maxn = 100200;

int n, k;
int sa[maxn], Rank[maxn], tmp[maxn], lcp[maxn];
char s[2*maxn+1], t[maxn];
//string s, t;

int max (int a, int b) {
    return a > b ? a : b;
}

int compare_sa(const void *x, const void *y)
{   int *i = (int *)x, *j = (int *)y;
    if (Rank[*i] != Rank[*j])
        return Rank[*i] - Rank[*j];
    int ri = *i + k <= n ? Rank[*i+k] : -1;
    int rj = *j + k <= n ? Rank[*j+k] : -1;
    return ri - rj;
}

int comp (int i, int j)
{
    if (Rank[i] != Rank[j])
        return Rank[i] - Rank[j];
    int ri = i + k <= n ? Rank[i+k] : -1;
    int rj = j + k <= n ? Rank[j+k] : -1;
    return ri - rj;
}

void construct_sa(char *s)
{
    n = (int)strlen(s);
//    n = (int)s.size();
    for (int i = 0; i <= n; ++i)
    {
        sa[i] = i;
        Rank[i] = i < n ? s[i] : -1;
    }
    for (k = 1; k <= n; k <<= 1)
    {
        qsort(sa, n+1, sizeof(sa[0]), compare_sa);
        tmp[sa[0]] = 0;
        for (int i = 1; i <= n; ++i)
            tmp[sa[i]] = tmp[sa[i-1]] + ((comp(sa[i-1], sa[i]) < 0) ? 1 : 0);
        for (int i = 0; i <= n; ++i)
            Rank[i] = tmp[i];
    }
}

void construct_lcp(char *s)
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
//    getline(cin, s);
//    getline(cin, t);
    scanf("%s%s", s, t);
    int len = (int)strlen(s);
    strcpy(s, " ");
    strcpy(s, t);
    construct_sa(s);
    construct_lcp(s);
    int ans = 0;
    for (int i = 0; i < strlen(s); ++i)
        if ((sa[i] < len) != (sa[i+1] < len))
            ans = max(ans, lcp[i]);
    printf("%d\n", ans);
}

int main(int argc, const char * argv[]) {
    solve();
    return 0;
}
