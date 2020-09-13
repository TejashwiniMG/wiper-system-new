#include<stdio.h>
#include<stdlib.h>

int w()
{
int rain_intensity,engine_state;
printf("enter the engine state ON(1) or OFF(0)\n");
scanf("%d",&engine_state);
printf("rain intensity value\n");
scanf("%d",&rain_intensity);

if(engine_state==1)
{
    if(rain_intensity<100)
       {
        return 1;
       }
else if((rain_intensity>=100) && (rain_intensity<=250))
{
       return 25;
}
else if((rain_intensity>=251) && (rain_intensity<=500))
{
    return 50;
}

else if((rain_intensity>500))
{
    return 75;
}

}


}
