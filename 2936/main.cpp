//
//  main.cpp
//  2936
//
//  Created by 刘靖迪 on 2017/9/20.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    char s1[60], s2[60];
    while (n--) {
        cin >> s1 >> s2;
        if (strstr(s1, s2) == NULL)
            cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
