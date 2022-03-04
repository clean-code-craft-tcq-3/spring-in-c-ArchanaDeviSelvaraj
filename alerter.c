#include "alerter.h"
#include "stats.c"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
    return alerters;
  }
}
