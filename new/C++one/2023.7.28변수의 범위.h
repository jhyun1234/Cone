#pragma once
#include<stdio.h>
#include "GameRandom/soundManger.h"
#include "GameRandom/ControlSound.h"

// ���� ��ó�����̶�?
// ���� �ҽ� ���Ͽ� �ܺο� �ִ� ������ �����Ͽ�
// �ܺο� �ִ� �Լ��� ����� �� �ֵ��� �����ϴ� ���̴�.

// ���� ó�� ��ó������ ��� ���̺귯�� ������ ������ ����
// <�ܺ�����.h> �� ��������, ���� ��ο��� �ܺ� ������ 
// ������ ���� "�ܺ� ����.h"�� �����´�.

#pragma region ���� ����
// �Լ� �ܺο� ����� ������ ��𿡼�����
// ������ �� ������, ���α׷��� ����Ǿ�߸�,
// �޸𸮿��� �����Ǵ� �����̴�.
int Level; // �ʱ�ȭ �Ǿ����� ���� �������� (BSS ����)

int stage = 1; // �ʱ�ȭ�� �̷���� ���� ���� (.data ����)


#pragma endregion

#pragma region ���� ����
// ���� ������ ���� ������ Ư���� ���ÿ� ������ ������,
// ���α׷��� ����Ǿ�߸� �޸𸮿��� �����Ǵ� �����̴�.
void ShowStat()
{
	// �� �ѹ��� �ʱ�ȭ�� �̷������.
	static int score = 0; // �ٸ������ �ǵ帮�� ���ϰ� �ϱ����ؼ� �����

	Level++;
	score++;

	printf("level:%d=\n", Level);
	printf("score:%d=\n", score);
}
#pragma endregion


int main()
{
#pragma region ���� ����
	/*// �Լ� ���ο��� ����� ������ �Լ� ��������
	// ����� �����ϸ�, { } �� ����� �Ǹ�
	// �޸𸮿��� ������� �����̴�.

	// int data = 100; // A ������ �ִ� data ����
	//
	// {
	// 	int data = 200; // B ������ �ִ� data ����
	// 	printf("data ������ �� : %d\n", data);
	// }
	// printf("data ������ �� : %d\n", data);
	*/

#pragma endregion

	// Level = 100;
	// 
	// 
	// 
	// ShowStat();
	// ShowStat();

#pragma region ���� �� (Short-curcuit)
	// ù ��° �μ��� ���� �����ϱ⿡ ������� ���� ��쿡��
	// �� ��° �μ��� �򰡵Ǵ� �Ϻ� ���α׷��� ����� �Ϻ� �� �����̴�.

	// int i = 1;
	// int j = 0;
	// 
	// if (i > j || ++j)
	// {
	// 	printf("j�� �� :%d\n", j);
	// }
	// 
	// if (i < j && j++)
	// {
	// 	printf("j�� �� :%d\n", j);
	// }
	// else
	// {
	// 	printf("j�� �� :%d\n", j);
	// }

#pragma endregion

	Play();


	return 0;
}