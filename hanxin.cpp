#include <iostream>

class HanXin {
	int num;
public:
	HanXin() {
		num = 0;
	}
	void line3(int n) {
		num += 175 * n;
	}
	void line5(int n) {
		num += 21 * n;
	}
	void line7(int n) {
		num += 15 * n;
	}
	void showMany() {
		while (num > 105)
			num -= 105;
		if (num < 10 || num>100)
			std::cout << "Impossible" << std::endl;
		else
			std::cout << num << std::endl;
	}
};

int main() {
	int n, n1, n2, n3;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2 >> n3;
		HanXin hx;  //韩信
		hx.line3(n1);  //3人一排
		hx.line5(n2);   //5人一排
		hx.line7(n3);   //7人一排
		hx.showMany();
	}
}