#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args,char **argv)
 {
    char * f=argv[1];
   float s=atof(f);
 if(s>=1.0){
   printf("%f" ,s);
  }
 else{ 
      printf("invalid");}
   return 0;
  }
