#include <stdio.h>

enum Concession
{
    Not_Student=0,
    Student=1
};

struct Journey
{
    int destination;
    int baseFare;
    float concession;
    float finalFare;
};

int main()
{
    struct Journey j;
    enum Concession status;

    int i,choice;

    char stops[10][30] =
    {
        "Prem Nagar",
        "Ballupur",
        "Clock Tower",
        "Railway Station",
        "ISBT",
        "Rajpur Road",
        "Pacific Mall",
        "Sahastradhara",
        "Raipur",
        "Mussoorie Diversion"
    };

    int fare[10] =
    {
        20,30,40,45,50,
        50,55,65,70,60
    };

    printf("=========================================\n");
    printf("      CAMPUS SHUTTLE FARE CALCULATOR\n");
    printf("=========================================\n");

    printf("\nBoarding Point: UPES\n");

    printf("\nAvailable Destinations:\n\n");

    for(i=0;i<10;i++)
    {
        printf("%d. %s - Rs. %d\n",
               i+1,stops[i],fare[i]);
    }

    printf("\nEnter destination number (1-10): ");
    scanf("%d",&j.destination);

    if(j.destination<1 || j.destination>10)
    {
        printf("\nInvalid destination!\n");
        return 0;
    }

    j.destination=j.destination-1;

    j.baseFare=fare[j.destination];

    printf("\nAre you a student?\n");
    printf("1. Student\n");
    printf("0. Not Student\n");

    printf("Enter your choice (1 or 0): ");
    scanf("%d",&choice);

    status=choice;

    if(status==Student)
    {
        j.concession=j.baseFare*0.20;
    }
    else if(status==Not_Student)
    {
        j.concession=0;
    }
    else
    {
        printf("\nInvalid student status!\n");
        return 0;
    }

    j.finalFare=j.baseFare-j.concession;


    printf("\n=========================================\n");
    printf("             JOURNEY DETAILS\n");
    printf("=========================================\n");

    printf("Boarding Point : UPES\n");
    printf("Destination    : %s\n", stops[j.destination]);
    printf("Base Fare      : Rs. %d\n", j.baseFare);
    printf("Concession     : Rs. %.2f\n", j.concession);
    printf("Final Fare     : Rs. %.2f\n", j.finalFare);

    printf("=========================================\n");

    return 0;
}