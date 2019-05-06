#include"stdio.h"
#include"stdlib.h"

void Swap(int array[],int i,int j) {
	int tem = array[i];
	array[i] = array[j];
	array[j] = tem;
}

void PrintArray(int array[],int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ",array[i]);
	}
	printf("\n");
}

int PartitionHover(int array[],int low,int high) {
	int begin = low;
	int end = high;
	int pivot = array[low];
	while (begin < end) {
		while (array[end] >= pivot) {
			end--;
		}
		while (array[begin] <= pivot) {
			begin++;
		}
		Swap(array,begin,end);
	}
	Swap(array,0,begin);
	return begin;
}



void QuickSort(int array[],int low,int high) {
	if (low >= high) {
		return;
	}

	int pivotIdx = PartitionHover(array,low,high);

	QuickSort(array,low,pivotIdx - 1);
	QuickSort(array,pivotIdx + 1,high);
}

void __QuickSort(int array[],int size) {
	QuickSort(array,0,size - 1);
}

void Test() {
	int array[] = {5,2,9,6,4,8,7,1,0,3,8};
	int size = sizeof(array) / sizeof(int);
	PrintArray(array,size);
	__QuickSort(array,size);
	PrintArray(array, size);
}

int main() {
	Test();
	system("pause");
}