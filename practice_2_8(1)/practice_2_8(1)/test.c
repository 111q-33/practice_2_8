#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//浮点型在内存的存储方式
int main()
{
	int n = 9;
	//00000000000000000000000000001001
	float *pFloat = (float *)&n;
	printf("n的值为:%d\n", n);//9
	printf("*pF1oat的值为︰%f\n", *pFloat);//0
	*pFloat = 9.0;
	printf("num的值为:%d\n", n);//很大
	printf("*pF1oat的值为:%f\n", *pFloat); return 0;//9.000000
}
