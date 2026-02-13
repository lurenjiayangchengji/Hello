#include<stdio.h>
int main() {
	char arr[100]="asaff";
	FILE* pf=fopen("E:\\ecample.txt","r+");
	if (pf == NULL) {
		printf("Error opening file");
		return 1;
	}
	fputc('A', pf);
	fputs("Hello", pf);
	fputs("arr", pf);
	char ch = fgetc(pf);
	fgets(arr,10,pf);
	fclose(pf);
	pf = NULL;
}