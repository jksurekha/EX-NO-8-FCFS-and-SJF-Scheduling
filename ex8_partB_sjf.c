/*
 * EX NO 8 - Part B: SJF (Shortest Job First) Scheduling
 * Domain: Social media CPU scheduling
 * Compile: gcc ex8_partB_sjf.c -o sjf
 * Run    : ./sjf
 */
#include <stdio.h>

int main()
{
    char *app[] = {"Instagram", "Whatsapp", "Youtube"};
    int bt[] = {5, 2, 4}, i, j, t;

    /* sort applications by burst time (shortest first) */
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (bt[i] > bt[j]) {
                t = bt[i]; bt[i] = bt[j]; bt[j] = t;
                char *p = app[i];
                app[i] = app[j];
                app[j] = p;
            }
        }
    }

    printf("SJF CPU scheduling\n");
    int wt = 0;
    for (i = 0; i < 3; i++)
    {
        printf("%s Burst = %d Waiting = %d\n", app[i], bt[i], wt);
        wt = wt + bt[i];
    }
    return 0;
}
