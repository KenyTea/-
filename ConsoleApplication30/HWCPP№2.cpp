#include <iostream>

using namespace std;

/*Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.).*/

class Fraction {
public:
	int numerator;
	int denominator;
	int numerator2;
	int denominator2;
	int numerator3;
	int denominator3;
	
	Fraction (){}
	
    void Addition(int numerator, int denominator, int numerator2, int denominator2) {
		   
		this->numerator3 = (numerator*denominator2) + (numerator2*denominator);
		this->denominator3 = denominator * denominator2;

		addPrint();
	}

	void subtraction(int numerator, int denominator, int numerator2, int denominator2) {

		this->numerator3 = (numerator*denominator2) + (numerator2*denominator);
		this->denominator3 = denominator * denominator2;

		addPrint();
	}

	void multiplication(int numerator, int denominator, int numerator2, int denominator2) {
		this->numerator3 = numerator * numerator2;
		this->denominator3 = denominator * denominator2;
	
		addPrint();
	}

	void division(int numerator, int denominator, int numerator2, int denominator2) {
		this->numerator3 = numerator * denominator2;
		this->denominator3 = numerator2 * denominator;

		addPrint();
	}

	void print() {

		cout << numerator << "/" << denominator << "  |  " << numerator2 << "/" << denominator2 << endl;
		cout << endl;
	}

	void addPrint() {
		cout << endl;
		cout << numerator3 << "/" << denominator3 << endl;
		cout << endl;
	}

	void menu() {
		cout << "Enter first numerator:  "; cin >> numerator;
		cout << endl;
		cout << "Enter first denominator:  "; cin >> denominator;
		cout << endl;
		cout << "Enter second numerator:  "; cin >> numerator2;
		cout << endl;
		cout << "Enter first denominator:  "; cin >> denominator2;
		system("cls");
		print();
		char action;
		cout << "Enter action ( + | - | * | / ): "; cin >> action;

		switch (action)
		{
		case '+':
			Addition(numerator, denominator, numerator2, denominator2);
			break;
		case '-':
			subtraction(numerator, denominator, numerator2, denominator2);
			break;
		case '*':
			multiplication(numerator, denominator, numerator2, denominator2);
			break;
		case '/':
			division(numerator, denominator, numerator2, denominator2);
			break;
		}
	}

};


int main() {
	Fraction fract;

	fract.menu();
	

	system("pause");
	return 0;
}