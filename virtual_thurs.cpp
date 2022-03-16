#include<iostream>
using namespace std;
/*class Base
{
public:
virtual void show()
{
cout<<"Base\n";
}
};
class Derv1 : public Base
{
public:
void show()
{
cout<<"Derived1\n";
}
};
class Derv2 : public Base
{
public:
void show()
{
cout<<"Derived2\n";
}
};
int main()
{
Derv1 d1;
Derv2 d2;
Base* ptr;
ptr=&d1;
ptr->show();
ptr=&d2;
ptr->show();
}*/

/*
class shape
{
	protected:
	float x;
	public:
	void getData()
	{
	cin>>x;
	}
	virtual float calculateArea()=0;
};
class square: public shape
{
	public:
	float calculateArea()
	{
	return x*x;
	}
};
class Circle :public shape
{
	public:
	float calculateArea()
	{
	return 3.14*x*x;
	}
};
int main()
{
	
	square s;
	Circle c;
	cout<<"Enter length : ";
	s.getData();
	cout<<"\nArea of square : ";
	cout<<s.calculateArea();
	cout<<"\nEnter radius : ";
	c.getData();	
	cout<<"\nArea of circle : ";
	cout<<c.calculateArea();
}*/

class convert
{
	protected:
	double val1;
	double val2;
	public:
	convert(double i )
	{
		val1=i;
	}
	double getconv()
	{
		return val2;
	}

	double getinit()
	{
		return val1;
	}
	virtual void compute()=0;
};
class i_to_g : public convert
{
	public:
	i_to_g(double i) : convert(i){}
	void compute()
	{
		val2=val1/3.7854;
	}
};
class f_to_c : public convert
{
	public:
	f_to_c(double i ) : convert(i){}
	void compute()
	{
		val2=(val1-32)/1.8;
	}
	
};
int main()
{
convert *p; 
i_to_g igob(4);
f_to_c fcob(70);

p = &igob;
cout << p->getinit() << "liters is ";
p->compute();
cout << p->getconv() <<"gallons\n"; 
p = &fcob;
cout << p->getinit() << " in Fahrenheit is ";
p->compute(); 
cout << p->getconv() << " Celsius\n"; 
return 0;
}
