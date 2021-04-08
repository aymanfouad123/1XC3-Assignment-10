//Ayman Fouad Shaik Mohammad 
#include <stdio.h>

double squarearea (double side) {return side*side;}
double sphvolume (double rad) {return 1.333333333*3.141592653*rad*rad*rad;}
double sareacube (double side) {return 6*side*side;}
int main()
{   
    int num = 0;
    double side;
    double rad;
    do 
    {
        printf("\n1.Compute the area of a square\n2.Compute the volume of a sphere\n3.Compute the surface area of a cube\n4.Quit\n");
        printf("Enter an option - ");
        scanf("%d",&num);
        switch (num)
        {
        case (1):
        printf("Enter the side length (cm) - ");
        scanf("%lf",&side);
        printf("Area of the square - %0.02lf (cm)\n ",squarearea(side));
        break;
        case (2):
        printf("Enter the radius (cm) - ");
        scanf("%lf",&rad);
        printf("Volume of the sphere - %0.02lf (cm)\n ",sphvolume(rad));
        break;
        case (3):
        printf("Enter the side of the cube (cm) - ");
        scanf("%lf",&side);
        printf("Surface area of the cube is - %0.02lf (cm)\n", sareacube(side));
        break;
        }
        
    } while (num != 4);
    printf("\nGoodbye!\n");
    

}
