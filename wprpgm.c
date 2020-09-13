#include <stdio.h>
#include <stdlib.h>
#include "wprpgm.h"

int wiper(int ES, int RI)

{
//int i;
//for( i=0;i<2;i++)
{
    if(ES==1)
        {
        //for( i=0;i<10;i++)
        {
                if(RI<100)
                {
                    return 1;
                }

                else if(RI>=100&&RI<=250)
                {

                    return 25;
                }
            else if(RI >=251 && RI <=500)
                {

                    return 50;

                }
            else if(RI>500)
                {
                    return 75;
                }
            }

    }
 else
 {
     return 0;
 }
}

}

