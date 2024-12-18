#include <math.h>
#include <stdio.h>

// Constants
const double PI = 3.142;

// Calculation of area of a circle
int Circle()
{

    double radius;

    printf("\nEnter the radius of the circle: ");

    scanf("%lf", &radius);

    double answer = (PI * radius * radius);

    printf("\n\033[38;5;112mAnswer: %.2f\033[0m\n", answer);
};

// calcaulation of surface area of a sphere
int SurfaceAreaOfSphere()
{
    double radius;

    printf("\nEnter the radius of the sphere: ");

    scanf("%lf", &radius);

    double answer = (4 * PI * radius * radius);

    printf("\n\033[38;5;112mAnswer: %.2f\033[0m\n", answer);
};

// Calculation of displacement of a projectile
int DisplacementOfProjectile()
{
    double u, t, a;

    // Value to be provided by the user
    char initialSpeed[] = "Initial velocity (Starting speed u): ";
    char timeElapsed[] = "Time elapsed (t): ";
    char acceleration[] = "Acceleration (Rate of change of velocity a): ";

    printf("\nEnter the following values\n");

    // Getting data from user and asssigning them to resective variables
    printf("\n%s", initialSpeed);
    scanf("%lf", &u);

    printf("\n%s", timeElapsed);
    scanf("%lf", &t);

    printf("\n%s", acceleration);
    scanf("%lf", &a);

    double answer = (u * t + 0.5 * a * t * t);

    printf("\n\033[38;5;112mAnswer: %.2f\033[0m\n", answer);
};

int RealRootsOfQuadraticEquation()
{
    printf("\nEnter the following values of the quadratic equation:\n");

    double a, b, c;

    // Getting data from user and asssigning them to resective variables

    printf("\na: ");
    scanf("%lf", &a);

    printf("\nb: ");
    scanf("%lf", &b);

    printf("\nc: ");
    scanf("%lf", &c);

    double root1, root2, sqroot, solved;

    root1 = ((-b + (sqrt(b * b - 4 * a * c))) / 2);

    root2 = ((-b - (sqrt(b * b - 4 * a * c))) / 2);

    printf("\n\033[38;5;112mAnswers:\n\nX = %.2f\nX = %.2f\033[0m\n", root1, root2);
};

int main()
{
    // Title of program
    const char title[] = "\033[1;33m\033[4mCALCULATE:\033[0m";

    // Displaying the title
    printf("\n%s\n", title);

    // Available options
    const char option1[] = "Area of a circle.";
    const char option2[] = "Surface area of a sphere.";
    const char option3[] = "Displacement of a projectile (S = ut+1/2at^2).";
    const char option4[] = "Real roots of a quadratic equation.";

    // Displaying avaliable options
    printf("\n1. %s\n2. %s\n3. %s\n4. %s\n", option1, option2, option3, option4);

    // Getting selected option from  user
    int selected; // Varable for holding slected option

    printf("\n\033[38;5;188mSELECT OPTION: ");

    scanf("%d\033[0m\n", &selected);

    switch (selected)
    {
    case 1:
        printf("\n\033[36m\033[1m\033[4m%s\033[0m\n", option1);
        Circle();
        break;
    case 2:
        printf("\n\033[36m\033[1m\033[4m%s\033[0m\n", option2);
        SurfaceAreaOfSphere();
        break;
    case 3:
        printf("\n\033[36m\033[1m\033[4m%s\033[0m\n", option3);
        DisplacementOfProjectile();
        break;
    case 4:
        printf("\n\033[36m\033[1m\033[4m%s\033[0m\n", option4);
        RealRootsOfQuadraticEquation();
        break;

    default:
        printf("\n\033[31mInvalid input\033[0m\n");
        break;
    }

    return 0;
}
