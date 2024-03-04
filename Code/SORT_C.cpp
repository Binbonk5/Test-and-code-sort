#include<bits/stdc++.h>
using namespace std;

// binkv2005 - Hoang Duc Dung

using ll = long long;

const ll N = 1e6 + 5;

double a[N];
ll n;

void FRE() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("test2.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
}

int main() {
    FRE();
    cin >> n;
    for(int i = 1; i <= n ; i++)cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n ; i++)cout << a[i] << " ";


    return 0;
}
