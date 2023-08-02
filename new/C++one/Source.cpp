#include<stdio.h>



#pragma region typedef

typedef int int16_m;

typedef struct Node
{
	int data;
	char name[10];
	Node* next;
}Node;
#pragma endregion



int main()
{
#pragma region typedef

    // int data = 100;
	// int16_m value = 200;

	Node node1 = { 100,"node1",NULL};
	Node node2 = { 200,"node2",NULL };
	Node node3 = { 300,"node3",NULL };

	node1.next = &node2;
	node2.next = &node3;

	// node1.name = "node10"; error

	Node* currentNode = &node1;
	


	while (currentNode != NULL)
	{
		printf("currentNode가 가리키는 data 값 : %d\n", currentNode->data);

		currentNode = currentNode->next;

		
	}



	// printf("node1.next : %p\n", node1.next);
	// printf("node1.next.->next: %p\n", node1.next->next);
	// printf("node1.next->next->next : %p\n", node1.next->next->next);
	
	


	
#pragma endregion
	return 0;
}