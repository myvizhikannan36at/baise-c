#include <stdio.h>
#include <math.h>
int main() {
    float rad = 0.0;
    float area = 0.0;
    double surface = 0.0;
    double volume = 0.0;
    const double PI = 3.14;

    printf("Enter the radius : ");
    scanf("%f",&rad);

    area = PI*pow(rad,2);
    printf("Area = %.2f\n",area);

    surface = 4*PI*pow(rad,3);
    printf("surface area = %.2lf\n",surface);

    volume = (4.0/3.0)*PI*pow(rad,2);
    printf("volume = %.2lf\n",volume);
    
    return 0;
}