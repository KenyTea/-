#include<string>
#include<iostream>
#include<string>
using namespace std;
/*№ 3
Разработать класс String, который в дальнейшем будет
использоваться для работы со строками. Класс должен
содержать:
•	 Конструктор по умолчанию, позволяющий создать
строку длиной 80 символов;
•	 Конструктор, позволяющий создавать строку произ-
вольного размера;
•	 Конструктор, который создаёт строку и инициализи-
рует её строкой, полученной от пользователя.
Необходимо создать деструктор, а также использовать
механизмы делегирования конструкторов, если это воз-
можно.
Класс должен содержать методы для ввода строк с клави-
атуры и вывода строк на экран. Также нужно реализовать
статическую функцию-член, которая будет возвращать
количество созданных объектов строк.*/


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
		cout << "Enter string" << endl;
		//for (int i = 0; i <Leng; i++)
		

	}

	void show() {
		cout << endl;
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