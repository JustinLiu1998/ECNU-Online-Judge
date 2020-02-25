//
//  main.cpp
//  3191
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int Count(int month, int day, int year, bool t) {
    int cnt = 0;
    cnt += year - 2000;
    if (month == 2) {
        if (t && day == 29) {
            cnt++;
        }
    }
    else if (month > 2) {
        cnt++;
    }
    return cnt;
}
int main(int argc, const char * argv[]) {
    map<string, int> Q;
    Q["January"] = 1;   Q["February"] = 2;  Q["March"] = 3;     Q["April"] = 4;
    Q["May"] = 5;   Q["June"] = 6;  Q["July"] = 7;  Q["August"] = 8;
    Q["September"] = 9;     Q["October"] = 10;  Q["November"] = 11;     Q["December"] = 12;
    int T, cas=0;
    scanf("%d", &T);
    while (T--) {
        printf("case #%d:\n", cas++);
        string a, b;
        int d1, d2, y1, y2;
        cin >> a;
        scanf("%d,%d", &d1, &y1);
        cin >> b;
        scanf("%d,%d", &d2,&y2);
        printf("%d\n", Count(Q[b], d2, y2, 1) - Count(Q[a], d2, y2, 0));
    }
    return 0;
}
