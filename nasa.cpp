#include <iostream>
#include <string>
#include <sstream>
#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

 int pc=0,mbr=0,rem=0,ir=0,e_mbr=4,rdm;//declaraçao de 
  char cd[45],v[34],a_mbr[45];
  memory s;
void fetch() {
     int i=0, b=0;
     char m[15],a_ir[5];
     FILE *arq;
     arq=fopen("eva2.txt","r");
     fgets(v,65,arq);
     while(i<32)
     {
           if(v[i]=='e')
           {
          i++;
           while(b<32)
           {
                      cd[b]=v[i];
                      i++;
                      b++;
                      }             
                        break;
          }
          
          a_mbr[i]=v[i];
          i++;
          }
          int bt=atoi(a_mbr);
          int g=atoi(cd);
          s.write(0,g);
          s.write(1,bt);
         
          rem=pc;
          rdm=s.read(pc);
          ir=rdm;
          pc++;
          printf("%i",rdm);
          system("pause");
}
int main()
{
   fetch();
    }
