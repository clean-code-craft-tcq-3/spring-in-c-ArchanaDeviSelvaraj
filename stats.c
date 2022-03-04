#include "stats.h"
struct Stats
  {
  float average,min,max;
};

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float avg =0, min, max, sum = 0, *num_set;
	int loop_var;
	num_set = (float *)numberset;
	min = max = *num_set;
	for(loop_var = 0; loop_var < setlength; loop_var++)
	{
		sum =sum + *num_set;
		
		/* Min calc*/
		if(min > *num_set)
		{
			min = *num_set;
		}
		
		/* Max calc*/
		if(max < *num_set)
		{
			max = *num_set;
		}
		num_set++;			
	}
	avg = sum/setlength;
	s.average = avg;
	s.min = min;
	s.max = max;
	
	return s;	

}




extern int emailAlertCallCount=0;
extern int ledAlertCallCount=0;

int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
    return emailAlertCallCount;
    return ledAlertCallCount;
  }
}




