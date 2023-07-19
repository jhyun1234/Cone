#include<stdio.h>

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는
	// 변수 끼리 연산이 이루어질 때
	// 기존에 지정했던 자료형을 다른 자료형으로
	// 변환하는 과정이다.


	// 암묵적 형 변환
	
	// 서로 다른 자료형으로 연산이 이루어질 때
	// 자료형의 크기가 큰 자료형으로 변환되는 과정이다.
	/*

	int integer = 10;

	float decimal = 6.5f;
	// 같은 4byte 이지만 int보다 float 가 더 크다
	// sizeof() : 자료형의 크기를 반환하는 연산자.

	

	printf("int의 자료형 크기= %d\n", sizeof(int));

	printf("float의 자료형 크기= %d\n", sizeof(decimal));

	printf("integer +decimal =%f\n", integer + decimal);

	// int   float
	// [ ] = 7.756f
	integer = 7.756f;

	// 정수형에서 실수형으로 암묵적 자료형 변환은
	// 가능하지만, 실수형에서 정수형으로 
	// 암묵적 자료형 변환은 되지 않는다.
	printf("integer의 자료형 크기= %d\n", integer);
	*/
	
	// 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접
	// 자료형을 변환하는 과정이다.
	/*
	int x = 10;
	int y = 3;

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 
	// 결과 값만 가질 수 있다.

	float result =(float) x / y;

	printf("result의 값 :%f", result);
	*/

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고,
	// 반복문은 이어서 실행하는 제어문이다.
	/*
	for (int i = 1; i <= 5;  ++i)
	{
		if (i == 3)
		{
			continue;
		}
		printf("%d\n", i);
		
	}
	*/

#pragma endregion


#pragma region 시프트 연산자
	/*
	// 비트 값을 주어진 숫자만큼 부호 방향으로
	// 이동시키는 연산자.

	// int a = 3; // 0000 0011 
	// << 왼쪽으로 이동시키는 연산자 
	// >> 오른쪽으로 이동시키는 연산자
	// a <<2; 0000 0110 1번 수행
	//        0000 1100 2번 수행
	// a = 12
	
	// a >>;2 0000 0010 1번 수행
	//        0000 0000 2번 수행
	// a = 0 
	// 다시 << 한다고 해도 1이 아니라 0이 나온다 1은 이미 떨어져나간 값이기 때문.

	int a = 3; 
	printf("a를 왼쪽 2번 시프트 연산한 결과 :%d\n", a <<= 2); // 0000 1100
	// 값을 저장하고 싶으면 = 을 쓰면 된다.

	printf("a의 값 :%d\n", a ); // 0000 1100 

	printf("a를 오른쪽으로 3번 시프트 연산한 결과 :%d\n", a >>3); // 0000 0001
	*/

#pragma endregion


}