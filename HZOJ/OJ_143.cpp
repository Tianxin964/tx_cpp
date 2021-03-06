/*************************************************************************
	> File Name: OJ_143.cpp
	> Author: tianxin
	> Mail: 
	> Created Time: 2021年02月21日 星期日 17时30分31秒
 ************************************************************************/

#include <iostream>
using namespace std;

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_pow(int n) {
    switch(n) {
        case 1:
        case 4:
        case 9:
        case 16:
        case 25:
        case 36:
        case 49:
        case 64:
        case 81: return 1;
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    int flag = 0, cnt = 0;
    for (int i = a; i <= b; i++) {
        if ((i % 6 == 0) && is_prime(i / 100) && is_pow(i % 100)) {
            if (flag == 1) {
                cout << " ";
            }
            cout << i;
            flag = 1;
            cnt++;
        }
    }
    cout << endl;
    cout << cnt << endl;
    return 0;
}

