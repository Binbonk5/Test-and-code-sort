#include<bits/stdc++.h>
using namespace std;

// binkv2005 - Hoang Duc Dung

using ll = long long;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

const ll N = 1e6 + 5;

double a[N];
ll n;

ll random(ll l, ll r) {
    return rd() % (r - l + 1) + l;
}

void QUICK_SORT(ll l, ll r) {
    if(l >= r)return;
    ll p = random(l, r);
    swap(a[p], a[r]);
    p = r;
    ll i = l, j = r - 1;
    while (i <= j) {
        while (i <= j && a[i] <= a[p])i++;
        while (i <= j && a[j] > a[p])j--;
        if (i <= j)swap(a[i++], a[j--]);
    }
    swap(a[p], a[i]);
    QUICK_SORT(l, i - 1);   
    QUICK_SORT(i + 1, r);
}


void FRE() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("test2.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
}

int main() {
    FRE();
    cin >> n;
    for (int i = 1; i <= n; i++)cin >> a[i];
    QUICK_SORT(1, n);
    for(int i = 1; i <= n ; i++)cout << a[i] << " ";

    return 0;
}
