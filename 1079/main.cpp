//
//  main.cpp
//  1079
//
//  Created by 刘靖迪 on 2017/9/5.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int tab[35][35];
    for (int i=0; i <= 32; i++) {tab[i][0]=1; tab[i][i]=1;}
    for (int i=2; i <= 32; i++) {
        for (int j=1; j<i; j++) {
            tab[i][j]=tab[i-1][j-1] + tab[i-1][j];
        }
    }
    int n;
    while (scanf("%d", &n) != EOF && n != 0){
        for (int j=0; j<n; j++) {
            for (int k=0; k<j; k++) {
                cout << tab[j][k] << " ";
            }
            cout << tab[j][j] << "\n";
        }
        cout << "\n";
    }
    return 0;
}
