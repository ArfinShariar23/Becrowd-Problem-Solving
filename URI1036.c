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
