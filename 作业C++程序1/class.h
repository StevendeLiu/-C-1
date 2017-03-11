#pragma once
#include<iostream>
using namespace std;
class Counter
{
public:
	Counter();
	Counter(int a);
	~Counter();
	void addOne();
	void minusOne();
	void printNum();
private:
	int num;
};
class Point
{
public:
	Point();
	Point(int a, int b);
	Point(int a);
	~Point();
	void setX(double i);
	void setY(double j);
	double distance(Point & p);
private:
	double x;
	double y;
};
class Time
{
public:
	Time(int a, int b, int c);
	Time(int a, int b);
	Time(int a);
	Time();
	~Time();
	void setTime();
	void setTime(int a);
	void setTime(int a, int b);
	void setTime(int a, int b, int c);
	void setHour(int a);
	void setMinute(int a);
	void setSecond(int a);
	void printTime();
	void tick();
private:
	int hour;
	int minute;
	int second;
};
class Rational
{
public:
	Rational(int nn = 1,int mm=1);
	~Rational();
	Rational R_add(Rational &A);//¼Ó
	Rational R_sub(Rational &A);//¼õ
	Rational R_mul(Rational &A);//³Ë
	Rational R_div(Rational &A);//³ý
	void print();
private:
	void simple();
	int m;
	int n;
};
class IntArray
{
public:
	IntArray();
	~IntArray();
	void inputArr(int a, int b);
	void outArr(int a);
private:
	int  *array;
};
class String
{
public:
	String();
	~String();

private:
	char *m_data;
};

String::String()
{
}

String::~String()
{
}
IntArray::IntArray()
{
	array = new int[10];
}
IntArray::~IntArray()
{
	delete[] array;
}
void IntArray::inputArr(int a, int b)
{
	array[a - 1] = b;
}
void IntArray::outArr(int a)
{
	cout << array[a - 1] << " ";
}
Rational::Rational(int nn,int mm)
{
	n = nn;
	m = mm;
}
Rational Rational::R_add(Rational &A)
{
	n = n*A.m + A.n*m;
	m = m*A.m;
	return Rational(n, m);
}
Rational Rational::R_sub(Rational &A)
{
	n = n*A.m - A.n*m;
	m = m*A.m;
	return Rational(n, m);
}
Rational Rational::R_mul(Rational &A)
{
	m *= A.m;
	n *= A.n;
	return Rational(n, m);
}
Rational Rational::R_div(Rational &A)
{
	m /= A.m;
	n /= A.n;
	return Rational(n, m);
}
void Rational::simple()
{
	int i=2;
	for (i = 2; (i <= n) && (i <= m); )
	{
		if ((n%i==0)&&(m%i==0))
		{
			n = n / i;
			m = m / i;
			continue;
		}
		i++;
	}
}
void Rational::print()
{
	simple();
	cout << n << "/" << m << endl;
}
Rational::~Rational()
{
	cout << "delete rational " << n << "/" << m << "." << endl;
}
Counter::Counter() :num(0)
{

}
Counter::Counter(int a)
{
	num = a;
}
Counter::~Counter()
{
	cout << "Delete Counter, the number is " << num << ".";
}
void Counter::addOne()
{
	num++;
}
void Counter::minusOne() {
	num--;
}
void Counter::printNum()
{
	cout << num << endl;
}

Point::Point():x(0),y(0)
{

}
Point::Point(int a,int b) : x(0), y(0)
{
	x = a;
	y = b;
}
Point::Point(int a) : x(0), y(0)
{
	x = a;
}
Point::~Point()
{
	cout << "delete Point ("<<x<<","<<y<<")" << endl;
}
double Point::distance(Point &p)
{
	return sqrt((p.x - x)*(p.x - x) + (p.y - y)*(p.y - y));
}
void Point::setX(double i)
{
	x = i;
}
void Point::setY(double j)
{
	y = j;
}

Time::Time() :hour(0), minute(0), second(0)
{

}
Time::Time(int a) : hour(0), minute(0), second(0)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
}
Time::Time(int a, int b) : hour(0), minute(0), second(0)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
}
Time::Time(int a, int b, int c) : hour(0), minute(0), second(0)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
	second = (c >= 0 && b <= 59) ? c : 0;
}
void Time::setTime()
{
	hour = 0;
	minute = 0;
	second = 0;
}
void Time::setTime(int a)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = 0;
	second = 0;
}
void Time::setTime(int a, int b)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
	second = 0;
}
void Time::setTime(int a, int b, int c)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
	minute = (b >= 0 && b <= 59) ? b : 0;
	second = (c >= 0 && b <= 59) ? c : 0;
}
void Time::printTime()
{
	cout << "Time is " << hour << "h" << minute << "m" << second << "s." << endl;
}
void Time::setHour(int a)
{
	hour = (a >= 0 && a <= 23) ? a : 0;
}
void Time::setMinute(int a)
{
	minute = (a >= 0 && a <= 59) ? a : 0;
}
void Time::setSecond(int a)
{
	second = (a >= 0 && a <= 59) ? a : 0;
}
void Time::tick()
{
	second++;
	if (second == 60)
	{
		second = 0;
		minute++;
		if (minute == 60)
		{
			minute = 0;
			hour++;
			if (hour == 24)
			{
				hour = 0;
			}
		}
	}
}

Time::~Time()
{
	cout << "delete classTime(" << hour << "," << minute << "," << second << ")" << endl;
}

