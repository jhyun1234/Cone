#include<stdio.h>

#pragma region 재귀 함수
    // 어떤 함수에서 자신을 다시 호출하여
    // 작업을 수행하는 함수이다.

void Funtion()
{
	// 재귀 함수는 함수를 계속 호출하기 때문에 
	// 스택 영역에 메모리가 계속 쌓이게 되므로 
	// 스택 오버플로우가 발생한다.
	printf("함수 호출\n");
	Funtion();
   }
#pragma endregion

void CountDown(int count)
{
	// 방어 코드
	if (count <= 0)
	{
		return;
	}

	printf("count의 값은 %d\n", count);
	CountDown(count - 1);
	printf("ㅎㅇ\n");
}

// 팩토리얼

// 5!(120)  4!(24)  3!(6)
// 3! = 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1
// 5! = 5 * 4 * 3 * 2 * 1

int Fac(int count)
{
	if (count <= 1)
	{
		return 1;
	}
	else
	{
		return count * Fac(count - 1);

	}
	
	
}


int main()
{

	// CountDown(5);

	int data = 16;

	int* ptr = &data;
	
	// printf("%d\n", Fac(5));

	// 빅 엔디안 방식
	// 네트워크 <- 통일


	// 리틀 엔디안 방식 
	// 낮은 주소에 데이터의 낮은 바이트(LSB,Least,Significant Bit)
	// 부터 저장하는 방법
	// 비교 2byte만 하면 충분
	

	// 프로그램이 정상적으로 종료되었을 때,
	// 0 이라는 값을 반환한다.
	return 0;

}