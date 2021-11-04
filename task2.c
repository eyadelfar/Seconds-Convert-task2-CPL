#include <stdio.h>
int main(){
    int seconds,hours,mins,sec;
    printf("Enter the number of seconds you want to convert: ");
    scanf("%d",&seconds);
    hours=seconds/3600; // 50000/3600 = 13.89 = in int 13
    mins=(seconds%3600)/60; // 50000%3600 = 3200 , 3200/60 = 53.3333 = in int 53
    sec=(seconds%3600)%60; // 50000%3600 = 3200 ,3200%60 = 20

    // 13 h , 53 min , 20 sec
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",hours,mins,sec);

}