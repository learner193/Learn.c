#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	FILE *f1p,*f2p;
	char path[]="D:\\databench\\fileOpenTest\\";
	char temps[100];
	char fileName1[]="fileTest5301.txt";
	char fileName2[]="fileTest5302.txt";
	strcat(strcpy(temps,path),fileName1);
	f1p=fopen(temps,"w");
	long la;
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);
	la=100L;
	fseek(f1p,la,0);
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);
	fputc('p',f1p);
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);
	fputc('p',f1p);
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);
	fseek(f1p,0L,2);
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);	
	fclose(f1p);
	fopen(temps,"a+");
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition=%ld\n",la);	
	fseek(f1p,0L,2);
	fputc('s',f1p);
	fclose(f1p);
	fopen(temps,"a");
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition a=%ld\n",la);	
	fclose(f1p);
	fopen(temps,"ab");
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition ab=%ld\n",la);	
	fclose(f1p);
	fopen(temps,"ab+");
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition ab+=%ld\n",la);	
	fclose(f1p);
	fopen(temps,"r+");
	la=ftell(f1p);
	printf("currentFileLocationMarkPosition r+=%ld\n",la);	
	fclose(f1p);
	
	return 0;
} 
