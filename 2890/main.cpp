//
//  main.cpp
//  2890
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;
typedef struct{
    int stature;
    int num;
} mystruct;

int cmp (const void*a, const void*b) {
    mystruct *x = (mystruct *)a;
    mystruct *y = (mystruct *)b;
    return y->stature - x->stature;
}
void solve () {
    int n, m;
    cin >> n >> m;
    mystruct team_number[n];
    for (int i=0; i<n; i++) {
        cin >> team_number[i].stature;
        team_number[i].num = i+1;
    }
    qsort(team_number, n, sizeof(team_number[0]), cmp);
    int i;
    cin >> i;
    cout << team_number[i - 1].num;
    for (int j=1; j<m; j++) {
        cin >> i;
        cout << " " << team_number[i-1].num;
    }
    cout << endl;
}
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
