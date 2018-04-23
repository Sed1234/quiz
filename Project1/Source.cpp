#include "Presentation.h"
#include <iostream>
//using namespace std;
//
//int main() {
//	Presentation p;
//	p.hello();
//	p.createUser();
//	p.passQuiz();
//	p.showResult();
//	system("pause");
//	return 0;
//}

class A
{
private:
	int x;
public:
	explicit A(int _x) {
		this->x = _x;
		return x;
	}

	
	void say(int name) const {
		std::cout << name;
	}
};
int main() {


	/*A a(5);
	a.setX(4);
	std::cout << a.getX() << std::endl;
	int x = 5;
	double y = 4.0999099;
	x = y;
	std::cout << x << std::endl;*/
	system("pause");
	return 0;
}