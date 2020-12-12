// -------- START --------
// Quine in C, took me half a day just to implement. Displays my animated name and it's own source code. In short, a complex #uselesscode
// Kim Clarence Penaflor Github: https://github.com/Clientrace  Took me hours to made this art, oh well. #nerd    ¯\_(ツ)_/¯   
#include<stdio.h>  
#include<unistd.h>
#include<string.h> 
#include<stdlib.h> 
#define p printf   
#define C char*    
#define DL fflush(stdout);usleep(500)
#define sp sprintf
C src1[] = {"%c","// -------- START --------%c", "// Quine in C, took me half a day just to implement. Displays my animated name and it's own source code. In short, a complex #u",
"selesscode%c","// Kim Clarence Penaflor Github: https://github.com/Clientrace  Took me hours to made this art, oh well. #nerd    ¯\\_(ツ)_/¯%c","#include<stdio.h> %c#i",
"nclude<unistd.h>%c","#include<sring.h>%c","#include<stdlib.h>%c","#include<stdlib.h>%c","#define p printf%c","#define C char*%c","#define DL fflush(stdout);usleep(5000) %c#d",
"efine sp sprintf%c","C src1[] = {",}; void disp(char nz[]){ for( int i=0; i<strlen(nz); i++){putchar(nz[i]);DL;}}char temp[500];
void main(){system("clear");C x = "s9c6s1c2s1s6c5s1s1c6s1s1c7s1c3s1s3c2s1s1c6s1c7s3n1s8c2s6c2s1s5c2s3c2s1c2s3c2s1c2s6c4s1s2c2s1c2s6c2s8n1s8c2s1s5c2s1s5c7s1c6s2c5s1s2c2s1c2s";
C x2 = ""          "1s1c2s1"   "c2s1s5c5s5n"            "1s8c2s1s5"            "c2s1s"          "5c2s3c2"      "s1c2s3c"    "2s1c"           "2s4s2"            "c2s2c2s1c2s1c2";
C x3 = ""  "s1s5c2s8n1s9c6s"   "1c7s1c2s1s2"  "c2s1c2"   "s1s2c2s1c"  "7s1c2s1s" "1s1c"  "4s2c6s1c7s3n1";   char   n[700];   strcat   (n,x);strcat(n,  x2);strcat(n,x3);
C bar= ""  "\u2588";for(int    i=0;i<strlen   (n)-2;i+=  2){int/**/  l=atoi(&n[  i+1])  ;for(int j=0;j<l   ;j++){   if(n[   i]=='s'  ){p("=");}if(n   [i]=='c'){p("%s",bar);}
if(n[i]==  'n'){p("%c",/**/    10);}DL; } }               char /**/             otsrc            [50000]   ;for(int         i=0;i<   15;i++){sp(/**/            temp,src1[i],10);
strcat(    otsrc,temp);}for(   int i=0;i<15;  i++){char  temp[500];  int del;  if(src1  [i][strlen(src1[   i])-2] == '#')   {del=10   ;/*XX*/}else{    del = 32;}sp(temp,"%c%s%c,%c",34,
src1[i],    34,del); strcat    (otsrc,temp);  } strcat(   otsrc,","  "};%cvoid"  " di"  "sp(char nz[]){ "  "for( int i=0;"  " i<st"   "r'len(nz); i"  "++){putchar(nz[i]);DL;}}char temp[500];")
;sp(temp,          "%cvoid "          "mai"   "n(){sys"   "tem(%cc"   "lear%c);C "   "x"          " = %c"   "%s%c;",10,34,   34,34,           x,4);              char SS1[9][16]; int L1[] =
{10,3,12,12,10,6,4,11,12};strcat(otsrc,temp);for(int i=0;i<(sizeof(L1)/sizeof(L1[0]));i++){char tx[20] = "";for(int j=0;j<L1[i];j++){strcat(tx," ");}sp(SS1[i],"%c%s%c",34,tx,34);}
C AL1="%cC x2 = %c%s1s1c2s1%sc2s1s5c5s5n%s1s8c2s1s5%sc2s1s%s5c2s3c2%ss1c2s3c%s2s1c%s2s4s2%sc2s2c2s1c2s1c2%c;";sp(temp,AL1,10,34,SS1[0],SS1[1],SS1[2],SS1[3],SS1[4],SS1[5],SS1[6],SS1[7],SS1[8],34);
C AL2="%cC x3 = %c%c%s%cs1s5c2s8n1s9c6s%c%s%c1c7s1c2s1s2%c%s%cc2s1c2%c%s%cs1s2c2s1c%c%s%c7s1c2s1s%c%s%c1s1c%c%s%c4s2c6s1c7s3n1%c;%schar%sn[700];%sstrcat%s(n,x);strcat(n,%sx2);strcat(n,x3);";
C AL3="%cC bar= %c%c  %c%cu2588%c;for(int%si=0;i<strlen%s(n)-2;i+=  2){int/**/  l=atoi(&n[  i+1])  ;for(int j=0;j<l%s;j++){%sif(n[%si]=='s'  ){p(%c=%c);}if(n   [i]=='c'){p(%c%%s%c,bar);}";
C AL4="%cif(n[i]==  'n'){p(%c%%c%c,/**/%s10);}DL; } }%schar /**/%sotsrc%s[50000]%s;for(int%si=0;i<%s15;i++){sp(/**/%stemp,src1[i],10);";strcat(otsrc,temp);char SS2[12][16];int L2[]={2,3,2,3,2,1,
2,3,3,3,3,3,2};for(int i=0;i<(sizeof(L2)/sizeof(L2[0]));i++){char tx[20]="";for(int j=0;j<L2[i];j++){strcat(tx," ");}sp(SS2[i],"%s",tx);}sp(temp,AL2,10,34,34,SS2[0],34,34,SS2[1],34,34,SS2[2],34,34,
SS2[3],34,34,SS2[4],34,34,SS2[5],34,34,SS2[6],34,34,SS2[7],SS2[8],SS2[9],SS2[10],SS2[11]);strcat(otsrc,temp);char SS3[12][16];int L3[] = {4,3,3,3,3};for(int i=0;i<(sizeof(L3)/sizeof(L3[0]));i++)
{char tx[20]="";for(int j=0;j<L3[i];j++){strcat(tx," ");}sp(SS3[i],"%s",tx);}sp(temp,AL3,10,34,34,34,92,34,SS3[0],SS3[1],SS3[2],SS3[3],SS3[4],34,34,34,34);strcat(otsrc,temp);char SS4[8][16];
int L4[]={4,15,13,12,3,9,3,12};for(int i=0;i<(sizeof(L4)/sizeof(L4[0]));i++){char tx[20]="";for(int j=0;j<L4[i];j++){strcat(tx," ");}sp(SS4[i],"%s",tx);}sp(temp,AL4,10,34,34,SS4[0],
SS4[1],SS4[2],SS4[3],SS4[4],SS4[5],SS4[6],SS4[7]);strcat(otsrc,temp);int L5[]={4,3,3,3,3,4};char SS5[6][16];for(int i=0;i<(sizeof(L5)/sizeof(L5[0]));i++){char tx[20]="";for(int j=0;j<L5[i];j++){strcat(tx," ");}
sp(SS5[i],"%s",tx);}C AL5 ="%cstrcat(%sotsrc,temp);}for(%sint i=0;i<15;  i++){char  temp[500];  int del;  if(src1  [i][strlen(src1[%si])-2] == '#')%s{del=10%s;/*XX*/}else{%sdel = 32;}sp(temp,%c%%s%%c,%c,34,";
sp(temp,AL5,10,SS5[0],SS5[1],SS5[2],SS5[3],SS5[4],SS5[5],34,34);char L6[]={3,2,2,3,2,2,2,2,3,2};char SS6[9][16];for(int i=0;i<(sizeof(L6)/sizeof(L6[0]));i++){char tx[20]="";for(int j=0;j<L6[i];j++){strcat(tx,
" ");}sp(SS6[i],"%s",tx);}C AL6="%c,src1[i],%s34,del); strcat%s (otsrc,temp);%s} strcat(%sotsrc,%c,%c%s%c};%%cvoid%c%s%c di%c%s%cs";sp(temp,AL6,10,SS6[0],SS6[1],SS6[2],SS6[3],34,34,SS6[4],34,34,SS6[5],
34,34,SS6[6],34);strcat(otsrc,temp); C AL7="p(char nz[]){ %c%s%cfor( int i=0;%c  %c i<st%c%s%cr'len(nz); i%c%s%c++){putchar(nz[i]);DL;}}char temp[500];%c)"; sp(temp,AL7,34,SS6[7],34,34,34,34,SS6[8],34,
34,SS6[9],34,34);strcat(otsrc,temp);char L8[] = {10,10,3,3,3,3,10,3,3,11,14}; char SS8[11][16];C AL8="%c;sp(temp,%s%%c%cvoid %c%s%cmai%c%s%cn(){sys%c%s%ctem(%%cc%c%s%clear%%c);C %c%s%cx%c%s%c";
for(int i=0;i<(sizeof(L8)/sizeof(L8[0]));i++){char tx[20]="";for(int j=0;j<L8[i];j++){strcat(tx," ");}sp(SS8[i],"%s",tx);}C AL9=" = %%c%c%s%c%%s%%c;%c,10,34,%s34,34,%sx,4);%schar SS1[9][16]; int L1[] =";
sp(temp,AL8,10,SS8[0],34,34,SS8[1],34,34,SS8[2],34,34,SS8[3],34,34,SS8[4],34,34,SS8[5],34,34,SS8[6],34);strcat(otsrc,temp);sp(temp,AL9,34,SS8[7],34,34,SS8[8],SS8[9],SS8[10]);
C AL10 = "%c{10,3,12,12,10,6,4,11,12};strcat(otsrc,temp);for(int i=0;i<(sizeof(L1)/sizeof(L1[0]));i++){char tx[20] = %c%c;for(int j=0;j<L1[i];j++){strcat(tx,%c %c);}sp(SS1[i],%c%%c%%s%%c%c,34,tx,34);}";
strcat(otsrc,temp);sp(temp,AL10,10,34,34,34,34,34,34);sp(temp,"%cC AL1=%c%s%csp(temp,AL1,10,34,SS1[0],SS1[1],SS1[2],SS1[3],SS1[4],SS1[5],SS1[6],SS1[7],SS1[8],34);",10,34,AL1,34);sp(temp,"%cC AL2=%c%s%c;",34,AL2,34)
strcat(otsrc,temp);


strcat(otsrc,temp);
disp(otsrc);

}


// for(int i=0;i<(sizeof(L2)/sizeof(L2[0]));i++)
// {
// 	char tx[20]="";
// 	for(int j=0;j<L2[i];j++){
// 		strcat(tx," ");
// 	}
// 	sp(SS2[i],"%s",tx);
// }