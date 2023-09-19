#include <iostream>
#include <cmath>
using namespace std;
class person {
	public:
		int num;
		int score;
};
int main(void) {
	int n;
	int m;
	std::cin >> n >> m;
	person per[n];
	person win[m];
	for (int temp = 0; temp < n; temp++) {
		std::cin >> per[temp].num >> per[temp].score;
	}
	int p = std::floor(m * 1.5);
	for (long long unsigned int t = 0; t < sizeof(per) / sizeof(per[0]); t++) {
		if (per[t].score >= p) {
			win[t].num = per[t].num;
			win[t].score = per[t].score;
		}
	}
	for (int t = 0; t < sizeof(win) / sizeof(win[0]); t++) {
		if (win[t].score <= win[t + 1].score) {
			if (win[t].score <= win[t + 1].score) {
				temp = win[t + 1].score;
				win[t + 1].score = win[t].score;
				win[t].score = temp;
				temp = win[t + 1].num;
				win[t + 1].num = win[t].num;
				win[t].num = temp;
			} else {
				if (win[t + 1].num < win[t].num) {
					temp = win[t + 1].score;
					win[t + 1].score = win[t].score;
					win[t].score = temp;
					temp = win[t + 1].num;
					win[t + 1].num = win[t].num;
					win[t].num = temp;
				}
			}
		}
	}
	std::cout << p << " " << sizeof(win) / sizeof[win[0]] << std::endl;
	for (int t = 0; t < sizeof(win) / sizeof[win[0]]; t++)
		std::cout << win[t].num << " " << win[t].score << std::endl;
	return 0;
}