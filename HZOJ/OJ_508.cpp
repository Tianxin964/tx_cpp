/*************************************************************************
	> File Name: OJ_508.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月28日 星期日 19时08分12秒
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

int main() {
    int n, num[1005], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i-=2) {
        if (i == 0) {
            ans += num[0];
            break;
        }
        if (i == 1) {
            ans += num[1];
            break;
        }
        if (i == 2) {
            ans += num[0] + num[1] + num[2];
            break;
        }
        ans += min(num[i] + num[0] + num[i - 1] + num[0],
                  num[1] + num[0] + num[i] + num[1]);
    }
    cout << ans << endl;

    return 0;
}
