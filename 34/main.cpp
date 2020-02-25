//
//  main.cpp
//  34
//
//  Created by 刘靖迪 on 2018/1/7.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>                                     //有错
#include <cstring>
char *Filter(char *s, char *x) {
    int len = (int)strlen(x);
    for (int i=0; i<strlen(s) - len; i++) {
        int flag = 1;
        for (int j=0; j<len; j++) {
            if (s[i+j] != x[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            for (int j = i+len; j<=strlen(s); j++) {
                s[j-len] = s[j];
            }
            i--;
        }
    }
    return s;
}
using namespace std;
int main(int argc, const char * argv[]) {
    char s[81], x[81];
    scanf("%s%s", s, x);
    printf("%s\n", Filter(s, x));
    return 0;
}
