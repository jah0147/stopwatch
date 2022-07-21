#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>
#include "windows.h"

int main()
{
    using std::chrono::duration_cast;
    using std::chrono::milliseconds;
    using Clock = std::chrono::steady_clock;

    std::cout << std::setfill('0');

    auto tbegin = Clock::now();
    unsigned long elapsedMilli = -1U;

    do {
        Clock::duration elapsed = Clock::now() - tbegin;
        unsigned long ms = duration_cast<milliseconds>(elapsed).count();
        if (elapsedMilli == ms)
        {
            std::this_thread::sleep_until(tbegin + milliseconds(ms + 1));
            continue;
        }
        elapsedMilli = ms;

        // Build time
        unsigned int t_millisec = ms % 1000; ms /= 1000;
        unsigned int t_sec = ms % 60; ms /= 60;
        unsigned int t_min = ms % 60; ms /= 60;
        unsigned int t_hr = ms % 24; ms /= 24;
        //unsigned int t_days = ms;
        system("CLS"); //clears screen
        // Display time
        std::cout << "["
                  << std::setw(2) << t_hr << ":"
                  << std::setw(2) << t_min << ":"
                  << std::setw(2) << t_sec << "."
                  << std::setw(3) << t_millisec << "]\n";

    } while (elapsedMilli != -1);

}