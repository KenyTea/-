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
//class String {
//	char *stroka;
//	int *dlina;
//public:
//	String() {
//		dlina = new int(80);
//		stroka = new char[*dlina];
//	}
//	String(int d) {
//		dlina = new int(d);
//		stroka = new char[*dlina];
//	}
//	String(char *s) {
//		dlina = new int(strlen(s));
//		stroka = new char[*dlina];
//		strcpy(stroka, s);
//	}
//	~String() {
//		delete[]stroka;
//		delete dlina;
//	}
//};

//int main() {
//	String s();
//	String s(5);
//	String s("qwe");
//	system("pause");
//	return 0;
//}


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

	void enter() {

	}

	void show() {

	}

};

int main() {

	String a();
	String a(20);


	system("pause");
	return 0;
}