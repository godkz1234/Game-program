#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10000

void load(const char* fileName)
{
	FILE* file = fopen("Mokoko2.TXT", "r");

	char buffer[SIZE] = { 0, };

	// 첫 번째 매개변수 : 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번째 매개변수 : 각 데이터 항목의 크기
	// 새 번째 매개변수 : 읽어온 데이터 항목의 수
	// 네 번째 매개변수 : 데이터를 읽어올 파일의 포인터 변수

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}


int main()
{
#pragma region 파일 입출력

#pragma region 파일 쓰기

	// 첫 번째 매개변수 (파일의 이름)
	// 두 번째 매개변수 (파일의 입출력 모드)
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Character Information\n", file);
	// fputs("Health   : 100\n", file);
	// fputs("Attack   : 25\n", file);
	// fputs("Defense  : 10\n", file);
	// 
	// fclose(file);

#pragma endregion

#pragma region 파일 읽기

	load("Mokoko2.TXT");

#pragma endregion



#pragma endregion

	return 0;
}