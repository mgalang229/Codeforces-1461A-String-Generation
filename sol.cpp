#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	int n, k;
	cin >> n >> k;
	n-=k;
	for(int i=0; i<k; ++i)
		cout << 'a';
	int tmp=98;
	for(int i=0; i<n; ++i) {
		if(tmp>99)
			tmp=97;
		cout << (char)tmp++;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
