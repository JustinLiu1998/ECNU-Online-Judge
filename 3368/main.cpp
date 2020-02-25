//
//  main.cpp
//  3368
//
//  Created by 刘靖迪 on 2017/9/28.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
typedef struct {char name[15]; int a[2] = {0};} mystr;
mystr lesson[10000];
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int j=0;
    char tem[15];
    for (int i=0; i<n; i++) {
        scanf("%s", tem);
        int tem1, flag = 1;
        scanf("%d", &tem1);
        for (int k=0; k<j; k++) {
            if (strcmp(lesson[k].name, tem) == 0) {
                flag = 0;
                if (lesson[k].a[1] == 0)
                    lesson[k].a[1] = tem1;
                else {
                    if (tem1 > min(lesson[k].a[0], lesson[k].a[1]))
                        lesson[k].a[0] < lesson[k].a[1] ? lesson[k].a[0] = tem1 : lesson[k].a[1] = tem1;
                }
            }
        }
        if (flag) {
            strcpy(lesson[j].name, tem);
            lesson[j].a[0] = tem1;
            j++;
        }
    }
    int ans=0;
    for (int i=0; i<=j; i++) {
        ans += lesson[i].a[0];
        ans += lesson[i].a[1];
    }
    cout << ans << endl;
    return 0;
}
