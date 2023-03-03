#include <stdio.h>
int main(){
    FILE *f=fopen("i.bmp","rb"),*g=fopen("o.txt","w");fseek(f,118,1);
    int i,j,e,t,x=16;unsigned char m[14][8],*c="042615387cae9dbf";
    fread(m,1,112,f);
    for(i=13;i>=0;i--)for(j=0;j<7;j++){
    e=m[i][j];
    if(e/x!=t)fprintf(g,"§%c",c[t=e/x]);fprintf(g,"⬛");
    if(e%x!=t)fprintf(g,"§%c",c[t=e%x]);fprintf(g,"⬛");
}}
