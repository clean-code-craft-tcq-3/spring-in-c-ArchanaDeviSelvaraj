#include "alerter.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

int check_and_alert(float maxThreshold, alerters, computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
    return alerters;
  }
}
