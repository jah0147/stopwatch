#include <chrono>
#include <thread>
#include <Windows.h>
#include <iostream>
#include <fstream>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void DELAY_IN_MILLISECONDS(int millisec) {
    sleep_until(system_clock::now() + milliseconds (millisec));
}
void clearConsole()
{
    system( "CLS");
}
struct Time {
    //unsigned int tick = 0;
    unsigned int millisec = 0;
    unsigned int sec = 0;
    unsigned int min = 0;
    unsigned int hr = 0;
    //unsigned int days = 0;
} timeAm;

int main()
{
    cout << "Started stopwatch" << endl;
    while (true)
    {
        //listens if user presses stop key
        //stop key is ESC
        //This should also write the time to a textFile

        if (GetKeyState(VK_ESCAPE) & 0x8000)
        {
            ofstream File("time.txt");
            File << "[" << timeAm.hr << " Hours] "
                 << "[" << timeAm.hr << " Minutes]"
                 << "[" << timeAm.min << " Seconds]"
                 << "[" << timeAm.sec << " Milliseconds]";
            File.close();
            return 0;
        }
        //DELAY_IN_MILLISECONDS(1); //1 second delay
        //seconds
        timeAm.millisec++;
        //minutes
        if (timeAm.millisec > 59)
        {
            timeAm.millisec = 0;
            timeAm.sec++;
        }
        //hours
        if (timeAm.sec > 59)
        {
            timeAm.sec = 0;
            timeAm.min++;
        }
        //days
        if (timeAm.min > 23)
        {
            timeAm.min = 0;
            timeAm.hr++;
        }
        clearConsole(); //clears console
        //prints to console
        cout << "[" << timeAm.hr << " Hours] "
             << "[" << timeAm.hr << " Minutes]"
             << "[" << timeAm.min << " Seconds]"
             << "[" << timeAm.sec << " Milliseconds]";
    }
}
