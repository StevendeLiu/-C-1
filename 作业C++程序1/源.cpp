#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include"class.h"
using namespace std;
/*实验 1-1*/
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b <<endl<< a - b<<endl << a*b << endl<<a / b<<endl;
//}
/*实验1-2*/
//int main()
//{
//	int max, min;
//	int sum = 0;
//	int ** table3times3 = new int*[3];//行数申请 亦或是第一维的申请
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			table3times3[i] = new int[10];//列数申请 亦或是第二维的申请
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> table3times3[i][j];
//		}
//	}
//	min=max = table3times3[0][0];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum += table3times3[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (table3times3[i][j]>max)
//			{
//				max = table3times3[i][j];
//			}
//			else if(table3times3[i][j]<min)
//			{
//				min = table3times3[i][j];
//			}
//		}
//	}
//	cout << sum << endl << max <<endl<< min<<endl;
//}
/*实验1-3*/
//class RMB
//{
//public:
//	void setvalue(int a)
//	{
//		value = a;
//	}
//	int showvalue()
//	{
//		return value;
//	}
//
//private:
//	int value;
//};
//
//int main()
//{
//	RMB rmb1, rmb2, rmb5;
//	int sum = 0;
//	rmb1.setvalue(1);
//	rmb2.setvalue(2);
//	rmb5.setvalue(5);
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 50; j++)
//		{
//			for (int k = 0; k < 20; k++)
//			{
//				if (i*rmb1.showvalue()+j*rmb2.showvalue()+k*rmb5.showvalue()==100)
//				{
//					sum++;
//				}
//			}
//		}
//	}
//	cout << sum;
//}
/*实验1-4*/
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(a, b);
//	cout << a << endl << b << endl;
//	return 0;
//}
/*实验1-5*/
//int main()
//{
//	int birthday[100][2];
//	srand(time(0));
//	int right=0;
//	bool flag = 1;
//	int n;
//	cin >> n;
//	for (int k = 0; k < 10000; k++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			birthday[i][0] = rand() % 12 + 1;
//			if (birthday[i][0] == 2)
//			{
//				birthday[i][1] = rand() % 28 + 1;
//			}
//			else if ((birthday[i][0] == 1) || (birthday[i][1] == 3) || (birthday[i][1] == 5) || (birthday[i][1] == 7) || (birthday[i][1] == 8) || (birthday[i][1] == 10) || (birthday[i][1] == 12))
//			{
//				birthday[i][1] = rand() % 31 + 1;
//			}
//			else
//			{
//				birthday[i][1] = rand() % 30 + 1;
//			}
//		}
//		for (int i = 0; i < n-1; i++)
//		{
//			for (int j = i+1; j < n; j++)
//			{
//				if (birthday[i][0]==birthday[j][0])
//				{
//					if (birthday[i][1]==birthday[j][1])
//					{
//						flag = 0;
//						break;
//					}
//				}
//			}
//		}
//		if (flag==1)
//		{
//			right++;
//		}
//		flag = 1;
//	}
//	printf("%llf", ((double)right / (double)10000));
//}            
/*作业 2 链表*/
////建立链表
//struct node
//{
//	int data;
//	node *nextnode;
//};
//node head;
//node *p;
//node *p1;
//int inputdata;
//int point;
//int choose;
////开始函数
//void start()
//{
//	cout << "您好，欢迎使用单链表" << endl << "请输入大于0的正整数，小于1链表录入结束" << endl;
//}
////制作链表
//void create()
//{
//	head.nextnode = null;
//	cin >> inputdata;
//	while (inputdata >= 0)
//	{
//		p = new node;
//		p->nextnode = head.nextnode;//类似与栈的结构，可画图体会
//		p->data = inputdata;
//		head.nextnode = p;
//		cin >> inputdata;
//	}
//	cout << "录入链表数据结束" << endl;
//}
////操作界面
//void work()
//{
//	void find();
//	void erdogic();
//	void deletenode();
//	void addnode();
//	while (1)
//	{
//		cout << "按1 查询数据"
//			<< endl << "按2 遍历所有数据" << endl << "按3 删除某一项" << endl<<"按4 添加某一项"<<endl << "按0 退出" << endl;
//		cin >> choose;
//		switch (choose)
//		{
//		case 1:find(); break;
//		case 2:erdogic(); break;
//		case 3:deletenode(); break;
//		case 4:addnode(); break;
//		case 0:break;
//		default:
//			break;
//		}
//		if (choose == 0)
//		{
//			break;
//		}
//	}
//}
////查询链表
//void find()
//{
//	int x;
//	bool flag = 1;
//	cout << "请输入要查询的数据：";
//	cin >> x;
//	node *temp;
//	temp = head.nextnode;
//	while ((temp->data != x) && (temp->nextnode != null))
//	{
//		temp = temp->nextnode;
//		if (temp->nextnode == null)
//		{
//			flag = 0;
//		}
//	}
//	if (temp->data==x)
//	{
//		flag = 1;
//	}
//	if (flag == 1)
//	{
//		cout << "查找到此数据" << endl;
//	}
//	else
//	{
//		cout << "未查到此数据" << endl;
//	}
//}
////遍历链表
//void erdogic()
//{
//	node *temp;
//	temp = head.nextnode;
//	cout << temp->data << endl;
//	while (temp->nextnode != null)
//	{
//		temp = temp->nextnode;
//		cout << temp->data << endl;
//	}
//}
////删除链表
//void deletenode()
//{
//	int x;
//	bool flag = 1;
//	node *temp, *tempnext, *temppre;
//	cout << "请输入要删除的数据为x的一项";
//	cin >> x;
//	temp = head.nextnode;
//	temppre = &head;
//	while ((temp->data != x) && (temp->nextnode != null))
//	{
//		temppre = temppre->nextnode;
//		temp = temp->nextnode;
//		if (temp->nextnode == null)
//		{
//			flag = 0;
//		}
//	}
//	if (flag == 1)
//	{
//		tempnext = temp->nextnode;
//		temppre->nextnode = tempnext;
//		cout << "已删除完毕" << endl;
//	}
//	else
//	{
//		cout << "未发现此项" << endl;
//	}
//}
////插入链表
//void addnode()
//{
//	node *temp, tempadd, *tempnext;
//	int x,n;
//	bool flag = 1;
//	cout << "输入你想在数据x后加入新的数据：" << endl;
//	cin >> x;
//	temp = head.nextnode;
//	while ((temp->data != x) && (temp->nextnode != null))
//	{
//		temp = temp->nextnode;
//		if (temp->nextnode == null)
//		{
//			flag = 0;
//		}
//	}
//	if (temp->data == x)
//	{
//		flag = 1;
//	}
//	if (flag == 1)
//	{
//		cout << "查找到此数据" << endl;
//	}
//	else
//	{
//		cout << "未查到此数据" << endl;
//		return;
//	}
//	tempnext = temp->nextnode;
//	cout << "输入你想要插入的数据n" << endl;
//	cin >> n;
//	tempadd.data = n;
//	temp->nextnode = &tempadd;
//	tempadd.nextnode = tempnext;
//	cout << "已添加完毕" << endl;
//}
////转置链表
//void transpoce()
//{
//	
//}
////声明函数
//int main()
//{
//	start();
//	create();
//	work();
//	return 0;
//}
/*作业 2-2*/
//void swap(int &a, int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void swap2(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void main()
//{
//	int a=3, b=4;
//	int *p1, *p2;
//	p1 = &a;
//	p2 = &b;
//	swap(a, b);
//	cout << a << " " << b << endl;
//	swap2(p1, p2);
//	cout << *p1 << " " << *p2 << endl;
//}
/*测试代码段1 测试Point类	test code segemt1*/
//void main()
//{
//	Point p1, p2;
//	p1.setX(2);
//	p1.setY(2);
//	p2.setX(5);
//	p2.setY(6);
//	cout << p1.distance(p2)<<endl;
//	Point p3(1, 1);
//	Point p4(0);
//	cout<<p3.distance(p4)<<endl;
//}
/*测试代码段2 测试Time类*/
//void main()
//{
//	Time time1(3, 2, 47), time2(5, 8), time3(45, 48),time4;
//	time1.printTime();
//	time2.printTime();
//	time3.printTime();
//	time4.printTime();
//	time4.tick();
//	time4.printTime();
//	time4.setTime(23, 59, 59);
//	time4.tick();
//	time4.printTime();
//	time4.setHour(3);
//	time4.printTime();
//	time4.tick();
//	time4.printTime();
//}
/*测试代码段3 测试Counter类*/
//void main()
//{
//	Counter c1;
//	c1.printNum();
//	c1.addOne();
//	c1.printNum();
//	c1.minusOne();
//	c1.printNum();
//}
/*测试代码段4 测试Rational类*/
//void main()
//{
//	Rational miao(2, 4);
//	Rational miao1(2, 4);
//	miao.R_add(miao1);
//	miao.print();
//	miao.R_mul(miao1);
//	miao.print();
//	miao.R_sub(miao1);
//	miao.print();
//	miao.R_mul(miao);
//	miao.print();
//}
/*测试代码段5 测试指针变量*/
//void main()
//{
//	IntArray arr1;
//	for (int  i = 0; i < 10; i++)
//	{
//		arr1.inputArr(i + 1, i);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		arr1.outArr(i + 1);
//	}
//}
/*测试代码段5 测试String类*/
