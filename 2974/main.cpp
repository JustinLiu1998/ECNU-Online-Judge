//
//  main.cpp
//  2974
//
//  Created by 刘靖迪 on 2017/11/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
const string a[12] = {"the", "a", "an", "of", "for", "and", "THE", "A", "AN", "OF", "FOR", "AND"};
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    getchar();
    while (T--) {
        printf("case #%d:\n", cas++);
        int cnt=0;
        string tem;
        getline(cin, tem);
        stringstream ss(tem);
        while (ss >> tem) {
            int flag = 1;
            for (int i=0; i<12; i++) {
                if (tem == a[i]) { flag = 0; break; }
            }
            if (flag) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
