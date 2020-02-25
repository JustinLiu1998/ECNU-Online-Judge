//
//  main.cpp
//  46
//
//  Created by 刘靖迪 on 2018/1/11.
//  Copyright © 2018年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
typedef struct {
    int x, y, z;
} Point;
double Distance(Point &a, Point &b) {
    double ans = 0;
    ans = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) + pow((a.z - b.z), 2));
    return ans;
}
int main(int argc, const char * argv[]) {
    Point a, b;
    scanf("%d%d%d", &a.x, &a.y, &a.z);
    scanf("%d%d%d", &b.x, &b.y, &b.z);
    printf("%.9f\n", Distance(a, b));
    return 0;
}
