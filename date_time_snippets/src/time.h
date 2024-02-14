#include <chrono>
#include <ctime>
#include <iostream>
#include <sstream>

class Time{
    private:
        std::tm* current_time;
    public:
        Time(){
            time_t now = time(0);
            current_time = localtime(&now);
        }

        int getHour() const {return current_time->tm_hour;};
        int getMinut ()const { return current_time->tm_min;};
        int getSec() const {return current_time->tm_sec;};

        std::tm parseTime(const std::string& timeString, const std::string& format);
        int64_t time_duration_operation();
        void example_oper(); // programmer can override that function for get duration
};

void time_main();