#include <iostream>
#include <ctime>
#include <sstream>
#include <chrono>

class Date {
private:
    std::tm* current_time;

public:
    Date() {
        time_t now = time(0);
        current_time = localtime(&now);
    }

    int getYear() const {
        return current_time->tm_year + 1900;
    }

    int getMonth() const {
        return current_time->tm_mon + 1;
    }

    int getDay() const {
        return current_time->tm_mday;
    }
    std::tm parseDate(const std::string& dateString, const std::string& format);
    int64_t difference_date_days(std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end);

    int64_t time_duration_operation();
    void example_oper();

};

void date_main();
