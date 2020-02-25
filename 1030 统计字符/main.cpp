//
//  main.cpp
//  1030 统计字符
//
//  Created by 刘靖迪 on 2018/1/15.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    getchar();
    while (T--) {
        string s;
        getline(cin, s);
        int di=0, ot=0, al=0;
        for (int i=0; i<s.size(); i++) {
            if (isdigit(s[i]))
                di++;
            else if (isalpha(s[i]))
                al++;
            else ot++;
        }
        printf("character:%d\nnumber:%d\nothers:%d\n", al, di, ot);
    }
    return 0;
}
