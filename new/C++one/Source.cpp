#include<stdio.h>
#include<stdlib.h>
int main()
{
#pragma region 동적 할당이란
	// 프로그램을 실행 중에 필요한 만큼 메모리를 
	// 할당하는 작업이다.

	int* ptr =(int*) malloc(sizeof(int));

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 저장한다.

	printf("ptr의 주소값 : %p\n", ptr);

	*ptr = 100;

	printf("ptr이 가리키는 값 : %d\n", *ptr);

	// 메모리를 동적 할당할 때 주소를 범용 포인터로 
	// 반환하기 때문에 자료형을 변환한 다음 메모리에 할당해야 한다.

	free(ptr); // 메모리 해제

	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로
	// 사용이 끝나면 직접 해제를 해주어야 한다.

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터이다.
	printf("ptr의 주소값 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);

	// 이미 해제된 포인터는 초기화를 한다.
	ptr = NULL;

	int size = 0;

	scanf_s("%d", &size); //12
	
	if (ptr == NULL)
	{
		// 동적 배열
		ptr = (int*)malloc(sizeof(int)* size); //12
	}

	*ptr = 200;
	ptr[1] = 300;
	printf("ptr[0] 값 : %d\n", ptr[0]);
	printf("ptr[1] 값 : %d\n", ptr[1]);

#pragma endregion

#pragma endregion


	return 0;
}