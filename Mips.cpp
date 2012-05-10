#include<stdio.h>
#include<stdlib.h>
#include"memory.h"


class Mips{
memory p;

public:
    int IR;
    int pc;

public:
    void fetch( ){
        for(pc=0;pc<3;pc++)//icrementa pc
        {
            IR+=p.read(pc);//passa para o IR a instruçao de 16bits
            pc++;
        }
                }


};
int main(){
Mips F;
F.IR=0;
F.fetch();
printf("funcionda%d",F.IR);
system("pause");
}





