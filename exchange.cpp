#include <iostream>

class Number {
	int num;
	int a[50];
public:
	Number(int n, int m = 10) { num = n; }
	int converto(int n) {
		int i = 0, sum = 0;
		while (num != 0) {
			a[i++] = num % n;
			num /= n;
		}
		for (int j = 0; j < i; j++) {
			sum = sum * 10 + a[j];
		}
		return sum;
	}
	void show() {
		std::cout << num << std::endl;
	}
};

int main() {
	int n, n1, n2;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1, 10);     //n1是10进制正整数
		Number no3 = no1.converto(n2);  //no3是n2进制的正整数
		no3.show();     //输出结果
	}
}