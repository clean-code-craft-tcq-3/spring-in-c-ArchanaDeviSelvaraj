#include "stats.h"
#include <math.h>

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
struct Stats compute_statistics_empty(const float* numberset) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    	if (sizeof(numberset == 0)
	{
	s.average = NAN;
    	s.min = NAN;
    	s.max = NAN;	
	}
	return s;	

}

int check_and_alert(float maxThreshold , struct Stats computedStats)
{
	
	int emailAlertCallCount = 0;
	int ledAlertCallCount = 0;

  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
    return emailAlertCallCount;
   
  }
	return 0;
}

int check_and_alert_1(float maxThreshold , struct Stats computedStats)
{
	
	int emailAlertCallCount = 0;
	int ledAlertCallCount = 0;

  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
    return ledAlertCallCount;
   
  }
	return 0;
}





