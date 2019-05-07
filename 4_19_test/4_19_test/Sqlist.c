#include"stdio.h"
#include"stdlib.h"

typedef	int SLDatatype;

typedef struct Node {
	struct Node* front;
	struct Node* next;
	struct Node* random;
	SLDatatype data;
}Node;

Node* NodeRandom(Node* node,int array[],int size) {
	node->data = array[0];
	Node* newNode = (Node*)malloc(sizeof(Node) * size);
	newNode->data = node->data;
	newNode->front = newNode->next = NULL;

	Node* cur = node;
	while (cur != NULL) {
		Node* next = cur->next;
		newNode->front = cur;
		cur->next = newNode;
		cur = next;
	}

	cur = node;
	Node* newnode = cur->next;
	while (cur != NULL && cur->random != NULL) {
		Node* next = cur->next->next;
		newnode->random = cur->random->next;
		newnode = cur->next;
		cur = next;
	}

	cur = node;
	newnode = cur->next;
	newnode->front = NULL;
	while (cur != NULL) {
		Node* next = cur->next->next;
		newnode->next = cur->next;
		cur->next = next;
	}
	return newnode;
}











int main() {
	Test();
	system("pause");
	return 0;
}