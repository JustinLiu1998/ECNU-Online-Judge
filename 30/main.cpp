//
//  main.cpp
//  30
//
//  Created by 刘靖迪 on 2018/1/10.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int Digits(char *s) {
    int cnt = 0;
    for (int i=0; i<strlen(s); i++) {
        if (isdigit(s[i]))
            cnt++;
    }
    return cnt;
}
int main(int argc, const char * argv[]) {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
