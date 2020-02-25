//
//  main.cpp
//  2445
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct gg{
    string name;
    int point;
} GG;
bool cmp (GG &a, GG &b) {
    return (a.point == b.point ? a.name < b.name : a.point > b.point);
}
void solve(){
    string sunny;
    int m;
    cin >> sunny >> m;
    int L=0, O=0, V=0, E=0;
    for (int i=0; i<sunny.length(); i++) {
        if (sunny.at(i) == 'L')
            L++;
        else if (sunny.at(i) == 'O')
            O++;
        else if (sunny.at(i) == 'V')
            V++;
        else if (sunny.at(i) == 'E')
            E++;
    }
    
    GG girl[m];
    int L_i, O_i, V_i, E_i;
    for (int i=0; i<m; i++) {
        cin >> girl[i].name;
        L_i = L;
        O_i = O;
        V_i = V;
        E_i = E;
        for (int j=0; j<girl[i].name.length(); j++) {
            if (girl[i].name.at(j) == 'L')
                L_i++;
            else if (girl[i].name.at(j) == 'O')
                O_i++;
            else if (girl[i].name.at(j) == 'V')
                V_i++;
            else if (girl[i].name.at(j) == 'E')
                E_i++;
        }
        girl[i].point = ((L_i+O_i)*(L_i+V_i)*(L_i+E_i)*(O_i+V_i)*(O_i+E_i)*(V_i+E_i)) % 100;
    }
    sort(girl, girl+m, cmp);
    cout << girl[0].name << endl;
}
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    while (n--)
        solve();
    return 0;
}
