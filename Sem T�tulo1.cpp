#include <iostream>
#include <string>
#include <sstream>
#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

using namespace std;
 int pc=0,mbr=0,rem=0,ir=0,e_mbr=4;//declaraçao de 
  memory s;
void fetch() {
     int i=0, b=4;
     char v[13],m[15],a_mbr[15],a_ir[5];
     FILE *arq,*rt;
     arq=fopen("eva.txt","r");
     rt=fopen("eva2.txt","w");
     fgets(v,10,arq);
     stringstream ss(v); //Temos agora uma string stream para processar a string "123"
     int  po = 0;
     ss >> po; //Extrai o inteiro da string stream para a variável "o_meu_inteiro"
     int long y=po;  
     s.write(pc,po);
     itoa(y,m,10);
     
     while(i<5)
     {
               
          a_mbr[i]=m[b];
          if(i<4)
            a_ir[i]=m[i];     
                 
          i++;      
          b++;
     }
   mbr=atoi(a_mbr);
   ir=atoi(a_ir);
   s.write(e_mbr,ir);
    rem=pc;
    e_mbr++;
    pc++;

   

}


int main(void)
{
    fetch();
    printf("\n\n int %d",s.read(0));
    printf("\n\n add%d",pc);
    printf("\n\n mbr%d",s.read(4));
    system("pause");
    }
