#include <stdio.h>
#include <math.h>

int main (void)
{
    int whichOption; //Stores the user input for the option
    int areaFigure; //Stores the user input area of the figure
    //double formulaConstant;
    //double apothem; //Stores the apothem length
    //double aiFigure; //Stores the area of the internal figure


    printf("Enter desired option -> ");
    scanf("%d", &whichOption);

    printf("Enter area of figure -> ");
    scanf("%d", &areaFigure);

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nRadius/Apothem of figure with area given option 1/2: %f", (sqrt(areaFigure/M_PI)));
    printf("\nRadius/Apothem of figure with area given option 3: %f", (sqrt((4 * areaFigure * tan(M_PI/whichOption)) / whichOption)));


}
