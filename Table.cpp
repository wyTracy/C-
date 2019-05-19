#include<iostream>
#include<string>
using namespace std;


class Table {
private:
	int row;
	int col;
	string a[100][100];
public:
	Table(int r=3,int c=3) {
		row = r;
		col = c;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				a[i][j] = '*';
	}

	void addRow() {
		for (int i = 0; i < col; i++)
			a[row][i] = '*';
		row++;
	}

	void addColumn() {
		for (int i = 0; i < row; i++)
			a[i][col] = '*';
		col++;
	}

	void delRow(int r) {
		if (r < row) {
			for (int i = r - 1; i < row; i++) {
				for (int j = 0; j < col; j++) {
					a[i][j] = a[i + 1][j];
				}
			}
		}
		row--;
	}

	void delColumn(int c) {
		if (c < col) {
			for (int i = c - 1; i < col; i++) {
				for (int j = 0; j < row; j++) {
					a[j][i] = a[j + 1][i];
				}
			}
		}
		col--;
	}

	void set(int r, int c, string s) {
		a[r - 1][c - 1] = s;
	}

	void set(int r, int c, int n) {
		a[r - 1][c - 1] = to_string(n);
	}

	void show() {
		for (int i = 0; i < col; i++)
			cout << i+1 << '\t';
		cout << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++)
				cout << a[i][j] << '\t';
			cout << endl;
		}
		cout << "-------------------------------------------------------"<<endl;

	}
};

int main() {
	Table tb;
	tb.show();
	tb.addRow();
	tb.show();
	tb.addColumn();
	tb.show();
	Table tb1(5, 5);
	tb1.show();
	tb1.set(1, 1, 30);
	tb1.set(2, 2, "hello");
	tb1.show();
	tb1.delRow(1);
	tb1.show();
	tb1.delColumn(1);
	tb1.show();
	return 0;
}