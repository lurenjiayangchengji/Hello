#include<stdio.h>
int main(void) {
	int n,sum=1,flag;
	scanf_s("%d", &n);
	flag = (n > 0) ? 1 : 0;
	switch (flag) {
	case 1: for (int i = 1; i <= n; i++) {
		sum *= i;
	} printf("%d!=%d", n, sum);
		  break;
	case 0:printf("error"); break;
	}
}