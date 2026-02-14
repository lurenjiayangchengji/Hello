#include<stdio.h>
int main() {
	int n;
	double b[n],max,min;
	printf("n¸öÊý×Ö");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &b[i]);
	}max = b[0];
	min = b[0];
	for (int i = 0; i < n-1; i++) {
		max = (max > b[i + 1]) ? max : b[i + 1];
		min = (min < b[i + 1]) ? min : b[i + 1];
	}
	printf("max=%f,min=%f", max, min);
	return 0;
}