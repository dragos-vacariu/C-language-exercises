#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
time_t time(time_t *timer)
Calculates the current calender time and encodes it into time_t format.

char *ctime(const time_t *timer)
Returns a string representing the localtime based on the argument timer.
*/
int main(void)
{
    time_t cur_time; //This is a type suitable for storing the calendar time.
    char* cur_t_string; //creating a pointer to a char
    cur_time = time(NULL); //Filling up the variable cur_time with the current time.
    /*
    The call to time(NULL) returns the current calendar time (seconds since Jan 1, 1970).
    */
    if (cur_time == ((time_t)-1))
    /*Current calendar time encoded as time_t object on success, (time_t)(-1) on error. If the argument is not NULL,
    the return value is equal to the value stored in the object pointed to by the argument. */
    {
    //Adding void in front of a function that returns a value tell the compiler that you don't need that returned value
    //from that function.
        (void) fprintf(stderr, "Failure to get the current time.\n");
        scanf("%d");
        exit(EXIT_FAILURE);
    }
    cur_t_string = ctime(&cur_time); //converts from the number of seconds passed from 1970 until now  into local time
    //format. Definition of ctime is above.
    if (cur_t_string == NULL) //if this is NULL it means that the conversion has failed.
    {
    //Adding void in front of a function that returns a value tell the compiler that you don't need that returned value
    //from that function.
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        scanf("%d");
        exit(EXIT_FAILURE);
    }
    //Adding void in front of a function that returns a value tell the compiler that you don't need that returned value
    //from that function.
    (void) printf("The Current time is : %s \n", cur_t_string);
    scanf("%d");
    return 0;
}
