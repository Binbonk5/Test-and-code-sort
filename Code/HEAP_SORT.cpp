#include<bits/stdc++.h>
using namespace std;

// binkv2005 - Hoang Duc Dung

using ll = long long;

const ll N = 1e6 + 5;

double a[N];
ll n;

void build(ll size, ll root){
    ll u = root;
    ll l = 2 * root;
    ll r = 2 * root + 1;
    if(l <= size && a[l] > a[u])u = l;
    if(r <= size && a[r] > a[u])u = r;
    if(u != root){
        swap(a[u], a[root]);
        build(size, u);
    }
}
    
void HEAP_SORT(){
    for(int i = n / 2; i >= 1; i--)build(n, i);
    for(int i = n; i >= 2; i--){
        swap(a[1], a[i]);
        build(i - 1, 1);
    }
}


void FRE() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // freopen("test3.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
}

int main() {
    FRE();
    cin >> n;
    for(int i = 1; i <= n ; i++)cin >> a[i];
    HEAP_SORT();
    for(int i = 1; i <= n ; i++)cout << a[i] << " ";
    return (cout << '\n',0);
}
