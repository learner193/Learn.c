#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	time_t t;
	int printmat(int *a,int x,int y);
	int upmt(int *a,int x,int y);
	int dnmt(int *a,int x,int y);
	int i,j;
	int x=20,y=20;
	int a[x][y];
	t=time(NULL);
	srand(t);
	printf("time=%lld",t);
	for(i=0; i<x; i++)
		for(j=0; j<y; j++)
			a[i][j]=rand()%400;
	int *p;
	printmat(*a,x,y);
	int (*q)(int *,int,int);
	printf("enter 1 or 2:\n");
	scanf("%d",&i);
	if(i==1)q=upmt;
	else if(i==2)q=dnmt;
	q(*a,x,y);
	printmat(*a,x,y);
	return 0;
}
int upmt(int *a,int x,int y) {
	int temp;
	int i,j;
	for(i=0; i<x*y-1; i++)
		for(j=0+i; j<x*y-1; j++) {
			if(*(a+i)>*(a+1+j)) {
				temp=*(a+i);
				*(a+i)=*(a+1+j);
				*(a+1+j)=temp;
			}
		}
	return 0;
}
int dnmt(int *a,int x,int y) {
	int temp;
	int i,j;
	for(i=0; i<x*y-1; i++) {
		for(j=0+i; j<x*y-1; j++) {
			if(*(a+i)<*(a+1+j)) {
				temp=*(a+i);
				*(a+i)=*(a+1+j);
				*(a+1+j)=temp;
			}
		}
	}
	return 0;
}
int printmat(int *a,int x,int y) {
	printf(" \n printmatrix:\n");
	int i,j;
	for(i=0; i<x; i++) {
		for(j=0; j<y; j++)
			printf("%3d ",*(a+i*y+j));
		printf("\n");
	}
	return 0;
}
