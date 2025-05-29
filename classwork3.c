#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("letters.txt","w");
fclose(fp);
}