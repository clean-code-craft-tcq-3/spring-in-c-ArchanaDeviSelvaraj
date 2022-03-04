#include "alerter.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerters, struct Stats computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
  }
}
