#include <iostream>

int main() {
	int x, _1, _10, _100, dif, count = 0;
	std::cin >> x;
	for (int i = 1; i <= x; ++i) {
		if (i >= 100) {
			_100 = i / 100;
			_10 = (i % 100) / 10;
			_1 = i % 10;
			dif = _100 - _10;
			if (dif == _10 - _1) {
				count += 1;
			}
		}
		else {
			count += 1;
		}
	}
	std::cout << count << std::endl;

	return 0;
}