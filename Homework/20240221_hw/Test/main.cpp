#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));
	int myHand = 0;
	int comHand = 0;

	::printf("����(0) ����(1) ��(2) �߿� �ϳ��� �������ּ��� :");
	scanf_s("%d", &myHand);

	comHand = rand() % 3;

	::printf("���� �� �� : ");
	if (myHand == 0)
	{
		::printf("����\n");
	}
	else if (myHand == 1)
	{
		::printf("����\n");
	}
	else if (myHand == 2)
	{
		::printf("��\n");
	}
	else
	{
		::printf("�߸� ��\n");
		exit(0);
	}


	::printf("��밡 �� �� : ");
	if (comHand == 0)
	{
		::printf("����\n");
	}
	else if (comHand == 1)
	{
		::printf("����\n");
	}
	else if (comHand == 2)
	{
		::printf("��\n");
	}
	else
	{
		::printf("�߸� ��\n");
		exit(0);
	}


	if (myHand == comHand)
	{
		::printf("�����ϴ�.\n");
	}
	else if(myHand == 0 && comHand == 1)
	{
		::printf("�����ϴ�.\n");
	}
	else if (myHand == 1 && comHand == 2)
	{
		::printf("�����ϴ�.\n");
	}
	else if (myHand == 2 && comHand == 0)
	{
		::printf("�����ϴ�.\n");
	}
	else
	{
		::printf("�̰���ϴ�.\n");
	}
	
}