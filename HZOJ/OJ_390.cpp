/*************************************************************************
	> File Name: OJ_390.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年03月14日 星期日 23时18分11秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

int n, m, num[100005], rawr;

int func(int x) {
    int t = 0; 
    for (int i = 0; i < n; i++) {
        t += num[i] / x;
    }
    return t;
}

int bs() {
    int l = 1, r = rawr;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return r;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        rawr = max(rawr, num[i]);
    }
    cout << bs() << endl;
    
    return 0;
}
