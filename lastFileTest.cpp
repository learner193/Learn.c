#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
static int cchainlength=0;
struct cchain {
	int num;
	char c;
	cchain *pc;
};
static struct cchain *ccp0=(cchain *)malloc(sizeof(struct cchain));
static struct cchain *ccpnw=NULL;
int main() {

	return 0;
}

//链表加字
cchain *cchainadd(char c) {
	cchain *ccp1=0;
	if(cchainlength==0)
		ccp1=ccp0;
	else
		ccp1=(cchain *)malloc(sizeof(struct cchain));
	ccp1->c=c;
	cchainlength++;
	ccp1->num=cchainlength;
	ccpnw=ccp1;
	return ccpnw;
}

//查找链表第n个数 的地址
cchain *cchainfindnum(int n) {
	cchain *ccp1=ccp0;
	if (n>cchainlength) {
		printf("chainfinderror\noutofcchain\n");
		return NULL;
	}
	int i;
	if (n=1)return ccp1;
	for(i=1; i<n; i++) {
		ccp1=ccp1->pc;
	}
	return ccp1;
}

//按内容查找 所在链表 位置n,从start开始 
int cchainfindchar(char c,int start) {
	cchain *cchainfindnum(int n);
	cchain *ccp1;
	ccp1=cchainfindnum(start);
	for(; start<=cchainlength; start++) {
		if(ccp1->c==c) {
			break;
		}
		ccp1=ccp1->pc;
	}
	if(ccp1->pc==NULL)start=-1;
	return start;
}

//切除链表第n个数
int cchaincut(int n) {
	cchain *cchainfindnum(int n);
	cchain *ccp1=cchainfindnum(n);
	cchain *ccp2=NULL;
	if(n<1||n>cchainlength) {
		printf("cchaincuterror\noutofchain\n");
		return -1;
	}
	if(n>1&&n<cchainlength) {
		ccp2=cchainfindnum(n-1);
		ccp2->pc=ccp1->pc;
		free(ccp1);
	} else if(n==1) {
		if (cchainlength>1) {
			ccp2=ccp1->pc;
			free(ccp0);
			ccp0=ccp2;
		} else ccp1->c=NULL;
	} else if(n==cchainlength) {
		ccp2=cchainfindnum(n-1);
		free(ccp1);
		ccp2->pc=NULL;
	}
	cchainlength--;
	return 0;
}

//链表重赋序号
int cchainassignnum() {
	cchain *ccp1=ccp0;
	int i;
	for(i=1; i<=cchainlength; i++) {
		ccp1->num=i;
		ccp1=ccp1->pc;
	}
	return 0;
}

//输出链表内容
int cchainprint() {
	int i;
	cchain *ccp1=ccp0;
	printf("\n");
	for(i=1; i<=cchainlength; i++) {
		printf("%c",ccp1->c);
		ccp1=ccp1->pc;
	}
	return 0;
}

//查找连续n个字符的链表内容,从start开始 
int cchainstringfind(char *p,int n,int start) {
	int cchainfindchar(char c,int start);
	int i;
	for(i=0;i<n;i++){
		start=cchainfindchar(*(p+i),start);
		if(start<0){
			printf("\n can't find the string \n'");
			return -1;
		}
		start=start+1;
	}
	return start-n;
}
 
