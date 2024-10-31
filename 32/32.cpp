#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "OutslideClass.h"
using std::cout;
using std::endl;

//namespace Kirill
//{
//	class MyClass
//	{
//	public:
//		void showInfo()
//		{
//			cout << "Namespace Kirill: MyClass" << endl;
//		}
//	};
//}
//namespace Nazar
//{
//	class MyClass
//	{
//	public:
//		void printInfo()
//		{
//			cout << "Namespace Nazar: MyClass" << endl;
//		}
//	};
//}
int main()
{
    
	////MyClass a; //ERROR
	//Kirill::MyClass a;
	//Nazar::MyClass b;
	//a.showInfo();
	//b.printInfo();

	//using namespace Kirill;
	//MyClass c;
	//c.showInfo();

	//using namespace Nazar;
	//Nazar::MyClass d;
	//d.printInfo();

	Vitaliy::Class1 a;
	Vitaliy::Class2 b;
	Vitaliy::Class3 c;
	OutslideClass d;

	a.show();
	cout << endl;
	b.show();
	cout << endl;
	c.show();
	cout << endl;
	d.show();

    return 0;
}