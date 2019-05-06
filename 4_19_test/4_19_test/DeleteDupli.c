#include"stdio.h"
#include"stdlib.h"
typedef int SLDatatype;

typedef struct Node{
	struct Node* next;
	struct Node* front;
	SLDatatype data;
}Node;

void DeletDupli(Node* node) {
	Node* newnode = (Node*)malloc(sizeof(Node));

	Node* cur = node;

}