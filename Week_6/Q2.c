//Q_2
#include<stdio.h>
#include"STD_types.h"
typedef struct Time{
	u16 hours;
	u16 minutes;
	u16 seconds;
} st_times;
st_times s1;
st_times s2;
st_times diff;
int main()
{
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &s1.hours,&s1.minutes, &s1.seconds);

    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &s2.hours,&s2.minutes, &s2.seconds);

    if(s1.seconds > s2.seconds)
    {
        s2.seconds += 60;
        --s2.minutes;
    }

    if(s1.minutes > s2.minutes)
    {
        s2.minutes += 60;
        --s2.hours;
    }

    diff.seconds = s2.seconds - s1.seconds;
    diff.minutes = s2.minutes - s1.minutes;
    diff.hours = s2.hours - s1.hours;

    printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
    return 0;
}