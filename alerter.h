typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
check_and_alert(maxThreshold, alerters, computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

