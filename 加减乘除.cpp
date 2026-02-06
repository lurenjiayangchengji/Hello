#include<stdio.h>
int main(void) {
	double a, b ;
	int c;
	printf("先输入两个数字");
	printf("再进行选择\n加请按1\n减请按2\n乘请按3\n除请按4\n");
	scanf_s("%lf%lf%d",&a,&b,&c);
	switch (c) {
	case 1:printf("%f", a + b); break;
	case 2:printf("%f", a - b); break;
	case 3:printf("%f", a * b); break;
	case 4:printf("%f", a / b); break;
	default:printf("error");
	}
}