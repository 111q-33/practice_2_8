#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���������ڴ�Ĵ洢��ʽ
int main()
{
	int n = 9;
	//00000000000000000000000000001001
	float *pFloat = (float *)&n;
	printf("n��ֵΪ:%d\n", n);//9
	printf("*pF1oat��ֵΪ�U%f\n", *pFloat);//0
	*pFloat = 9.0;
	printf("num��ֵΪ:%d\n", n);//�ܴ�
	printf("*pF1oat��ֵΪ:%f\n", *pFloat); return 0;//9.000000
}
