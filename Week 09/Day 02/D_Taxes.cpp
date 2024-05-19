//Author: Ahkam_Tasin
//Created: 2024-05-19 17:16:49
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool is_prime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (is_prime(n)) {
        cout << 1 << '\n';
    }
    else if (n % 2 == 0) {
        cout << 2 << '\n';
    }
    else {
        if (is_prime(n - 2)) {
            cout << 2 << '\n';
        }
        else {
            cout << 3 << '\n';
        }
    }
    return 0;
}