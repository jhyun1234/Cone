#include<stdio.h>

#pragma region ��� �Լ�
    // � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
    // �۾��� �����ϴ� �Լ��̴�.

void Funtion()
{
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ 
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� 
	// ���� �����÷ο찡 �߻��Ѵ�.
	printf("�Լ� ȣ��\n");
	Funtion();
   }
#pragma endregion

void CountDown(int count)
{
	// ��� �ڵ�
	if (count <= 0)
	{
		return;
	}

	printf("count�� ���� %d\n", count);
	CountDown(count - 1);
	printf("����\n");
}

// ���丮��

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

	// �� ����� ���
	// ��Ʈ��ũ <- ����


	// ��Ʋ ����� ��� 
	// ���� �ּҿ� �������� ���� ����Ʈ(LSB,Least,Significant Bit)
	// ���� �����ϴ� ���
	// �� 2byte�� �ϸ� ���
	

	// ���α׷��� ���������� ����Ǿ��� ��,
	// 0 �̶�� ���� ��ȯ�Ѵ�.
	return 0;

}