//
//  main.cpp
//  2886
//
//  Created by 刘靖迪 on 2017/9/22.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    double salary;
    cin >> salary;
    if (salary <= 1500)
        cout << "0.00" << endl;
    else if (salary <= 3000)
        printf("%.2lf\n", (salary - 1500) * 0.05);
    else if (salary <= 5000)
        printf("%.2lf\n", (salary - 1500) * 0.10);
    else if (salary <= 10000)
        printf("%.2lf\n", (salary - 1500) * 0.15);
    else printf("%.2lf\n", (salary - 1500) * 0.20);
    return 0;
}
