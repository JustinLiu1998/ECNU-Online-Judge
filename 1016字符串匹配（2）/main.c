//
//  main.c
//  1016字符串匹配（2）
//
//  Created by 刘靖迪 on 2017/10/8.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <stdio.h>
#include <string.h>
const int N=200010;
int np, n, cnt;
char s[N];
int ch[N][26], l[N], fa[N];
    int max(int a, int b){
    return a>b?a:b;
}
void insert(int c) {
    int x = np, y;
    l[np = ++cnt] = l[x] + 1;
    while (x && !ch[x][c]) ch[x][c] = np, x = fa[x];
    y = ch[x][c];
    if (!y) ch[x][c] = np;
    else {
        if (l[y] == l[x] + 1) fa[np] = y;
        else {
            int nq = ++cnt;
            memcpy (ch[nq], ch[y], sizeof(ch[y]));
            fa[nq] = fa[y],fa[y] = fa[np] = nq, l[nq] = l[x] + 1;
            while (ch[x][c] == y) ch[x][c] = nq, x = fa[x];
        }
    }
}
int main() {
    int n, ans=0; l[0]=-1;
    scanf("%s", s+1);
    n=(int)strlen(s+1);
    for(int i=1; i<=n; i++)
        insert(s[i]-'a');
    scanf("%s", s+1);
    n=(int)strlen(s+1);
    for(int i=1, x=0, now=-1; i<=n; i++) {
        int c = s[i]-'a';
        while (x && !ch[x][c]) x = fa[x] , now=l[x];
        if (ch[x][c]) x = ch[x][c], now++;
        ans = max(ans,now+1);
    }
    printf("%d\n", ans);
    return 0;
}
