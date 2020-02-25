//
//  main.cpp
//  1845
//
//  Created by 刘靖迪 on 2017/9/18.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    char c, s[210];
    int i=0;
    while ((c = getchar()) != '\n') {
        s[i++] = c;
    }
    int n=i;
    for (i=0; i<n; i++) {
        if (s[i] == '<') {
            if (s[i+1] == 'b' && s[i+2] == 'r' && s[i+3] == '>') {
                cout << endl;
                i+=3;
            }
            else cout << s[i];
        }
        else cout << s[i];
    }
    cout << endl;
    return 0;
}
