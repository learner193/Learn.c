#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
static time_t TIME;
struct member {
		char name[30];
		int number;
	};
int main() {
	int i;
	char c;
	TIME=time(0);
	srand(TIME);
	member a[5];
	strcpy(a[1].name,"sdsdda");
	strcpy(a[2].name,"fafafaqq");
	int output(struct member *p);
	
	for(i=0; i<30; i++) {
		if (i<10)
			a[3].name[i]=rand()%57+65;
		else a[3].name[i]='\0';
	}
	for(i=0; i<30; i++) {
		if (i<10)
			a[0].name[i]=rand()%57+65;
		else a[0].name[i]='\0';
	}
	printf("  a[3].name=%s  00\n",a[3].name);
	c=93;
	printf("%c\n",c);
	struct member *p;
	p=&a[0];
	int *q;
	q=&a[2].number;
	printf("%s\n",(*p).name);
	output(p);
	return 0;
}
int output(struct member *p) {
	printf("(*p).name=%s",(*p).name);
	return 0;
}
