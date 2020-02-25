//
//  main.cpp
//  3139
//
//  Created by 刘靖迪 on 2017/9/24.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int N; cin>>N;
    while (N--) {
        int n, m;
        cin>>n>>m;
        int a, b;
        a = (n*4-m)/2;
        b = n-a;
        if (m % 2 ==1 || a<0 || b<0)
             cout<<"No answer"<<endl;
        else cout<<a<<" "<<b<<endl;
    }
    return 0;
}
