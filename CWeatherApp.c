#include <stdio.h>

int main()
{
    int temperature;
    printf("Enter the temperature in Centigrade: ");
    scanf("%d", &temperature);

    if (temperature < 10)
    {
        printf("It's freezing right Keep warm\n");
    }
    else if (temperature >= 10 && temperature < 20)
    {
        printf("its %d, very cold.\n");
    }
    else if (temperature >= 20 && temperature < 30)
    {
        printf("It's %d ,favourable weather to play about.\n");
    }
    else if (temperature >= 30 && temperature < 40)
    {
        printf("It's %d, hot weather.\n", temperature);
    }
    else
    {
        printf("Invalid/Abnormal  Temperatures Observed.\n", temperature);
    }
    return 0;
}