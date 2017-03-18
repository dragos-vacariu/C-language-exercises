#include <stdio.h>

void ConvDaysToYears();
void ConvWeeksToDays();
void ConvYearsToDays();
void ConvYearsToWeeks();
void ConvWeeksToYears();
void ConvDaysToWeeks();

int main()
{
    int choice;
    printf("MENU:\n");
    printf("Press 1 to convert Days into Years: \n");
    printf("Press 2 to convert Years into Days: \n");
    printf("Press 3 to convert Days into Weeks: \n");
    printf("Press 4 to convert Weeks into Days \n");
    printf("Press 5 to convert Weeks into Years \n");
    printf("Press 6 to convert Years into Weeks \n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:{ConvDaysToYears(); break;}
        case 2:{ConvYearsToDays(); break;}
        case 3:{ConvDaysToWeeks(); break;}
        case 4:{ConvWeeksToDays(); break;}
        case 5:{ConvWeeksToYears(); break;}
        case 6:{ConvYearsToWeeks(); break;}
        default:{printf("Wrong value!\n"); break;}
    }
    return 0;
}
void ConvDaysToYears()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    printf("%d days is ...aprox... %d years\n", days, days/365);
}
void ConvDaysToWeeks()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    printf("%d days is ...aprox... %d weeks\n", days, days/7);
}
void ConvWeeksToDays()
{
    int weeks;
    printf("Enter the number of weeks: ");
    scanf("%d", &weeks);
    printf("%d weeks is ...aprox... %d days\n", weeks, weeks*7);
}
void ConvYearsToDays()
{
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("%d years is ...aprox... %d days\n", years, years*365);
}
void ConvYearsToWeeks()
{
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("%d years is ...aprox... %d weeks\n", years, years*54);
}
void ConvWeeksToYears()
{
    int weeks;
    printf("Enter the number of weeks: ");
    scanf("%d", &weeks);
    printf("%d weeks is ...aprox... %d years\n", weeks, weeks/54);
}
