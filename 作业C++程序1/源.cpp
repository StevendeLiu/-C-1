#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include"class.h"
using namespace std;
/*ʵ�� 1-1*/
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b <<endl<< a - b<<endl << a*b << endl<<a / b<<endl;
//}
/*ʵ��1-2*/
//int main()
//{
//	int max, min;
//	int sum = 0;
//	int ** table3times3 = new int*[3];//�������� ����ǵ�һά������
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			table3times3[i] = new int[10];//�������� ����ǵڶ�ά������
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
/*ʵ��1-3*/
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
/*ʵ��1-4*/
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
/*ʵ��1-5*/
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
/*��ҵ 2 ����*/
////��������
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
////��ʼ����
//void start()
//{
//	cout << "���ã���ӭʹ�õ�����" << endl << "���������0����������С��1����¼�����" << endl;
//}
////��������
//void create()
//{
//	head.nextnode = null;
//	cin >> inputdata;
//	while (inputdata >= 0)
//	{
//		p = new node;
//		p->nextnode = head.nextnode;//������ջ�Ľṹ���ɻ�ͼ���
//		p->data = inputdata;
//		head.nextnode = p;
//		cin >> inputdata;
//	}
//	cout << "¼���������ݽ���" << endl;
//}
////��������
//void work()
//{
//	void find();
//	void erdogic();
//	void deletenode();
//	void addnode();
//	while (1)
//	{
//		cout << "��1 ��ѯ����"
//			<< endl << "��2 ������������" << endl << "��3 ɾ��ĳһ��" << endl<<"��4 ���ĳһ��"<<endl << "��0 �˳�" << endl;
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
////��ѯ����
//void find()
//{
//	int x;
//	bool flag = 1;
//	cout << "������Ҫ��ѯ�����ݣ�";
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
//		cout << "���ҵ�������" << endl;
//	}
//	else
//	{
//		cout << "δ�鵽������" << endl;
//	}
//}
////��������
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
////ɾ������
//void deletenode()
//{
//	int x;
//	bool flag = 1;
//	node *temp, *tempnext, *temppre;
//	cout << "������Ҫɾ��������Ϊx��һ��";
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
//		cout << "��ɾ�����" << endl;
//	}
//	else
//	{
//		cout << "δ���ִ���" << endl;
//	}
//}
////��������
//void addnode()
//{
//	node *temp, tempadd, *tempnext;
//	int x,n;
//	bool flag = 1;
//	cout << "��������������x������µ����ݣ�" << endl;
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
//		cout << "���ҵ�������" << endl;
//	}
//	else
//	{
//		cout << "δ�鵽������" << endl;
//		return;
//	}
//	tempnext = temp->nextnode;
//	cout << "��������Ҫ���������n" << endl;
//	cin >> n;
//	tempadd.data = n;
//	temp->nextnode = &tempadd;
//	tempadd.nextnode = tempnext;
//	cout << "��������" << endl;
//}
////ת������
//void transpoce()
//{
//	
//}
////��������
//int main()
//{
//	start();
//	create();
//	work();
//	return 0;
//}
/*��ҵ 2-2*/
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
/*���Դ����1 ����Point��	test code segemt1*/
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
/*���Դ����2 ����Time��*/
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
/*���Դ����3 ����Counter��*/
//void main()
//{
//	Counter c1;
//	c1.printNum();
//	c1.addOne();
//	c1.printNum();
//	c1.minusOne();
//	c1.printNum();
//}
/*���Դ����4 ����Rational��*/
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
/*���Դ����5 ����ָ�����*/
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
/*���Դ����5 ����String��*/
