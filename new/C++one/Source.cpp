#include<stdio.h>

int main()
{
#pragma region ������ �迭

	// int a = 10;
	// int b = 20;
	// int c = 30;
	// 
	// int* arrayPtr[3] = { &a,&b,&c };
	// 
	// *arrayPtr[1] = 100;
	// 
	// // int** Ptr2 = &arrayPtr[1];
	// 
	// 
	// printf("arrayPtr[1] ��:%d\n", *arrayPtr[1]);
	// printf("arrayPtr[1] �ּҰ� :%p\n", arrayPtr[1]);
	// printf("b�� �ּ�:%p\n", &b);
	
#pragma endregion

#pragma region ¦���� Ȧ��

	// int a = 0;
	// 
	// printf("���ڸ� �Է��ϼ���", a);
	// scanf_s("%d", &a);
	// 
	// if (a % 2 ==0)
	// {
	// 	printf("¦���Դϴ�", a);
	// }
	// else if(a % 2 == 1)
	// {
	// 	printf("Ȧ���Դϴ�", a);
	// }

#pragma endregion


#pragma region 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�̴�.

	// 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�,
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ũ�⸸ ������ �� �ִ�.
	// int array2D[3][3] =
	// {
	// 	{0,1,2},
	// 	{3,4,5},
	// 	{6,7,8},
	// };
	// 
	// // 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭��
	// // ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��Ѵ�.
	// for (int i = 0; i <= 2; i++)
	// {
	// 	for (int j = 0; j <= 2; j++)
	// 	{
	// 	printf("array2D[%d][%d]�� �� : %d\n", i, j, array2D[i][j]);
	// 	}
	// }
	// 
	// int(*ptr)[3] = array2D;
	// 
	// printf("ptr�� �ּ� ��:%p\n", ptr);
	// printf("array2D�� ���� �ּ� :%p\n", array2D);
	// 
	// printf("ptr +1 �� ���� �ּ�:%p\n", ptr + 1);
	// printf("array2D +1 �� ���� �ּ� :%p\n", array2D + 1);

	// ���� �ּҸ� �˷��� ()�� ����,
	// ���� �ּҸ� �˷��� ()�� �ʿ����.
#pragma endregion

#pragma region ���μ� ����
	
	// int a;
	// printf("���ڸ� �Է��ϼ���");
	// scanf_s("%d", &a);

	// for (int i = 2; i <= a; i++)
	// {
	// 	while (a % i ==0)
	// 	{
	// 		a /= i;
	// 		printf("%d\n", i);
	// 	}
	// 	
	// }
	// for (int i = 2; i <= a; i++)
	// {
	// 	if (a % i == 0)
	// 	{
	// 		a /= i;
	// 		printf("%d\n", i);
	// 		i--;
	// 	}
	// 
	// }

#pragma endregion

	return 0;
}