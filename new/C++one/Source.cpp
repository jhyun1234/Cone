#include<stdio.h>

// �ڷ���, �Լ��� �̸�, (�Ű� ����)
void Function()
{
	// ���� �̸��� �Լ��� ���� �� �� ����.

	for (int i = 0; i < 5; ++i)
	{

	}
	printf("Funtion\n");
}
// ��ȯ��
// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
// ���ϴ� ���� ���� �� �� ����.
char CharFuntion()
{


	return'A';

}

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
// �����ϱ� ���� ����ϴ� �����̴�.

void Calculator(int x)
{

	x = 450;

	printf("x�� �� : %d\n", x);
}
// ������ ���� ȣ��
void Swap(int *x, int *y)
{
	int temp = *y;
	*y = *x;
	*x = temp;

}


// �Ű� ������ �Լ� ���ο����� ������ �̷������,
// �Լ��� ����Ǹ� �޸𸮿��� �������, 
// ���� ���� �Ű� ������ ������ �� �ִ�.


#pragma endregion


void main()
{
#pragma region ����(void) ������
	/*// �ڷ����� �������� ���� ���·�
	// ��� �ڷ����� ������ �� �ִ� �������̴�.


	// int(4byte)
	int data = 100;

	// float(4byte)
	float pi = 3.141592f;


	void* ptr = &data;

	// *ptr = 10; error
	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� 
	// ���� ������ �� ����.

	*(int*)ptr = 111111;
	

	printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);
	printf("data �� �� : %d\n", data);

	ptr = & pi;

	printf("ptr�� ����Ű�� �� : %f\n", *(float*)ptr);
	printf("pi�� �� : %f\n", pi);

	*/



#pragma endregion


#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����̴�.

	// �Լ��� ȣ�� 
	for (int i = 0; i < 5; ++i)
	{
		Function();
	}
	
	printf("%c\n", CharFuntion());
	CharFuntion();

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ 
	// ������ ���޵Ǵ� ���̴�.

	// int value = 100;
	// 
	// Calculator(value);
	// 
	// printf("vlaue�� �� :%d\n", value);

	// �� �ٲٱ� 
	int a = 10;
	int b = 20;


	Swap(&a, &b);
	
	printf("a �� �� : %d, b�� �� : %d  ", a, b);



	



	

	


#pragma endregion



}