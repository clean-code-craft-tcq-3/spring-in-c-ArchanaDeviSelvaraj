
//struct Stats compute_statistics(const float* numberset, int setlength);
typedef int (*alerter_funcptr)(int,int);

int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
