//
//  main.cpp
//  3018
//
//  Created by 刘靖迪 on 2017/11/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
void solve () {
    string a, b; getline(cin, a); getchar(); getline(cin, b);
    for (int i=0; i<a.size(); i++) if (islower(a[i])) a[i] = toupper(a[i]);
    for (int i=0; i<b.size(); i++) if (islower(b[i])) b[i] = toupper(b[i]);
    if (b.find(a+" ") == 0) cout << b.find (a+" ") + 1 << endl;
    else if (b.find(" "+a+" ") != string::npos) cout << b.find(" "+a+" ") + 2 << endl;
    else if (b.find(" "+a) == b.length() - a.length() - 1) cout << b.length() - a.length() + 1 << endl;
    else cout << "None" << endl;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int T, cas=0; cin >> T;
    while (T--) { cout << "case #" << cas++ << ":" << endl; solve();}
    return 0;
}
