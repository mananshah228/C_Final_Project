#include<stdio.h>
#include<string.h>

int n, count=0;;
char name[20];

struct reln{
char child[20];
char father[20];
}r[10];

void countChildren(char name[]) {

    for(int j=0;j<n;j++) {

        if(strcmp(name,r[j].father)==0) {

            count++;
            countChildren(r[j].child);
        }
    }
}

void main() {

    int c=0;
    char buf[1000];
    char buf1[1000];
    char d[1000];

    FILE *fp = fopen("file.txt", "r");

    scanf("%s",name);

    while(fscanf(fp,"%s%s", buf, buf1)!=EOF) {

        if(strcmp(name,buf1)==0) {

            strcpy(d,buf);
        }
    }

    fseek(fp, 0, SEEK_SET);

	while(fscanf(fp,"%s%s",buf,buf1)!=EOF) {

	    if(strcmp(buf1,d)==0) {
	        c++;
	    }  
	}

    printf("%d",c);
}