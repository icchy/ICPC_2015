#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N, M; cin >> N >> M;
	int info[8] = {0};

	for (int i = 0; i < M; i++) {
		int a; cin >> a;
		int tmp = max(info[a], info[a-1])+1;
		info[a] = tmp;
		info[a-1] = tmp;
	}

	int res = 0;

	for (int i = 0; i < N; i++) {
		if (res < info[i]) {
			res = info[i];
		}
	}

	cout << res << endl;

	return 0;
}
