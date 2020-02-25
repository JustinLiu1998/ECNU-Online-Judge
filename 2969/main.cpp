//
//  main.cpp
//  2969
//
//  Created by 刘靖迪 on 2017/11/7.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, cas=0; cin >> T; getchar();
    while (T--) {
        printf("case #%d:\n", cas++);
        string s;
        getline(cin, s);
        int a, b, c, d, e=a=b=c=d=0;
        for (int i=0; i<s.size(); i++) {
            if (isupper(s[i])) a++;
            else if (islower(s[i])) b++;
            else if (s[i] == ' ') c++;
            else if (isdigit(s[i])) d++;
            else e++;
        }
        printf("%d %d %d %d %d\n", a, b, c,d, e);
    }
    return 0;
}
