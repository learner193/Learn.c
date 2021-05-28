#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
static int n=0;
struct AChain {
	int num;
	int data;
	char code[10];
	struct AChain *pointer;
};
AChain *creatchain() {
	srand(time(0));
	AChain *head,*p0,*p1;
	int length,i=100,j;
	length=sizeof(AChain);
	p0=(AChain *)malloc(length);
	head=p0;
	for(; i>0;) {
		printf("\nnum:%d\n",n);
		printf("input:\nadd code->1 \nstop->0:\n");//创建一个由一堆随机数废料组成的链表；
		scanf("%d",&i);
		if(i!=1)break;
		else if(i==NULL) break;
		p0->data=rand()%999999;
		for(j=0; j<9; j++) {
			p0->code[j]=rand()%57+65;
		}
		p0->code[10]='\0';
		p0->num=n;
		n++;
		p1=(AChain *)malloc(length);
		p0->pointer=p1;
		p0=p1;
	}
	return head;
}
int main() {
	AChain *creatchain();
	int printAChain(AChain *p0,int i);
	AChain *p;
	p=creatchain();
	printAChain(p,n);
	return 0;
}
int printAChain(AChain *p0,int i) {
	int j;
	printf("AChain list:\n");
	for(j=0; j<i; j++) {
		printf("%d     %d     %s     %p\n",p0->num,p0->data,p0->code,p0->pointer);
		p0=p0->pointer;
	}
	return 0;
}
