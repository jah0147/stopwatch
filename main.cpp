#include "main.h"
#include <iostream>

int main() {
    while (true)
    {
        DELAY_IN_SECONDS(1); //1 second delay
        //seconds
        timeAm.sec++;
        //minutes
        if (timeAm.sec > 59)
        {
            timeAm.sec = 0;
            timeAm.min++;
        }
        //hours
        if (timeAm.min > 59)
        {
            timeAm.min = 0;
            timeAm.hr++;
        }
        //days
        if (timeAm.hr > 23)
        {
            timeAm.hr = 0;
            timeAm.days++;
        }
        clearConsole(); //clears console
        //prints to console
        cout << "[" << timeAm.days << " days] "
        <<"[" << timeAm.hr << " hours] ["
        << timeAm.min << " minutes] ["
        << timeAm.sec << " seconds]";

        //listens if user presses stop key
        //stop key is ESC
        //This should also write the time to a textFile
//        switch (timeAm.min)
//        {
//            case WM_KEYDOWN:
//                if((GetAsyncKeyState(VK_ESCAPE) & 0x01))
//                {
//                    return 0; //should stop program
//                }
//        }
    }
    return 0;
}
