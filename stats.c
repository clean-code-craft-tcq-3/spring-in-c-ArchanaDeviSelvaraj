#include "stats.h"
struct Stats compute_statistics(const float* , int );

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float avg =0, min, max, sum = 0, *num_set;
	int loop_var;
	num_set = numberset;
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
	s.avg = avg;
	s.min = min;
	s.max = max;
	
	return s;	

}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
