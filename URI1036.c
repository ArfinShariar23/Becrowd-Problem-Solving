#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a ,&b ,&c);
    float result;

    if(((b * b) - 4 * a * c) < 0 || a == 0){
        printf("Impossivel calcular\n");
    }

    else{
        result = sqrt((b*b)-4*a*c);
        printf("R1 = %.5lf\nR2 = %.5lf\n",((-b+result)/(2*a)),((-b-result)/(2*a)));
    }

    return 0;
}


//IF FIRST CODE NOT RUN THEN RUN THIS SECOND ONE CODE

/*
include <stdio.h>
#include <math.h>


int main()
{
    float a,b,c,m,n,p;
    scanf("%f%f%f",&a,&b,&c);
    m=(b*b)-(4*a*c);
    if(m<0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        n=((-b) + sqrt(m))/(a+a);
        p=((-b) - sqrt(m))/(a+a);
        printf("R1 = %.5f\n",n);
        printf("R2 = %.5f\n",p);


    }
    return 0;
}*/
