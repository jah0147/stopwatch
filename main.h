//
// Created by jacob_howard on 7/20/2022.
//
//timing includes for delay
#include <chrono>
#include <thread>
//include for keyListener
//#include "winuser.h"
//for file writing
#include <iostream>
#include <fstream>

using namespace std;
#ifndef COUNTER_DELAY_H
#define COUNTER_DELAY_H

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

struct Time {
    unsigned int sec = 0;
    unsigned int min = 0;
    unsigned int hr = 0;
    unsigned int days = 0;
} timeAm;

//
//delay in seconds
//
inline void DELAY_IN_SECONDS(int sec) {
    sleep_until(system_clock::now() + seconds(sec));
}
//
//clear console
//
inline void clearConsole()
{
    system( "CLS");
}
//
//Create and write time to file
//

#endif //COUNTER_DELAY_H
