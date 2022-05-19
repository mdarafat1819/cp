#include <bits/stdc++.h>

using namespace std;

void update(int tree[], int idx, int n, int value) {
	while(idx <= n) {
		tree[idx] += value;
		idx += (idx & -idx);
	}
}

int query(int tree[], int idx) {
	int sum = 0;
	while(idx > 0) {
		sum += tree[idx];
		idx -= (idx & -idx);
	}

	return sum;
}

int main() {

	int arr[] = {1, 2, 3, 4, 5}, tree[6];

	memset(tree, 0, sizeof(tree));

	for(int i  = 0; i < 5; i++) {
		update(tree, i + 1, 5, arr[i]);
	}

	cout<<query(tree, 3)<<endl;
	return 0;
}