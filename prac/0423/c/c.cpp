#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, D; cin >> N >> D;
	vector<vector<int> > p(D, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < D; j++) {
			cin >> p[i][j];
		}
	}

	vector<int> res_hotel;
	int res_price = 0;
	vector<int> tmp_min_hotel;
	int tmp_count = 0;

	for (int i = 0; i < D; i++) {
		int p_min = 10001;
		for (int j = 0; j < N; j++) {
			p_min = min(p_min, p[j][i]);
		}

		vector<int> min_hotel;
		for (int j = 0; j < N; j++) {
			if (p[j][i] == p_min) {
				min_hotel.push_back(j);
			}
		}

		int cnt = min_hotel.size();

		res_price += p_min;
		if (cnt == 1) {
			res_hotel.push_back(min_hotel[0]);
		} else {
			if (tmp_count == 0) {
				tmp_min_hotel = min_hotel;
				tmp_count = cnt;
			} else {
			}
		}
	}


	return 0;
}
