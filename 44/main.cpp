//
//  main.cpp
//  44
//
//  Created by 刘靖迪 on 2018/1/11.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
char p[31] = ",.?!#<=>:[]{}+-*/@$%^&()_~|\\0";
int punctuations(char *s) {
    int ret = 0;
    for (int i=0; i<strlen(s); i++) {
        for (int j=0; j<28; j++) {
            if (s[i] == p[j]) {
                ret++;
                break;
            }
        }
    }
    return ret;
}
int main(int argc, const char * argv[]) {
    char s[1025];
    gets(s);
    printf("%d\n", punctuations(s));
    return 0;
}
