//#include"stdio.h"
//#include"stdlib.h"
//#include"List.h"
//typedef int SLDataType;
//
//typedef struct Node {
//	SLDataType	value;
//	struct Node* next;
//}Node;
//
//typedef struct SList {
//	struct Node* first;
//}SList;
//
//
//void SListInit(SList* slist) {
//	slist->first = NULL;
//}
//
//void SListPushFront(SList* slist,SLDataType value) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->value = value;
//	
//	node->next = slist->first;
//	slist->first = node;
//}
//
//void SListPopFront(SList* slist) {
//	assert(slist->first != NULL);
//	if (slist->first->next == NULL) {
//		free(slist->first);
//		slist->first = NULL;
//		return;
//	}else {
//		Node* second = slist->first->next;
//		free(slist->first);
//		slist->first = second;
//	}
//}
//
//void SListPushBack(SList* slist,SLDataType value) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->value = value;
//	node->next = NULL;
//
//	if (slist->first == NULL) {
//		slist->first = node;
//	}else {
//		Node* cur = slist->first;
//		while (cur->next != NULL) {
//			cur = cur->next;
//		}
//		cur->next = node;
//	}
//}
//
//void SListPopBack(SList* slist) {
//	assert(slist->first != NULL);
//
//	if (slist->first->next == NULL) {
//		free(slist->first);
//		slist->first = NULL;
//		return;
//	}else {
//		Node* cur = slist->first;
//		while (cur->next->next != NULL) {
//			cur = cur->next;
//		}
//		free(cur->next);
//		cur->next = NULL;
//	}
//}
//
//
//Node* SListFind(SList* slist,SLDataType value) {
//	assert(slist->first != NULL);
//	for (Node* cur = slist->first; cur != NULL; cur = cur->next) {
//		if (cur->value == value) {
//			return cur;
//		}
//	}
//	return NULL;
//}
//
//void SListInsertAfter(SList* slist,Node* pos,SLDataType value) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->value = value;
//
//	if (slist->first == NULL) {
//		slist->first = node;
//		node->next = NULL;
//	}else {
//		node->next = pos->next;
//		free(pos->next);
//		pos->next = node;
//	}
//}
//
//void SListEraseAfter(SList* slist,Node* pos) {
//	assert(slist->first != NULL);
//	
//	if (slist->first->next == NULL) {
//		if (slist->first == pos) {
//			slist->first = NULL;
//		}
//	}else{
//		Node* next = pos->next->next;
//		free(pos->next);
//		pos->next = next;
//	}
//}
//
//void SListRemove(SList* slist,SLDataType value) {
//	assert(slist->first != NULL);
//
//	if (slist->first->value == value){
//		Node* second = slist->first->next;
//		free(slist->first);
//		slist->first = second;
//	}
//	else {
//		for (Node* cur = slist->first; cur->next != NULL; cur = cur->next) {
//			if (cur->next->value == value) {
//				Node* next = cur->next->next;
//				free(cur->next);
//				cur->next = next;
//				return;
//			}
//		}
//	}
//}
//
//
//void SListRemoveAll(SList* slist,SLDataType value) {
//	assert(slist->first != NULL);
//
//	Node* cur = slist->first;
//	while (cur->next != NULL) {
//		if (cur->next->value == value) {
//			Node* next = cur->next->next;
//			free(cur->next);
//			cur->next = next;
//		}else {
//			cur = cur->next;
//		}
//	}
//	if (slist->first->value == value) {
//		Node* second = slist->first->next;
//		free(slist->first);
//		slist->first = second;
//	}
//}
//
//void SListReverseList(SList* slist) {
//	assert(slist->first != NULL);
//
//	Node* cur = slist->first;
//	Node* head = NULL;
//	while (cur != NULL) {
//		Node* next = cur->next;
//		cur->next = head;
//		head = cur;
//		cur = next;
//	}
//	return head;
//}
//
//
//int main() {
//
//	system("pause");
//	return 0;
//}