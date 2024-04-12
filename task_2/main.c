#include<stdio.h>
#include<math.h>

int main(){

    double radius = 0.0;
    scanf("%lf", &radius);

    if(radius < 0) {
        printf("n/a");
        return 1;
    }

    double m = round(21500 * ((4.0 / 3) * M_PI * pow(radius, 3)));

    printf("%.0lf", m);

    return 0;
}