// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CFeet
{
private:
	int meters;
	int feet;
	int inches;
public:
	void init(int m, int f, int i)
	{
		m = meters;
		f = feet;
		i = inches;
	}
	void setmeters(int m)
	{
		feet = m*3.2808;
		inches = feet * 12;

	}
	void display()
	{
		cout << "feet" << feet << "inches" << inches << endl;
	}

};
int main()
{
	CFeet ot;
	ot.setmeters(10);
	ot.display();
	return 0;
}

