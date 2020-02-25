//
//  main.cpp
//  3144
//
//  Created by 刘靖迪 on 2017/11/15.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
int T;
double now;
double cal_time (const string& tmp) {
    double hour, minute, seconds;
    sscanf (tmp.c_str(),"%lf:%lf:%lf", &hour, &minute, &seconds);
    return hour * 3600 + minute * 60 + seconds;
}
void solve() {
    int n;
    cin >> n;
    now = 0;
    for (int i=1; i<=n; i++) {
        string tmp;
        cin >> tmp;
        now += cal_time(tmp);
    }
    while (now >= 86400) now -= 86400;
    
    if (now - 14400 >= 0 && now - 43200 < 0) cout << "Good morning!" << endl;
    else if (now - 43200 >= 0 && now - 64800 < 0) cout << "Good afternoon!" << endl;
    else if (now - 64800 >=0 && now - 79200 < 0) cout << "Good evening!" << endl;
    else cout << "Good night!" << endl;
    return;
}

int main() {
    scanf("%d",&T);
    for(int i=0; i<T; i++) {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}

