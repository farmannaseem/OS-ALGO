#include<stdio.h>

void fcfs(int burst_time[],int n)
{
    int completion_times[n];
    int waiting_times[n];
    int turnaround_times[n];
    int current_time = 0;
    for(int i=0;i<n;i++)
    {
        current_time += burst_time[i];
        completion_times[i] = current_time;
        waiting_times[i] = current_time - burst_time[i];
        turnaround_times[i] = current_time;
    }
    printf("Process id\tBurst time\tCompletion time\tWaiting time\tTurnaround time\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d\t%d\t%d\t%d\t%d\n",i+1,burst_time[i],completion_times[i],waiting_times[i],turnaround_times[i]);

    }
}
int main()
{
    int n;
    printf("enter a number of process:");
    scanf("%d",&n);
    int burst_time[n];
    for(int i=0;i<n;i++)
    {
    printf("enter a burst time for %d:",i+1);
    scanf("%d",&burst_time[i]);

    }

    fcfs(burst_time,n);
    return 0;

}
