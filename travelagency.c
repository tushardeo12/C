#include <stdio.h>
#include <string.h>
struct travelagency
{
    char name[30];
    char way[50];
    int DrivingLIcence_No;
    float kms;
    
};

int main()

{
    struct travelagency driver[3];

    for (int i = 1; i <= 3; i++)
    {
        printf("taking info of Drivers %d\n", i);
        
        printf("enter your name -");
        scanf("%s", &driver[i].name);
        printf("enter your daily route -");
        scanf("%s", &driver[i].way);
        printf("enter your Driving Licence number -");
        scanf("%d", &driver[i].DrivingLIcence_No);
        printf("enter the number of kms of driving experince -");
        scanf("%f", &driver[i].kms);
        printf("\n\n\n");
    }

    for (int i = 1; i <= 3; i++)

    {
        printf("printing infromation of driver %d\n", i);
        
        printf("The name of the driver is -%s\n", driver[i].name);
        printf("The daily route of the driver is -%s\n", driver[i].way);
        printf("The DL no of te driver is -%d\n", driver[i].DrivingLIcence_No);
        printf("The kms driving experience of the driver is -%f\n", driver[i].kms);
    }

    return 0;
}