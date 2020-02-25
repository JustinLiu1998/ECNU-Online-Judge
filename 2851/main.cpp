//
//  main.cpp
//  2851
//
//  Created by 刘靖迪 on 2017/11/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int n, cnt=0;
char s1[1000], s2[1000];
int judge (int aa) {
    sprintf(s1, "%d", aa);
    int lne = (int)strlen(s1);
    for (int i=0; i < lne/2; i++)
        if(s1[i] != s1[lne-i-1]) return 0;
    return 1;
}

int reverse (int aa) {
    sprintf(s1, "%d", aa);
    int len = (int)strlen(s1);
    for (int i=len-1; i>=0; i--)
        s2[i] = s1[len-i-1];
    s2[len] = '\0';
    int ret;
    sscanf(s2, "%d", &ret);
    return ret;
}
int add(int aa) {
    return aa + reverse(aa);
}
int main() {
    cin>>n;
    while(!judge(n)) {
        n = add(n);
        cnt++;
    }
    cout << cnt << " " << n << endl;
    return 0;
}

