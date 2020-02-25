//
//  main.cpp
//  2975
//
//  Created by 刘靖迪 on 2017/10/27.
//  Copyright © 2017年 刘靖迪. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
struct mystruct {
    int x;
    bool operator < (const mystruct &y) const {return x%10 < y.x%10 || (x%10 == y.x%10 && x < y.x);}
};
set<mystruct> st;
int main(int argc, const char * argv[]) {
    int T, cas=0;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        while (n--) {
            mystruct a; cin >> a.x;
            st.insert(a);
        }
        cout << "case #" << cas++ << ":\n";
        while (st.size()) {
            auto iter = st.begin();
            cout << (*iter).x << (st.size() == 1 ? "\n" : " ");
            st.erase(iter);
        }
    }
    return 0;
}
