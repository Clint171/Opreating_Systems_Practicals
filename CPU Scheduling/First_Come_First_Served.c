#include <stdio.h>

void main() {
  int n, i, j;
  int pid[10], bt[10], wt[10], tat[10];

  printf("Enter the number of processes: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter the process ID of process %d: ", i + 1);
    scanf("%d", &pid[i]);
    printf("Enter the burst time of process %d: ", i + 1);
    scanf("%d", &bt[i]);
  }

  wt[0] = 0;
  for (i = 1; i < n; i++) {
    wt[i] = wt[i - 1] + bt[i - 1];
  }

  for (i = 0; i < n; i++) {
    tat[i] = bt[i] + wt[i];
  }

  printf("Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
  for (i = 0; i < n; i++) {
    printf("%d\t\t%d\t\t%d\t\t%d\n", pid[i], bt[i], wt[i], tat[i]);
  }
}
