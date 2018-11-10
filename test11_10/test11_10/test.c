
#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>

void move(char source, char dest) {
	printf("%c -> %c\n",source,dest);
}


void hanno_tower(int n ,char a,char b,char c){
	if (n == 1) {
		move(a,c);
	} else {
		hanno_tower(n - 1, a, c, b);
		move(a, c);
		hanno_tower(n - 1, b, a, c);
	}
}

int main()
{
	int num = 0;
	printf("请输入需要移动圆盘层数：");
	scanf("%d",&num);
	hanno_tower(num,'a','b','c');
	system("pause");
	return 0;
}



#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>

int frog_jump(int num) {
	if (num <= 0) {
		return 0;
	} else if (num == 1) {
		return 1;
	} else if (num == 2) {
		return 2;
	}
	return   frog_jump(num - 1) + frog_jump(num - 2);
}

int main()
{
	int num = 0;
	printf("请输入青蛙需要跳的台阶数：");
	scanf("%d", &num);
	printf("%d\n",frog_jump(num));
	system("pause");
	return 0;
}
汉诺塔的问题归根到底就是要使用大事化小的方式，即递归的方式
根据递归的定义需要设置出口语句和递归关系语句
问题在于如何找到出口，如何才算是完成汉诺塔，出口问题毫无疑问是最小的圆盘移动到了目标柱
那么从a（起始柱）移动到c(目标柱)中还是从b（辅助柱）移动到c中去了
如果仅剩最后一个最小的柱子，说明前n-1柱子已经移动到了c中，剩下两个柱子都是可以放最后一个圆盘的
为了理解方便我们将最后一个圆柱放在a中
出口问题解决后，我们考虑关系问题
即可以递归为圆盘经a过b放置到c中
移动到b盘我们就需要依靠c
移动到c盘我们就需要依靠a（递归问题主要思考大体方向，然后设置出口语句即可）
设计的c语言如下所示