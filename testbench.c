#include <stdio.h>
#include <stdlib.h>
#include "wprpgm.h"
#include "wprpgm.c"
#define EXPECT_EQ(a, b, c) {\
    if (a==b)\
        fprintf(c,"PASSED\n");\
    else \
       fprintf(c,"FAILED\n");\
}

FILE *fptr;

void TC1_1(void)
{
   fprintf(fptr,"Test case 1\t");
   int ret=wiper(1,50);
   int exp=1;
   EXPECT_EQ(exp,ret,fptr);

}

void TC1_2(void)
{
   fprintf(fptr,"Test case 2\t");
   int ret=wiper(0,50);
   int exp=0;
    EXPECT_EQ(exp,ret,fptr);

}

void TC1_3(void)
{
   fprintf(fptr,"Test case 3\t");
   int ret=wiper(1,600);
   int exp=75;
    EXPECT_EQ(exp,ret,fptr);

}

void TC1_4(void)
{
   fprintf(fptr,"Test case 4\t");
   int ret=wiper(1,300);
   int exp=50;
    EXPECT_EQ(exp,ret,fptr);

}

void TC1_5(void)
{
   fprintf(fptr,"Test case 5\t");
   int ret=wiper(1,150);
   int exp=25;
    EXPECT_EQ(exp,ret,fptr);

}

int main(void)
{
//UnityBegin();
//RUN_TEST(TC1_1);
fptr=fopen("log.txt","w");
TC1_1();
TC1_2();
TC1_3();
TC1_4();
TC1_5();
fclose(fptr);
//printf("pass");
return 0;
//return UnityEnd();
}
