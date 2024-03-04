#include<bits/stdc++.h>
using namespace std;

// binkv2005 - Hoang Duc Dung

using ll = long long;

const ll N = 1e6 + 5;

double a[N];
ll n;

void MERGE(ll l, ll mid , ll r){
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    double L[n1 + 5], R[n2 + 5];
    for(int i = 1; i <= n1; i++)L[i] = a[l + i - 1];
    for(int i = 1; i <= n2; i++)R[i] = a[mid + i];
    ll i = 1, j = 1, k = l;
    while(i <= n1 && j <= n2){
        if(L[i] <= R[j])a[k] = L[i++];
        else a[k] = R[j++];
        k++;
    } 
    for(int x = i; x <= n1; x++)a[k++] = L[x];
    for(int x = j; x <= n2; x++)a[k++] = R[x];
}

void MERGE_SORT(ll l , ll r){
    if(l >= r)return;
    ll mid = (l + r) >> 1;
    MERGE_SORT(l, mid);
    MERGE_SORT(mid + 1, r);
    MERGE(l, mid , r);
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
    for(int i = 1; i <= n ; i++)cin >> a[i];
    MERGE_SORT(1, n);
    for(int i = 1; i <= n ; i++)cout << a[i] << " ";


    return 0;
}
