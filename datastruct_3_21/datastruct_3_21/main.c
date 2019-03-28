//#include"stdio.h"
//#include"stdlib.h"
//#include"assert.h"
//
//typedef int	SLDataType;
//
//typedef	 struct Seqlist {
//	SLDataType *array;
//	size_t	size;
//	size_t	capacity;
//}Seqlist;
//
//static void CheckCapacity(Seqlist* seqlist) {
//	if(seqlist->size < seqlist->capacity){
//		return;
//	}
//	需要扩容的情况
//	申请新的空间
//	int newCapacity = 2 * seqlist->capacity;
//	SLDataType *newarray = (SLDataType*)malloc(sizeof(SLDataType) * newCapacity);
//	copy老数据到新空间
//	for (size_t i = 0; i < seqlist->size; ++i) {
//		newarray[i] = seqlist->array[i];
//	}
//	free(seqlist->array);
//	seqlist->array = newarray;
//	seqlist->capacity = newCapacity;
//}
//
//void SeqlistInit(Seqlist* seqlist,size_t capacity) {
//	assert(seqlist != NULL);
//	seqlist->array = (SLDataType*)malloc(sizeof(SLDataType) * capacity);
//	seqlist->capacity = capacity;
//	seqlist->size = 0;
//}
//
//void SeqlistDestory(Seqlist* seqlist) {
//	assert(seqlist != NULL);
//	assert(seqlist->array != NULL);
//	free(seqlist->array);
//
//	seqlist->array = NULL;
//	seqlist->capacity = seqlist->size = 0;
//}
//
//void SeqlistPushBack(Seqlist* seqlist,SLDataType value ) {
//	CheckCapacity(seqlist);
//	seqlist->array[seqlist->size] = value;
//	seqlist->size++;
//}
//
//void SeqlistPushFront(Seqlist* seqlist,SLDataType value) {
//	CheckCapacity(seqlist);
//	数据的移动
//	for (int i = seqlist->size; i > 0; --i) {
//		seqlist->array[i] = seqlist->array[i - 1];
//	}
//	seqlist->array[0] = value;
//	seqlist->size++;
//}
//
//void SeqlistPopBack(Seqlist* seqlist) {
//	assert(seqlist != NULL);
//	assert(seqlist->size > 0);
//	seqlist->size--;
//}
//
//void SeqlistPopFront(Seqlist* seqlist) {
//	assert(seqlist != NULL);
//	assert(seqlist->size > 0);
//	for (int i = 0; i < seqlist->size - 1; ++i) {
//		seqlist->array[i] = seqlist->array[i + 1];
//	}
//	seqlist->size--;
//}
//
//int SeqlistFind(Seqlist* seqlist,SLDataType value) {
//	assert(seqlist != NULL);
//	for (int i = 0; i < seqlist->size; ++i) {
//		if (seqlist->array[i] == value) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//void SeqlistInsert(Seqlist* seqlist, size_t pos,SLDataType value) {
//	assert(pos >= 0 && pos <= seqlist->size);
//	CheckCapacity(seqlist);
//	for (int i = seqlist->size; i > pos; --i) {
//		seqlist->array[i] = seqlist->array[i - 1];
//	}
//	seqlist->array[pos] = value;
//	seqlist->size++;
//}
//
//void SeqlistErase(Seqlist* seqlist,int pos) {
//	assert(seqlist != NULL);
//	assert(seqlist->size > 0);
//	assert(pos >= 0 && pos < seqlist->size);
//	for (int i = pos; i < seqlist->size - 1; ++i) {
//		seqlist->array[i] = seqlist->array[i + 1];
//	}
//	seqlist->size--;
//}
//
//void SeqlistRemove(Seqlist* seqlist,SLDataType value) {
//	assert(seqlist != NULL);
//	assert(seqlist->size > 0);
//	int pos = SeqlistFind(seqlist,value);
//	if (pos == -1) {
//		return;
//	}
//	SeqlistErase(seqlist,pos);
//}
//
//void SeqlistRemoveAll(Seqlist * seqlist,SLDataType value) {
//	int i = 0;
//	int j = 0;
//	for (int i = 0, j = 0; i < seqlist->size; ++i) {
//		if (seqlist->array[i] != value) {
//			seqlist->array[j] = seqlist->array[i];
//			j++;
//		}
//	}
//	seqlist->size = j;
//}
//
//static void SeqlistModify(Seqlist* seqlist,int pos , SLDataType value) {
//	seqlist->array[pos] = value;
//}
//
//static void SeqlistPrint(const Seqlist* seqlist) {
//	for (int i = 0; i < seqlist->size; ++i) {
//		printf("%d ",seqlist->array[i]);
//	}
//	printf("\n");
//}
//
//void SeqlistBubbleSort(Seqlist* seqlist) {
//	size_t i = 0;
//
//	for (; i < seqlist->size - 1; ++i) {
//		for (size_t j = 0; j < (seqlist->size - 1); ++j) {
//			if (seqlist->array[j] > seqlist->array[j + 1]) {
//				SLDataType tem = seqlist->array[j];
//				seqlist->array[j] = seqlist->array[j + 1];
//				seqlist->array[j + 1] = tem;
//			}
//		}
//	}
//	for (size_t k = 0; k < seqlist->size; ++k) {
//		printf("%d ",seqlist->array[k]);
//	}
//	printf("\n");
//}
//
//int SeqListBinaryFind(Seqlist* seqlist, SLDataType value) {
//	size_t left = 0;
//	size_t right = seqlist->size - 1;
//	while (left < right) {
//		size_t mid = (right - left) / 2 + left;
//		if (seqlist->array[mid] == value) {
//			return mid;
//		}else if (seqlist->array[mid] < value) {
//			left  = mid + 1;
//		}else {
//			right = mid - 1;
//		}
//	}
//	return -1;
//}
//int main() {
//	Seqlist	seqlist;
//	SeqlistInit(&seqlist,6);
//	SeqlistPushFront(&seqlist, 55);
//	SeqlistPushFront(&seqlist, 16);
//	SeqlistPushFront(&seqlist, 15);
//	SeqlistPushFront(&seqlist, 8);
//	SeqlistPushFront(&seqlist,5);
//	SeqlistBubbleSort(&seqlist);
//
//	printf("%d\n", SeqListBinaryFind(&seqlist, 15));
//	system("pause");
//	return 0;
//}