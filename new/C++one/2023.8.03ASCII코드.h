#pragma once
#include<stdio.h>
#include<limits.h>
#pragma region 열거형
// 명명된 정수형 상수의 잡합이다.

enum State
{
    IDLE,
    ATTACK,
    DIE

    // enum에 설정된 값을 변경할 수 있으며, 중간에 값을
    // 변경했을 때 그다음으로 설정된 값은 변경한 이후의 값에 +1로 설정된다.

};
#pragma endregion

int main()
{
#pragma region 열거형



    enum State state;

    // state = IDLE;
    // 
    // printf("state의 IDLE 값 : %d\n", state);
    // 
    // state = ATTACK;
    // 
    // printf("state의 ATTACK 값 : %d\n", state);
    // 
    // state = DIE;
    // 
    // printf("state의 DIE 값 : %d\n", state);

    // state = DIE;
    // switch (state)
    // {
    //   case IDLE:printf("대기 상태\n");
    //       break;
    //   case ATTACK:printf("공격 상태\n");
    //       break;
    //   case DIE:printf("죽음 상태\n");
    //       break;
    //   
    // }

#pragma endregion

#pragma region 별 출력하기
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

#pragma region 1~10까지의 합
   // int a = 0;
   // int b = 0;
   // while (a <= 10)
   // {
   //     b += a;
   //     a += 1;
   //     printf("1~10까지의 합 %d\n", b);
   // }

    // int a = 0;
    // 
    // for (int i = 0; i <= 10; ++i)
    // {
    //     a = +a + i;
    // 
    // }
    // printf("1~10까지의 합 %d\n", a);

#pragma endregion

#pragma region ASCII코드 
    // 1963년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계이다.

    // 128개의 숫자, 문자, 특수문자, 제어문자가 표현된다.

   // char alphabet = 65;
   // 
   // // 유니코드 
   // 
   // printf("alphabet 변수의 ASCII 코드의 값 : %c\n", alphabet);
   // printf("alphabet 변수의 변수의 값 : %d\n", alphabet);

     // A <-
    // 
    // z

    // for (alphabet = 65; alphabet <= 90; alphabet++)
    // {
    //     printf("A~Z까지의 변수의 값 :%c\n", alphabet);
    // }
    // 
    // for (int i = 0; i <= 25; i++)
    // {
    //     printf("%c", 'A' + i);
    // }
#pragma endregion

#pragma region 최솟값과 최댓값

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

    printf("최솟값 : %d\n", min_num);
    printf("최댓값 : %d\n", max_num);




#pragma endregion

    return 0;
}