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
#pragma region ���� �Լ�

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
	// 	printf("list[%d]�� �� : %d\n", i, list[i]);
	// }

#pragma endregion

#pragma region ������ �迭

	// int i = 0;
	// const char* dialog[10];
	// 
	// dialog[0] = "�ȳ��ϼ���."; // 
	// dialog[1] = "�������.";
	// dialog[2] = "��ſ��� �Ƿڸ� �Ϸ��� �Խ��ϴ�.";
	// dialog[3] = "� �Ƿ��ΰ���?";
	// dialog[4] = "������ ã�� �Ƿ��Դϴ�.";
	// dialog[5] = "� �����ΰ���?";
	// dialog[6] = "���� �Ƴ��� �����Դϴ�.";
	// dialog[7] = "�� �׷�����.";
	// dialog[8] = "�󸶳� �ɸ����?";
	// dialog[9] = "�� �������̸� �ɰ� �����ϴ�.";
	// 
	// // Ž��   [5]  ���
	// // �Ƿ��� [5]  ���
	// 
	// //�����̽�
	// 
	// while (i < SIZE)
	// {
	// 	// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ����
	// 
	// 	// 0x8001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����
	// 
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{
	// 		
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("[Ž��] : %s\n",dialog[i]);
	// 		}
	// 		else
	// 		{
	// 			printf("[�Ƿ���] : %s\n",dialog[i]);
	// 		}
	// 
	// 		i++;
	// 	}
	// 
	// }
	// 
	// Sleep(3000);
	// 
	// printf("��ȭ�� ����Ǿ����ϴ�.");

#pragma endregion

	return 0;
}