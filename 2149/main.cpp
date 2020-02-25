//
//  main.cpp
//  2149
//
//  Created by 刘靖迪 on 20/12/2017.
//  Copyright © 2017 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
#include <queue>
using namespace std;
typedef struct node{
    int x, y;
    bool operator < (const struct node& b) const {
        return (x == b.x ? y < b.y : x < b.x);
    }
} NODE;
int main(int argc, const char * argv[]) {
    queue<NODE> a;
    set<NODE> b;
    char s[20];
    int n;
    scanf("%d", &n);
    int tem;
    NODE t;
    for (int i=0; i<n; i++) {
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%d", &tem);
            t.x = tem;
            t.y = i;
            a.push(t);
            b.insert(t);
            printf("%d\n", (int)b.size());
        }
        else if (s[0] == 'd') {
            t = a.front();
            while (b.find(t) == b.end()) {
                a.pop();
                t = a.front();
            }
            printf("%d\n", t.x);
            a.pop();
            t.y = 0;
            b.erase(b.lower_bound(t));
        }
        else if (s[0] == 'M') {
            t = *b.begin();
            printf("%d\n", t.x);
            b.erase(t);
        }
    }
    return 0;
}
