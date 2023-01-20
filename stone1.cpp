#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);
int main() {
	Stonewt parvarotti = 275;
	Stonewt wolfe(287.7);
	Stonewt taft(21, 8);

	cout << "�׳� ������ ������: ";
	parvarotti.show_stn();
	cout << "Ž���� ������: ";
	wolfe.show_stn();
	cout << "������� ������: ";
	taft.show_lbs();
	parvarotti = 276.8;
	taft = 325;
	cout << "���� �Ļ縦 ��ģ �� �׳� ������ ������: ";
	parvarotti.show_stn();
	cout << "���� �Ļ縦 ��ģ �� ������� ������: ";
	taft.show_lbs();
	display(taft, 2);
	cout << "������ ������ �׺��� �� ���̴�.\n";
	display(422, 2);
	cout << "���� �ǰ��� �ִ��� ���̴�.\n";
	return 0;
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++) {
		cout << "��! ";
		st.show_stn();
	}
}