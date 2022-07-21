#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>
#include <fstream>
#include "windows.h"

struct storeTime {
    unsigned int millisec = 0;
    unsigned int sec = 0;
    unsigned int min = 0;
    unsigned int hr = 0;
    unsigned int day = 0;
} storeTime;

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
                  << std::setw(2) << "Hr" << ":"
                  << std::setw(2) << "Min" << ":"
                  << std::setw(3) << "Sec" << ":"
                  << std::setw(2) << "MS" << "]\n";
        std::cout << "["
                  << std::setw(2) << t_hr << ":"
                  << std::setw(2) << t_min << ":"
                  << std::setw(2) << t_sec << ":"
                  << std::setw(3) << t_millisec << "]\n";

        //stores time for later printing
        storeTime.millisec = t_millisec;
        storeTime.sec = t_sec;
        storeTime.min = t_min;
        storeTime.hr = t_hr;
    } while (!(GetKeyState(VK_RETURN) & 0x8000));

    std::string usrIn;
    std::cout << "\nWould you like to store the time in a text file? (Y/N)" << std::endl;

    while (true) {

        if (GetKeyState('Y') & 0x8000) {
            std::ofstream file("time.txt");
            file << "["
                    << std::setw(2) << "Hr" << ":"
                    << std::setw(2) << "Min" << ":"
                    << std::setw(3) << "Sec" << ":"
                    << std::setw(2) << "MS" << "]\n"
                 << "["
                 << std::setw(2) << storeTime.hr << ":"
                 << std::setw(2) << storeTime.min << ":"
                 << std::setw(2) << storeTime.sec << ":"
                 << std::setw(3) << storeTime.millisec << "]\n";

            std::cout << "The time has been saved";
            std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds (3)); //3 sec delay
            return 0;
        } else if (GetKeyState('N') & 0x8000) {
            std::cout << "Goodbye";
            std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds (1)); //1 sec delay

            return 0;
        }
    }
}