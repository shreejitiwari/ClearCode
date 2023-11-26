// Write a program to receive Cartesian co-ordinates (x, y) of a point
//  and convert them into polar co-ordinates (r,).

// Hint: r = sqrt (x ² + y ² ) and = tan -1 (y / x)

#include<stdio.h>
#include<math.h>

int main()
{
    float x,y;
    float r,theta;
    printf("Enter Cartesian coordinates (x,y) : ");
    scanf("%f%f", &x,&y);

    r = sqrt(x*x + y*y);
    theta = atan(y/x)*(180/M_PI);


    printf("Polar Co-ordinates (r,theta) : (%.2f,%.2f)", r,theta);


    return 0;
}