// CComplex.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include"iostream"
using namespace std;
class CComplex
{
public:
	double real, imag;
	CComplex()
	{
		real = 100;
		imag = 200;
		cout << "默认构造函数   " << real << "+" << imag << "i" << endl;
	}
	void setvalue(double r, double i)
	{
		real = r;
		imag = i;
	}
	CComplex(const CComplex & c)//加const是为了复制构造函数接受常量对象为参数。引用对象c，然后初始化别的对象。
	{
		real = c.real;
		imag = c.imag;
		cout << "复制构造函数  " << real << "+" << imag << "i" << endl;
	}
	void display()
	{
		cout << real << "+" << imag << "i" << endl;
	}
};

int main()
{
	CComplex oc;
	oc.display();
	oc.setvalue(500, 600);
	CComplex oc2(oc);//调用复制构造函数，oc2是以oc为参数调用那个复制构造函数
	oc.display();
	oc2.display();
	return 0;
}

