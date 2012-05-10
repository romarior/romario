#include<stdlib.h>
#include<stdio.h>
#define __MEMORY_H__
#define MEM_SIZE 1024


class memory{
        private:
            int m_array[MEM_SIZE];
        public:
          int read(int address)
           {
           return m_array[address];

           }
           void write(int address,int  data)
           {
            m_array[address]=data;

             }

             
};



