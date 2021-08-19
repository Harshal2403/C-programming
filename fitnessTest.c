// Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, theyall need to be selected.

// Display the most fit trainee (or trainees) and the highest average oxygen level.
// Note:
//   ->The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
//   ->If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
//   ->Average Oxygen Values should be rounded.

#include<stdio.h>

int main()
{
  int trainee[3][3],i,j;
  int avg[3];

  for (i = 0; i < 3; i++)
  {
    printf("Trainee %d\n",i+1);
    for (j = 0; j < 3; j++)
    {
      printf("Round %d: ",j+1);
      scanf("%d",&trainee[i][j]);
    }
    
  }
  for (i = 0; i < 3; i++)
  {
    avg[i] = 0;
    for (j = 0; j < 3; j++)
    {
      avg[i] = avg[i] + trainee[i][j];
    }
    avg[i] = avg[i]/3;
  }
  
  for (i = 0; i < 3; i++)
  {
    if (avg[i]<70)
    {
      printf("Trainee %d is unfit(average oxygen level: %d).\n",i+1,avg[i]);
    }
    else
    {
      printf("Trainee %d is fit(average oxygen level: %d).\n",i+1,avg[i]);
    }
    
  }
  

  return 0;
}