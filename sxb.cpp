#include<stdlib.h>
#include<stdio.h>
#define InitSize 100
typedef int Elemtype;
/*typedef struct{
	Elemtype data[Maxsize];
	int length;
};SqList;*/
typedef struct{
	Elemtype*data;
	int MaxSize,lenght;
}SqList;
bool ListIntsert(SqList &L,int i,Elemtype e){
	if(i<1 || i>L.lenght+1){
		return false;
	}
	for (int j=L.lenght;j>=i;j--){
		L.data[j]=L.data[j-1];
	}L.data[i-1]=e;
	L.lenght++;
	return true;
} 
bool ListDelete(SqList &L,int i,Elemtype &e){
	if(i<1||i>L.lenght+1){
		return false;
	}
	e=L.data[i-1];
	for(int j=i;j<L.lenght;j++){
		L.data[j-1]=L.data[j];
	}L.lenght--;
	return true;
}
bool SearchList(SqList &L,int i){
	if(i<1||i>L.lenght+1){
		return false;
	}
	printf("%d",L.data[i-1]);
	return true;
}
bool PlusList(SqList &L,Elemtype e){
	L.data[L.lenght]=e;
	L.lenght++;
	return true;
}
void All(SqList &L){
	for(int i=0;i<L.lenght;i++){
		printf("%d",L.data[i]);
	}
}
int main(){
	SqList L;
	L.data=(int*)malloc(sizeof(Elemtype)*InitSize);
	L.lenght=0;
	ListIntsert(L,1,5);
	ListIntsert(L,2,4);
	Elemtype e;
	ListDelete(L,1,e);
	printf("%d",e);
	SearchList(L,2);
	All(L);
}

