#include<stdio.h>
#include<math.h>
#pragma region ����ü
// ���� ���� ������ �ϳ��� ��������
// ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��

struct GameObject
{
	int health; // 4
	double x;   // 8
	// Padding  // 3
	char grade; // 1

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ �� �� ����.
};

#pragma endregion

struct Player
{
	float x, y;
	 
};

struct Enemy
{
	float x, y;
	

};

int main()
{
#pragma region ����ü ����

	// struct GameObject gameObject;
	// 
	// gameObject.x = 3.45;
	// gameObject.health = 100;
	// 
	// printf("gameObject.x�� �� :%lf\n", gameObject.x);
	// printf("gameObject.health�� �� :%d\n", gameObject.health);
	// 
	// struct GameObject object = { 300,6.25};
	// 
	// printf("object.x�� �� :%lf\n", object.x);
	// printf("object.health�� �� :%d\n", object.health);
#pragma endregion	

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� 
	// ���� �� �ֵ���,�����Ϸ��� ���������� ��Ͽ� ���缭
	// ����Ʈ�� �е����ִ� ����ȭ �۾��̴�.


	// printf("GameObject�� ũ�� : %d", sizeof(struct GameObject));
	
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����Ѵ�.
#pragma endregion

#pragma region ������ �Լ�
	 // int result = pow(10, 2);
	 // float decimal = 100.0f;
	 // 
	 // // sqrt : ��ȯ�ϴ� ������ long double, double, float
	 // decimal = sqrt(decimal);
	 // 
	 // printf("result ������ ��� :%d\n", result);
	 // printf("decimal ������ ��� :%f\n", decimal);
#pragma endregion

#pragma region �� �� ������ �Ÿ�
 
	struct Enemy enemy = { 5.0f,2.0f };
	struct Player player = { 0.0f,0.0f };

	enemy.x = 5.0f;
	enemy.y = 2.0f;

	float x = player.x - enemy.x;
	float y = player.y - enemy.y;

	double distance = sqrt(pow(x, 2) + (pow(y, 2)));

	printf("player�� enemy������ �Ÿ� :%lf\n",distance);

	
	

	
	


	

	
	
#pragma endregion

	return 0;
}