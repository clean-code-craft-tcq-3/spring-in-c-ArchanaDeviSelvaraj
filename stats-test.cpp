#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include "stats.c"
//#include "alerter.c"
//#include "alerter.h"

#include <stdlib.h>
#include <math.h>

TEST_CASE("reports average, minimum and maximum") {
    float numberset[] = {1.5, 8.9, 3.2, 4.5};
    int setlength = sizeof(numberset) / sizeof(numberset[0]);//setlength=4
    struct Stats computedStats = compute_statistics(numberset, setlength);
    float epsilon = 0.001;
    REQUIRE(abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    //Stats computedStats = compute_statistics(0, 0);
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the REQUIRE statement here.
    //Use https://stackoverflow.com/questions/1923837/how-to-use-nan-and-inf-in-c
}

TEST_CASE("raises alerts when max is greater than threshold") {
    // create additional .c and .h files
    // containing the emailAlerter, ledAlerter functions
   

    float numberset[] = {99.8, 34.2, 4.5};
    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    Stats computedStats = compute_statistics(numberset, setlength);
    
    //typedef void (*alerter_funcptr)();

    //alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
	int emailAlerter = 0;
	int ledAlerter = 0;	
    const float maxThreshold = 10.2;
    
    //extern int emailAlertCallCount;
	//extern int ledAlertCallCount;
    
   	emailAlerter=check_and_alert(maxThreshold, computedStats);
	 ledAlerter=check_and_alert_1(maxThreshold, computedStats);
  	//emailAlerter = emailAlertCallCount;
	//ledAlerter = ledAlertCallCount;
	
    // need a way to check if both emailAlerter, ledAlerter were called
    // you can define call-counters along with the functions, as shown below
    REQUIRE(emailAlerter == 1);
    REQUIRE(ledAlerter == 1);
}

