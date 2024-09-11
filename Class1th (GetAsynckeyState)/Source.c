#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>  
#define SIZE 10
void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

int main()
{
#pragma region 셔플 함수

	// srand(time(NULL));
	// 
	// int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 
	// int size = sizeof(list) / sizeof(int);
	// 
	// Shuffle(list, size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("list[%d]의 값 : %d\n", i, list[i]);
	// }

#pragma endregion

#pragma region 포인터 배열

	// int i = 0;
	// const char* dialog[10];
	// 
	// dialog[0] = "안녕하세요."; // 
	// dialog[1] = "어서오세요.";
	// dialog[2] = "당신에게 의뢰를 하려고 왔습니다.";
	// dialog[3] = "어떤 의뢰인가요?";
	// dialog[4] = "물건을 찾는 의뢰입니다.";
	// dialog[5] = "어떤 물건인가요?";
	// dialog[6] = "제가 아끼는 물건입니다.";
	// dialog[7] = "아 그렇군요.";
	// dialog[8] = "얼마나 걸릴까요?";
	// dialog[9] = "한 일주일이면 될거 같습니다.";
	// 
	// // 탐정   [5]  대사
	// // 의뢰인 [5]  대사
	// 
	// //스페이스
	// 
	// while (i < SIZE)
	// {
	// 	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태
	// 
	// 	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태
	// 
	// 	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태
	// 
	// 	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	// 
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{
	// 		
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("[탐정] : %s\n",dialog[i]);
	// 		}
	// 		else
	// 		{
	// 			printf("[의뢰인] : %s\n",dialog[i]);
	// 		}
	// 
	// 		i++;
	// 	}
	// 
	// }
	// 
	// Sleep(3000);
	// 
	// printf("대화가 종료되었습니다.");

#pragma endregion

	return 0;
}