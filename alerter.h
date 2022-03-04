#include "stats.c"

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], computedStats);


extern int emailAlertCallCount;
extern int ledAlertCallCount;

