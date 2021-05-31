#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main() {
	FILE *fp1,*fp2;
	fp1=fopen("D:\\databench\\fileOpenTest\\fopentest05311.txt","w");
	printf("errorcode=%d\n",ferror(fp1));
	clearerr;
	long i;
	i=0L;
	fseek(fp1,i,2);
	i=ftell(fp1);
	fputs("fputs1\n1string\ntest\n",fp1);
	rewind(fp1);
	fclose(fp1);

	fp1=fopen("D:\\databench\\fileOpenTest\\fopentest05311.txt","r+");
	char c[100];
	char *p;
	char d[100];
	p=c;
	rewind(fp1);
	printf("ftell=%d\n",ftell(fp1));
	p=fgets(c,100,fp1);
	printf("fgets:%s\n",c);
	printf("ftell=%d\n",ftell(fp1));

	fseek(fp1,0L,2);
	fprintf(fp1,"dasdswwdsxwax%s",c);
	rewind(fp1);
	fscanf(fp1,"%s%s",&c,&d);
	printf("%s,%s\n",c,d);

	fseek(fp1,0L,2);
	int e[]= {12,231,31212,4214,312,4213,412,241};
	int *q=e;
	fwrite(q,sizeof(int),100,fp1);
	printf("ftell=%d\n",ftell(fp1));
	i=400L;
	i=fseek(fp1,i,1);
	printf("ftell=%d\n",ftell(fp1));
	if(i==-1L)printf("error\n");
	fread(q,sizeof(int),100,fp1);
	printf("ftell=%d\n",ftell(fp1));
	int j;
	for(j=0;j<8;j++)
	printf("q=%d\n",q[j]);

	return 0;
}

