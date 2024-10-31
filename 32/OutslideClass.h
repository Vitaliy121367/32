#pragma once
#include "Class1.h"

class OutslideClass : public Vitaliy::Class1
{
public:
	void show() {
		Class1::show();
		cout << "OutslideClass" << endl;
	}
};