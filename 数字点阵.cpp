//输入的第一行含一个正整数k，表示测试例的个数，后面紧接着k行，每行对应一个测试例，包含一个正整数x(0 <= x <= 9999)。
/*
用点阵的形式在字符界面上显示数字。数字按如下形式显示。每个数字占5列7行，数字和数字之间用2个空格隔开



*****      *  *****  *****  *   *  *****  *****  *****  *****  *****

*   *      *      *      *  *   *  *      *          *  *   *  *   *

*   *      *      *      *  *   *  *      *          *  *   *  *   *

*   *      *  *****  *****  *****  *****  *****      *  *****  *****

*   *      *  *          *      *      *  *   *      *  *   *      *

*   *      *  *          *      *      *  *   *      *  *   *      *

*****      *  *****  *****      *  *****  *****      *  *****  *****


*/

#include <iostream>
using namespace std;
int num = 1;

class DotArray {   //点阵对象

	const int maxcol, maxrow;

public:
	DotArray():maxcol(1),maxrow(1) {

	}
	virtual void showrow() const {

	}

};

class DA0 : public DotArray {   //0的点阵

public:
	DA0() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "*   *";
		else if (num == 3)
			cout << "*   *";
		else if (num == 4)
			cout << "*   *";
		else if (num == 5)
			cout << "*   *";
		else if (num == 6)
			cout << "*   *";
		else
			cout << "*****";
	}

};

class DA1 : public DotArray {   //1的点阵

public:
	DA1() {};
	virtual void showrow() const {
			cout << "    *";	
	}
};

class DA2 : public DotArray {   //2的点阵

public:
	DA2() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "    *";
		else if (num == 3)
			cout << "    *";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "*    ";
		else if (num == 6)
			cout << "*    ";
		else
			cout << "*****";
	}

};

class DA3 : public DotArray {   //3的点阵

public:
	DA3() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "    *";
		else if (num == 3)
			cout << "    *";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "    *";
		else if (num == 6)
			cout << "    *";
		else
			cout << "*****";
	}

};

class DA4 : public DotArray {   //4的点阵

public:
	DA4() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*   *";
		else if (num == 2)
			cout << "*   *";
		else if (num == 3)
			cout << "*   *";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "    *";
		else if (num == 6)
			cout << "    *";
		else
			cout << "    *";
	}

};

class DA5 : public DotArray {   //5的点阵

public:
	DA5() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "*    ";
		else if (num == 3)
			cout << "*    ";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "    *";
		else if (num == 6)
			cout << "    *";
		else
			cout << "*****";
	}

};

class DA6 : public DotArray {   //6的点阵

public:
	DA6() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "*    ";
		else if (num == 3)
			cout << "*    ";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "*   *";
		else if (num == 6)
			cout << "*   *";
		else
			cout << "*****";
	}

};

class DA7 : public DotArray {   //7的点阵

public:
	DA7() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else
		    cout << "    *";
	}
};

class DA8 : public DotArray {   //8的点阵

public:
	DA8() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "*   *";
		else if (num == 3)
			cout << "*   *";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "*   *";
		else if (num == 6)
			cout << "*   *";
		else
			cout << "*****";
	}

};

class DA9 : public DotArray {   //9的点阵

public:
	DA9() {};
	virtual void showrow() const {
		if (num == 1)
			cout << "*****";
		else if (num == 2)
			cout << "*   *";
		else if (num == 3)
			cout << "*   *";
		else if (num == 4)
			cout << "*****";
		else if (num == 5)
			cout << "    *";
		else if (num == 6)
			cout << "    *";
		else
			cout << "*****";
	}

};

DA0 D0;
DA1 D1;
DA2 D2;
DA3 D3;
DA4 D4;
DA5 D5;
DA6 D6;
DA7 D7;
DA8 D8;
DA9 D9;


class DAPrinter {

private:

    int sum;

	int con;

	DotArray* das[4]; //最多4个点阵对象

public:

	DAPrinter(int n) :sum(n){
		for(int i=0;i<4;i++)
			das[i]=&D0;
		con = 0;
		num = 1;
	}

	void split() {
		int n = sum;
		con = 0;
		while (n) {
			con++;
			switch (n % 10) {
			      case 0:
					  das[con - 1] = &D0;
					  break;
				  case 1:
					  das[con - 1] = &D1;
					  break;
				  case 2:
					  das[con - 1] = &D2;
					  break;
				  case 3:
					  das[con - 1] = &D3;
					  break;
				  case 4:
					  das[con - 1] = &D4;
					  break;
				  case 5:
					  das[con - 1] = &D5;
					  break;
				  case 6:
					  das[con - 1] = &D6;
					  break;
				  case 7:
					  das[con - 1] = &D7;
					  break;
				  case 8:
					  das[con - 1] = &D8;
					  break;
				  case 9:
					  das[con - 1] = &D9;
					  break;
			}
			n /= 10;
		}
	}

	void print() {
		for (num; num <= 7; num++) {
			for (int i = con-1; i >= 0; i--) {
				das[i]->showrow();
				cout << "  ";
			}
			cout << endl;
		}
	}

	void reset() {
		for (int i = 0; i < 4; i++)
			das[i] = &D0;
		con = 0;
	}

};

int main() {

	int n;

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int n1;

		std::cin >> n1;

		cout << n1 << ":" << endl;

		DAPrinter p(n1);

		p.reset();

		p.split();

		p.print();

	}

	return 0;

}