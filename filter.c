#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
FILE * oldFile;
FILE * newFile;
char a;

oldFile= fopen("excerpt.txt", "r");


newFile= fopen("proofitworks.txt", "w");

while((a=getc(oldFile))!=EOF){
if(isalpha(a)){
fprintf(newFile,"%c", a);
}
