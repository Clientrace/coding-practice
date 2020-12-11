// -------- START --------
// Quine in C, took me half a day just to implement. Displays my animated name and it's own source code. In short, a complex #uselesscode
// Kim Clarence Penaflor Github: https://github.com/Clientrace  Took me hours to made this art, oh well. #nerd    ¯\_(ツ)_/¯   
#include<stdio.h>  
#include<unistd.h>
#include<string.h> 
#include<stdlib.h> 
#define p printf   
#define C char*    
#define DL fflush(stdout);usleep(1000)
#define sp sprintf
C src1[] = {"%c","// -------- START --------%c", "// Quine in C, took me half a day just to implement. Displays my animated name and it's own source code. In short, a complex #u",
"selesscode%c","// Kim Clarence Penaflor Github: https://github.com/Clientrace  Took me hours to made this art, oh well. #nerd    ¯\\_(ツ)_/¯%c","#include<stdio.h> %c#i",
"nclude<unistd.h>%c","#include<sring.h>%c","#include<stdlib.h>%c","#include<stdlib.h>%c","#define p printf%c","#define C char*%c","#define DL fflush(stdout);usleep(5000) %c#d",
"efine sp sprintf%c","C src1[] = {",}; void disp(char nz[]){ for( int i=0; i<strlen(nz); i++ ){putchar(nz[i]);DL;}} char temp[500];
void main(){system("clear");C x = "s9c6s1c2s1s6c5s1s1c6s1s1c7s1c3s1s3c2s1s1c6s1c7s3n1s8c2s6c2s1s5c2s3c2s1c2s3c2s1c2s6c4s1s2c2s1c2s6c2s8n1s8c2s1s5c2s1s5c7s1c6s2c5s1s2c2s1c2s";
C x2 = ""          "1s1c2s1"   "c2s1s5c5s5n"            "1s8c2s1s5"            "c2s1s"          "5c2s3c2"      "s1c2s3c"    "2s1c"           "2s4s2"            "c2s2c2s1c2s1c2";
C x3 = ""  "s1s5c2s8n1s9c6s"   "1c7s1c2s1s2"  "c2s1c2"   "s1s2c2s1c"  "7s1c2s1s" "1s1c"  "4s2c6s1c7s3n1";   char   n[700];   strcat   (n,x);strcat(n,  x2);strcat(n,x3);
C bar= ""  "\u2588";for(int    i=0;i<strlen   (n)-2;i+=  2){int/**/  l=atoi(&n[  i+1])  ;for(int j=0;j<l   ;j++){   if(n[   i]=='s'  ){p("=");}if(n   [i]=='c'){p("%s",bar);}
if(n[i]==  'n'){p("%c",/**/    10);}DL; } }               char /**/             otsrc            [5000 ]   ;for(int         i=0;i<   15;i++){sp(/**/            temp,src1[i],10);
strcat(    otsrc,temp);}for(   int i=0;i<15;  i++){char  temp[500];  int del;  if(src1  [i][strlen(src1[   i])-2] == '#')   {del=10   ;/*XX*/}else{    del = 32;} sp(temp,"%c%s%c,%c"
,34,src1   [i],34,del);strcat  (otsrc,temp);  } strcat(   otsrc,","  "};%cvoid"  " di"  "sp(char nz[]){ "  "for( int i=0;"  " i<st"   "r'len(nz); i"  "++ ){putchar(nz[i]);DL;}} char temp[500];")
;sp(temp,          "%cvoid "          "mai"   "n(){sys"   "tem(%cc"   "lear%c);C "   "x"          " = %c"   "%s%c;",10,34,   34,34,x,        34);char            SS1[9][16]; int L1[] =
{10,3,12,12,10,6,4,11,12};for(int i=0;i<(sizeof(L1)/sizeof(L1[0]));i++){char tx[20] = "";for(int j=0;j<L1[i];j++){strcat(tx," ");}sp(SS1[i],"%c%s%c",34,tx,34);}
sp(temp,"%cC x2 = %c%s1s1c2s1%sc2s1s5c5s5n%s1s8c2s1s5%sc2s1s%s5c2s3c2%ss1c2s3c%s2s1c%s2s4s2%sc2s2c2s1c2s1c2%c;%c",10,34,SS1[0],SS1[1],SS1[2],SS1[3],SS1[4],SS1[5],SS1[6],SS1[7],SS1[8],34,10);
strcat(otsrc,temp);
disp(otsrc);

}


