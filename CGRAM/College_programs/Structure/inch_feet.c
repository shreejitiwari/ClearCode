#include<stdio.h>
#include<stdlib.h>


struct inch_feet
{
    int feet;
    int inch;
};

int main()
{
    struct inch_feet result = {0};
    int n,i;
    printf("Enter how many values you want to enter : ");
    scanf("%d", &n);

    struct inch_feet *dist_arr = calloc(n,sizeof(int));

    for (i=0;i<n; i++)
    {
        printf("\n\nDISTANCE %d\n", i+1);
        printf("Enter feet : ");
        scanf("%d",&dist_arr[i].feet);
        printf("Enter inches : ");
        scanf("%d", &dist_arr[i].inch);

        result.feet += dist_arr[i].feet;
        result.inch += dist_arr[i].inch;

        // printf("af = %d, ai = %d", dist_arr[i].feet, dist_arr[i].inch);
        // printf("\trf = %d, ri = %d", result.feet, result.inch);

    }

    result.feet += (result.inch)/12;
    result.inch = result.inch%12 ;

    printf("\n\nSum of Feet = %d\nSum of Inches = %d", result.feet, result.inch);

}