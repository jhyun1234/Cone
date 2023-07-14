#pragma once
#include <stdio.h>
// stdio 
// 표준 입출력 헤더 파일 
void main()
{
#pragma region 서식 지정자 
	// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것.




	//printf("") : 출력하는 함수
	// 자료형 
	// char   <-> 정수형 (1byte) -> 하나의 문자를 저장 할 수 있다.
	// short  <-> 정수형 (2byte)
	// int    <-> 정수형 (4byte)
	// long   <-> 정수형 (4byte) 운영체제에 따라서 8 or 4
	// flot   <-> 실수형 (4byte)
	// double <-> 실수형 (8byte)

	char alphabet = 'A';

	int data = 10;

	float decimal = 12.5f;

	double value = 99.75;

	//변수를 출력하는 방법
	// "%c"  하나의 문자를 출력하는 서식 지정자
	// "%d"  정수를 출력하는 서식 지정자
	// "%f"  실수(float)를 출력하는 서식 지정자
	// "%s"  문자열을 출력하는 서식 지정자
	// "%p"  주소를 출력하는 서식 지정자
	// "%lf" 실수(double)를 출력하는 서식 지정자
	// 
	// 
	// prinft("서식지정자" ,alphabet)
	// \n 개행 문자
	//printf("%c\n",alphabet);
	//printf("%d\n", data);

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	// 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서부터 시작한다.

	//printf("%f %lf\n", decimal, value);

	//서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할 수 있으며,
	//서식과 변수의 형태가 일치하지 않으면 원하는 값이 출력되지 않는다.

	//ex)int data1 = 20;
	//ex)printf("%s\n", data1);



#pragma endregion
#pragma region 변수의 이름 규칙



	//변수의 이름 규칙 

	// 1. 변수의 이름은 숫자로 시작할 수 없다.
	// ex) int 1value = 10;

	// 2. 변수의 이름으로 예약어를 사용할 수 없다.
	// ex) int int = 30;

	// 3. 변수의 이름에 공백이 포함될 수 없다.
	// ex) int count Down = 5;

	// 4. 변수의 이름으로 특수 기호는 "_"와 "$" 만 허용한다.
	// ex) int count_Down$ =60;

	// 5. 같은 이름의 변수를 선언할 수 없다.
	// ex) int a = 35;
	//     int a = 67;

	// 6. 변수의 이름은 대소문자를 구별한다.
	// ex) int apple = 1;
	//     int Apple = 2;
#pragma endregion
#pragma region 변수의 초기화

	// 최초로 변수에 값을 저장해주는 과정

	// 4byte 메모리 공간 생성
	int a1; // a1 선언

	a1 = 99; // a1(99)

	// 변수(변할 수 있는 수)

	a1 = 999;

	// printf("a1 변수의 값 : %d", a1);




#pragma endregion
#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변결할 수 없는,
	// 메모리 공간

	const float pi = 3.141592f;
	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며, 
	// 한 번 저장된 값은 더 이상 변경할 수 없다. 
	// pi = 99.12312f; error

	// 심볼릭 상수: 메모리 공간을 가지고 있는 상수
	// ex) pi 
	// 리터럴 상수: 값 그 자체를 의미 , 메모리 공간을 가지고 있지 않은 상수
	// ex) 3.141592
#pragma endregion

#pragma region 과제
	// 산술 연산자 :  + ,- ,* ,/ 
	int a = 1;
	int b = 2;
	const int c = 3;
	const int d = 4;

	// 1. printf("서식지정자",변수+변수);
	printf("%d\n", a + b);

	// 2. printf("서식지정자",변수+ 리터럴 상수);
	printf("%d\n", a + 3);

	// 3. printf("서식지정자",변수- 심볼릭 상수);
	printf("%d\n", a - c);

	// 4. printf("서식지정자",리터럴 상수 * 심볼릭 상수);
	printf("%d\n", 3 * c);

	// 5. printf("서식지정자",심볼릭 상수 / 심볼릭 상수);
	printf("%d\n", d / c);

	// 6. printf("서식지정자",리터럴 상수 / 리터럴 상수);
	printf("%d\n", 3 / 4);








#pragma endregion

}