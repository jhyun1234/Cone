#include<stdio.h>

#pragma region �ζ��� �Լ�
// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��̴�.

//inline void Information()
//{
	// int health = 100;
	// const char* name = "Slime";
	// printf("ü�� : %d\n", health);
	// printf("�̸� : %s\n", name);
//}
#pragma endregion

int main()
{
#pragma region �ζ��� �Լ�



	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� 
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϸ�
	// ����� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �ȴ�.

	// �ζ��� �Լ��� ��� ������ ������ Ȯ���Ǹ�,������ �� �ζ��� �Լ��� �����ϴ���
	// ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �Ѵ�.
#pragma endregion
#pragma region ������ �°�
	// �Ϲ������� CPU�� ó���ϱ⿡ ���� ������
	// ũ���� ���� �ڷ����� int �̹Ƿ� , int�� ����
	// ���� �ڷ����� int �ڷ����� ��ȯ�ϴ� ���̴�.

	// char a = 10;  // 1byte
	// short b = 20; // 2byte


	// printf("a ������ b ������ ���� �޸� ũ�� : %d\n", sizeof(a +b));
#pragma endregion

#pragma region ��ȣ���� �ڷ���

	// char alphabet = 127; // -128 ~ 127
	// unsigned char unAlphabet = 128; // 0 ~ 225
	// 
	// printf("alphabet ������ �� : %d\n", alphabet);
	// printf("unalphabet ������ �� : %u\n", unAlphabet);

	// unsigned -> "%u" ���� �ٸ��� ���� 

	// char a = -5;
	// unsigned char b = -5;
	// 
	// int data1 = a;  //4byte [1111 1111][1111 1111][1111 1111][1111 1011] <-1byte
	// int data2 = b;  //4byte [0000 0000][0000 0000][0000 0000][1111 1011] <-1byte
	// 
	// printf("data1 : %d,data2�� �� : %d\n", data1, data2);
	// printf("data1 : %u,data2�� �� : %u\n", data1, data2);

#pragma endregion


#pragma region MyRegion

#pragma endregion

	return 0;

}#pragma once
