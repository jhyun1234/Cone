#include<stdio.h>
#include<stdlib.h>
int main()
{
#pragma region ���� �Ҵ��̶�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� 
	// �Ҵ��ϴ� �۾��̴�.

	int* ptr = (int*)malloc(sizeof(int));

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦
	// �����ų �� ������, �������� �޸��� ũ�⸦ �Ҵ��� ��
	// ����Ʈ ������ �����Ѵ�.

	printf("ptr�� �ּҰ� : %p\n", ptr);

	*ptr = 100;

	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� 
	// ��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �Ѵ�.

	free(ptr); // �޸� ����

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� ������ ���־�� �Ѵ�.

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������̴�.
	printf("ptr�� �ּҰ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// �̹� ������ �����ʹ� �ʱ�ȭ�� �Ѵ�.
	ptr = NULL;

	int size = 0;

	scanf_s("%d", &size); //12

	if (ptr == NULL)
	{
		// ���� �迭
		ptr = (int*)malloc(sizeof(int) * size); //12
	}

	*ptr = 200;
	ptr[1] = 300;
	printf("ptr[0] �� : %d\n", ptr[0]);
	printf("ptr[1] �� : %d\n", ptr[1]);

#pragma endregion

#pragma endregion


	return 0;
}#pragma once
