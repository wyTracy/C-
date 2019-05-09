#include<iostream>

class Number {  //数字类，含有分离数字、判断素数的操作，数据成员为一个int型常量mNum
public:
	Number(int num) :mNum(num) { //const类型的初始化
	}
	Number(const Number& n) :mNum(n.mNum) {
	}
	~Number();
	NumberSet split() {  //将数字按位分离
		NumberSet ns;
		int n = mNum;
		while (n != 0) {
			int d = n % 10;
			Number dig(d);
			ns.add(dig);
			n = n / 10;
		}
		return ns;  //返回一个对象
	}
	bool isPrime() {
		for (int i = 2; i < mNum; ++i) {
			if (mNum % i == 0)
				break;
		}
		if (i != mNum)
			return false;
		return true;
	}
private:
	const int mNum;
};
class NumberSet {  
private:
	Number* nums[20];  //数字型数组，元素为一number类型
	int size;
public:
	NumberSet() {
		size = 0;
		for (int i = 0; i < 20; ++i)
			nums[i] = NULL;
	}
	~NumberSet() {
		for (int i = 0; i < size; ++i)
			delete nums[i];
	}
	void add(const Number & n) {  //将数字对象加入数组中
		size += 1;
		nums[size] = new Number(n);
	}
	Number sum() {  //求和，返回number对象
		Number sum(0);
		for (int i = 0; i < size; ++i) {
			if (nums[i] != NULL)
				sum.add(*(nums[i]));
		}
		return sum;
	}
};
class SuperPrime : public Number {
public:
	SuperPrime(int num);
	~SuperPrime();

	bool isPrime();

	Prime sumBit();
	Prime multiBit();
	Prime sqaureSumBit();
private:
	const int num;
}
int main()
{
	SuperPrime sp(113);
	if (sp.isPrime()) {
		; // do something
	}
}