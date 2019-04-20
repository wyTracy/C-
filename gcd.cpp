#include<iostream>

class Number {
public:
	int n;
	Number(int i) { n = i; }
	int maxDivisor(Number m) {
		int i;
		if (n < m.n) {
			int i;
			i = n;
			n = m.n;
			m.n = i;
		}
		while (m.n != 0) {
			i = n % m.n;
			n = m.n;
			m.n = i;
		}
		return n;
	}
	void show() {
		std::cout << n << std::endl;
	}
};

int main() {
	int n, n1, n2;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1), no2(n2);
		Number no3 = no1.maxDivisor(no2);  //最大公约数
		no3.show();
	}
}