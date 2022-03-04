int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

 alerter_funcptr alerters[] = {emailAlerter, ledAlerter};

check_and_alert(maxThreshold, alerters, computedStats)
{
}
