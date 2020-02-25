//
//  main.cpp
//  1912
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[1010];
        scanf("%s", s);
        int len = (int)strlen(s);
        int i=0;
        while (i<len) {
            int cnt = 1;
            while (s[i + cnt] == s[i]) {
                cnt++;
            }
            printf("%d%c", cnt, s[i]);
            i+=cnt;
        }
        puts("");
    }
    return 0;
}
