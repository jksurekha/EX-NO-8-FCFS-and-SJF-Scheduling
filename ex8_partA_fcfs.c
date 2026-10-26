/*
 * EX NO 8 - Part A: FCFS (First Come First Serve) Scheduling
 * Domain: Social media CPU scheduling
 * Compile: gcc ex8_partA_fcfs.c -o fcfs
 * Run    : ./fcfs
 */
#include <stdio.h>

int main()
{
    char *app[] = {"Instagram", "Whatsapp", "Youtube"};
    int burst[] = {2, 4, 6};
    int waiting[3], turnaround[3];
    int n = 3;

    waiting[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting[i] = waiting[i - 1] + burst[i - 1];
    }

    printf("FCFS CPU scheduling\n");
    printf("App\t\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++)
    {
        turnaround[i] = waiting[i] + burst[i];
        printf("%-10s\t%d\t%d\t%d\n",
               app[i], burst[i], waiting[i], turnaround[i]);
    }
    return 0;
}
