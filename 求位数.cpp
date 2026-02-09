#include<stdio.h>
int main(void) {
	int a=0,flag=1,num;
	scanf_s("%d", &num);
	while (flag) {
		a += 1;
		num /= 10;
		if (num == 0) {
			flag = 0;
		}
	}printf("%d的位数是%d", num, a);
}