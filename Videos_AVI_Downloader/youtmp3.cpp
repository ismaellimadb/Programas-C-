#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>

 
int main()
{  char a[10000];
   char z[10000];
   printf("Insira a url\n");
   gets(a);
   printf("\nInsira o nome da musica\n");
   gets(z);
  int ctn;   
  for(ctn=1;ctn<2;ctn++){
  char append[10000];
  char path[10000] = "C:\\Downloads\\Others\\o";
  char path2[10000] = ".txt";
  char x[10000] = "\"";
  sprintf(append,"%d",ctn);
  strcat(path,append);
  strcat(path,path2);
  
   char b[10000] = "youtube-dl -f 140 -ci " ,ctv[10000] = " --get-url \"", bi[10000] = "\""" > \"",
   d[10000] = "ffmpeg -i \"", e[10000] = "\" -vn -ar 44100 -ac 2 -ab 192k -f mp3 \"C:\\Downloads\\",f[10000] = ".mp3\"\n",g[10000];
  
  strcat(b,ctv);
  strcat(b,a);

  strcat(bi,path);
  strcat(b,bi);
  strcat(b,x);

  printf("\n%s\n",b);
  system(b);

  FILE *fp;
  int ch;
  char txt[10000];
  int len = 0;
  int fgetc ( FILE * stream );
  
  fp=fopen(path,"r");
   ch=fgetc(fp);
while(ch != EOF && ch!='\n')
  {
    txt[len]=ch;
    len++;
    ch=fgetc(fp);
  }txt[len]='\0';
   
   puts(txt);
   strcat(d,txt);
   strcat(e,z);
   strcat(d,e);
   strcat(e,f);
   strcat(d,f);
   printf("\n\n%s\n\n",d);
   system(d);
}
   return 0;
}   

