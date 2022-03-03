#include "stats.h"

Stats compute_statistics(float numberset[], int setlength) {
    
    s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
    int sum =0;
     for (int i = 0; i < setlength; ++i) {
        sum+= numberset[i];
    }
    s.average = sum / setlength;
    
    for(int i=1; i< setlength; i++)
    {
         if(s.min>numberset[i])
		  s.min=numberset[i];   
		   if(s.max<numberset[i])
		    s.max=numberset[i];       
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
