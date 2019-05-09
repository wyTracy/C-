#include<iostream>

class Number {  //�����࣬���з������֡��ж������Ĳ��������ݳ�ԱΪһ��int�ͳ���mNum
public:
	Number(int num) :mNum(num) { //const���͵ĳ�ʼ��
	}
	Number(const Number& n) :mNum(n.mNum) {
	}
	~Number();
	NumberSet split() {  //�����ְ�λ����
		NumberSet ns;
		int n = mNum;
		while (n != 0) {
			int d = n % 10;
			Number dig(d);
			ns.add(dig);
			n = n / 10;
		}
		return ns;  //����һ������
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
	Number* nums[20];  //���������飬Ԫ��Ϊһnumber����
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
	void add(const Number & n) {  //�����ֶ������������
		size += 1;
		nums[size] = new Number(n);
	}
	Number sum() {  //��ͣ�����number����
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