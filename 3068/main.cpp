//
//  main.cpp
//  3068(2)
//
//  Created by 刘靖迪 on 2017/9/19.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int mymax;
int conversion(int x,int y) {
    int num = 0;
    while(x>0 && y>0)
    {
        --x;
        --y;
        num+=2;
    }
    if(x==0 && y==0) return num;
    if(x==1 || y==1) return num;
    if(x<y) swap(x,y);
    num+=(x/3*3);
    x%=3;
    if(x==2) num++;
    return num;
}

void solve(int a, int b, int c) {
    mymax = max(mymax,a+conversion(b,c));
    mymax = max(mymax,b+conversion(a,c));
    mymax = max(mymax,c+conversion(a,b));
}

int main(int argc, char * argv[]) {
    int T, a, b, c;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        scanf("%d%d%d", &a, &b, &c);
        mymax = 0;
        solve(a,b,c);
        printf("Case #%d:%d\n",i,mymax);
    }
    return 0;
}
