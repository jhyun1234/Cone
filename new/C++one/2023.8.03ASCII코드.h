#pragma once
#include<stdio.h>
#include<limits.h>
#pragma region ������
// ���� ������ ����� �����̴�.

enum State
{
    IDLE,
    ATTACK,
    DIE

    // enum�� ������ ���� ������ �� ������, �߰��� ����
    // �������� �� �״������� ������ ���� ������ ������ ���� +1�� �����ȴ�.

};
#pragma endregion

int main()
{
#pragma region ������



    enum State state;

    // state = IDLE;
    // 
    // printf("state�� IDLE �� : %d\n", state);
    // 
    // state = ATTACK;
    // 
    // printf("state�� ATTACK �� : %d\n", state);
    // 
    // state = DIE;
    // 
    // printf("state�� DIE �� : %d\n", state);

    // state = DIE;
    // switch (state)
    // {
    //   case IDLE:printf("��� ����\n");
    //       break;
    //   case ATTACK:printf("���� ����\n");
    //       break;
    //   case DIE:printf("���� ����\n");
    //       break;
    //   
    // }

#pragma endregion

#pragma region �� ����ϱ�
    // for (int i = 0; i < 5; ++i)
    // {
    //     for (int j = 0; j < i +1; ++j)
    //     {
    //         printf("*");
    //     }
    // 
    //     printf("\n");
    //     
    //      
    // }

#pragma endregion

#pragma region 1~10������ ��
   // int a = 0;
   // int b = 0;
   // while (a <= 10)
   // {
   //     b += a;
   //     a += 1;
   //     printf("1~10������ �� %d\n", b);
   // }

    // int a = 0;
    // 
    // for (int i = 0; i <= 10; ++i)
    // {
    //     a = +a + i;
    // 
    // }
    // printf("1~10������ �� %d\n", a);

#pragma endregion

#pragma region ASCII�ڵ� 
    // 1963�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���̴�.

    // 128���� ����, ����, Ư������, ����ڰ� ǥ���ȴ�.

   // char alphabet = 65;
   // 
   // // �����ڵ� 
   // 
   // printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
   // printf("alphabet ������ ������ �� : %d\n", alphabet);

     // A <-
    // 
    // z

    // for (alphabet = 65; alphabet <= 90; alphabet++)
    // {
    //     printf("A~Z������ ������ �� :%c\n", alphabet);
    // }
    // 
    // for (int i = 0; i <= 25; i++)
    // {
    //     printf("%c", 'A' + i);
    // }
#pragma endregion

#pragma region �ּڰ��� �ִ�

    // [10] [5] [11] [1] [3]
    int array[5] = { 10,5,11,1,3 };
    int max_num = 0;
    int min_num = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (max_num < array[i])
        {
            max_num = array[i];
        }
        if (min_num > array[i])
        {
            min_num = array[i];
        }

    }

    printf("�ּڰ� : %d\n", min_num);
    printf("�ִ� : %d\n", max_num);




#pragma endregion

    return 0;
}