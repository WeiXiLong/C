//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int x, int y ,int z)
//{
//	if (x >= y && x >= z) {
//		return 1;
//	}
//	else if (y >= x && y >= z)
//	{
//		return 2;
//	}
//	else if (z >= x && z >= y) {
//		return 3;
//	}
//	else 
//	return -1;
//}
//int main()
//{
//
//	int a = 10;
//	int b = 5; 
//	int c = 20;
//	int res = Max(a, b, c);
//	switch(res) {
//	case 1: printf("%d %d %d\n", a, b >= c ? b : c, c <= b ? c : b); break;
//	case 2: printf("%d %d %d\n", b, a >= c ? a : c, c <= a ? c : a); break;
//	case 3: printf("%d %d %d\n", c, a >= b ? a : b, b <= a ? b : a); break;
//	}
//
//	system("pause");
//	return 0;
//}