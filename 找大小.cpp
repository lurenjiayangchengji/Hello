#include<stdio.h>
int main(void) {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	int b = a[0];
	for (int i = 1; i < 10; i++) {
		b = (b > a[i]) ? b : a[i];
	}
	printf("max=%d", b);
	b = a[0];
	for (int i = 1; i < 10; i++) {
		b = (b < a[i]) ? b : a[i];
	}
	printf("min=%d", b);
}