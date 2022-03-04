
//struct Stats compute_statistics(const float* numberset, int setlength);
typedef int (*alerter_funcptr)(int,int);

int check_and_alert(float maxThreshold, struct Stats computedStats);
int check_and_alert_1(float maxThreshold, struct Stats computedStats);
