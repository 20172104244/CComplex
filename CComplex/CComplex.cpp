// CComplex.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "Ĭ�Ϲ��캯��   " << real << "+" << imag << "i" << endl;
	}
	void setvalue(double r, double i)
	{
		real = r;
		imag = i;
	}
	CComplex(const CComplex & c)//��const��Ϊ�˸��ƹ��캯�����ܳ�������Ϊ���������ö���c��Ȼ���ʼ����Ķ���
	{
		real = c.real;
		imag = c.imag;
		cout << "���ƹ��캯��  " << real << "+" << imag << "i" << endl;
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
	CComplex oc2(oc);//���ø��ƹ��캯����oc2����ocΪ���������Ǹ����ƹ��캯��
	oc.display();
	oc2.display();
	return 0;
}

