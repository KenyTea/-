#include<string>
#include<iostream>
#include<string>
using namespace std;
/*� 3
����������� ����� String, ������� � ���������� �����
�������������� ��� ������ �� ��������. ����� ������
���������:
�	 ����������� �� ���������, ����������� �������
������ ������ 80 ��������;
�	 �����������, ����������� ��������� ������ �����-
�������� �������;
�	 �����������, ������� ������ ������ � ����������-
���� � �������, ���������� �� ������������.
���������� ������� ����������, � ����� ������������
��������� ������������� �������������, ���� ��� ���-
�����.
����� ������ ��������� ������ ��� ����� ����� � �����-
����� � ������ ����� �� �����. ����� ����� �����������
����������� �������-����, ������� ����� ����������
���������� ��������� �������� �����.*/


class String { // class string
public:
	char *str;
	int *Long;

	String() { // default constructor
		Long = new int(80);
		str = new char[*Long];
	}

	String(int x) {
		Long = new int(x);
		str = new char[*Long];
	}

	//String(string *a) {
	   // Long = new int(string(a));
	   // str = new char[*Long];
   // }

	~String() {
		delete Long;
		delete str;
	}

	void enter() {
		cout << "Enter string leng" << endl;
		int x;
		cin >> x;
		Long = new int(x);
		for (int i = 0; i < x; i++) {
		str = new char[*Long];
			cin >> str[i];
		}
		

	}

	void show() {
		cout << endl; // ����
		cout << str << endl;
	}

	char stat() {

		return (int)str;
	}

};

int main() {

	String a();
	String a(20);


	system("pause");
	return 0;
}