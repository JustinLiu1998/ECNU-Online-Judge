//
//  main.cpp
//  2782
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    int N;
    char s[20];
    cin >> N;
    while (N--) {
        cin >> s;
        if (!strcmp(s, "E"))
            cout << "Excellent" << endl;
        else if (!strcmp(s, "C"))
            cout << "Cheer" << endl;
        else if (!strcmp(s, "N"))
            cout << "Nice" << endl;
        else if (!strcmp(s, "U"))
            cout << "Ultimate" << endl;
        else if (!strcmp(s, "Impossible"))
            cout << "I'm possible" << endl;
        else if (!strcmp(s, "ACM"))
            cout << "Accept More" << endl;
    }
    return 0;
}
