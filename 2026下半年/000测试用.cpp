#include<iostream>
using namespace std;
class MyClass {
	int idno = nextid++;
	static int nextid;
public:
	MyClass() {}
	MyClass(const MyClass& obj) {}
	MyClass(int) {}
	void print() { cout << idno << endl; }
};
int MyClass::nextid = 1;
int main() {
	MyClass a1, a2;
	MyClass a3{ a2 }; a3.print();
	MyClass a4(3); a4.print();
	return 0;
}