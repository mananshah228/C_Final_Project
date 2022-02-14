#include <stdio.h>
#include <string.h>

char str[101];

void remChar(int i) {

    for(;str[i]!='\0';) {

        str[i]=str[i+2];
        str[i+1]=str[i+3];
        i+=2;
    }
}

void main() {
    int len=0;

    scanf("%d",&len);
    scanf("%s",str);

    for(int i=0;i<len;i++) {

        if((str[i] == str[i+1] ) && (i >= 0) && str[i]!='\0') {
            
            remChar(i);
            i--;
        } 
    }

    if(str[0]=='\0') {

        printf("Empty String");
    
    } else {
        
        printf("%s\n",str);
    }
}