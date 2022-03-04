
//struct Stats compute_statistics(const float* numberset, int setlength);
struct Stats
  {
  float average,min,max;
};
struct Stats compute_statistics(const float* , int );
struct Stats compute_statistics_empty(const float* );
typedef int (*alerter_funcptr)(int,int);

//int check_and_alert(float maxThreshold, struct Stats computedStats);
int check_and_alert(float , struct Stats);
//int check_and_alert_1(float maxThreshold, struct Stats computedStats);
int check_and_alert_1(float , struct Stats);
