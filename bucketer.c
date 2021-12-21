/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
}c;

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts={0,0,0};
  for(int i=0;i<nBatteries;i++)
  {
    if(cycles[i]<=150 && cycles[i]>=0)
    {
        c.lowCount++;
    }
        if(cycles[i]>150&&cycles[i]<649)
    {
        c.mediumCount++;
    }
        if(cycles[i]>650)
    {
        c.highCount++;
    }
    
  }    
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  printf("%d \n",c.lowCount);
  printf("%d \n",c.mediumCount);
  printf("%d \n",c.highCount);
  
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
