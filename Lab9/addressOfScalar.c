#include<stdio.h>

int main()

{

                int intvar;

                char charvar;

                printf("Adress of charvar :: %p \n",(char*)(&charvar));

                printf("Adress of charvar-1:: %p \n",(char*)(&charvar -1));

                printf("Adress of charvar+1:: %p \n",(char*)(&charvar +1));

                printf("Adress of intvar   :: %p \n",(char*)(&intvar));

                printf("Adress of intvar-1 :: %p \n",(char*)(&intvar -1));

                printf("Adress of intvar+1 :: %p \n",(char*)(&intvar +1));

                return 0;

}
