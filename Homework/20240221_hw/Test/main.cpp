#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));
	int myHand = 0;
	int comHand = 0;

	::printf("가위(0) 바위(1) 보(2) 중에 하나를 선택해주세요 :");
	scanf_s("%d", &myHand);

	comHand = rand() % 3;

	::printf("내가 낸 것 : ");
	if (myHand == 0)
	{
		::printf("가위\n");
	}
	else if (myHand == 1)
	{
		::printf("바위\n");
	}
	else if (myHand == 2)
	{
		::printf("보\n");
	}
	else
	{
		::printf("잘못 고름\n");
		exit(0);
	}


	::printf("상대가 낸 것 : ");
	if (comHand == 0)
	{
		::printf("가위\n");
	}
	else if (comHand == 1)
	{
		::printf("바위\n");
	}
	else if (comHand == 2)
	{
		::printf("보\n");
	}
	else
	{
		::printf("잘못 고름\n");
		exit(0);
	}


	if (myHand == comHand)
	{
		::printf("비겼습니다.\n");
	}
	else if(myHand == 0 && comHand == 1)
	{
		::printf("졌습니다.\n");
	}
	else if (myHand == 1 && comHand == 2)
	{
		::printf("졌습니다.\n");
	}
	else if (myHand == 2 && comHand == 0)
	{
		::printf("졌습니다.\n");
	}
	else
	{
		::printf("이겼습니다.\n");
	}
	
}