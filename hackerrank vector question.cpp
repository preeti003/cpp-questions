#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, q,k,i,j;
	cin >> n >> q;

	vector<vector<int>> v(n);

	
	for (int i = 0; i < n; i++) {
		cin >> k;

		v[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> v[i][j];
		}
	}

	for (int c = 0; c < q; c++) {
		
		cin >> i >> j;
		cout << v[i][j] << endl;
	}
return 0;
}
