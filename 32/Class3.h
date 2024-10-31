#pragma once
#include "Class1.h"

namespace Vitaliy
{
	class Class3 :public Class1
	{
	public:
		void show() {
			Class1::show();
			cout << "Namespace Vitaliy: class3" << endl;
		}
	};
}