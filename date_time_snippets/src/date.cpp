#include "date.h"
#include <iomanip>

std::tm Date::parseDate(const std::string& dateString, const std::string& format){
    std::tm date = {};
    std::istringstream ss(dateString);
    ss >> std::get_time(&date, format.c_str());
    return date;
}

int64_t Date::difference_date_days(std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end){
   std::chrono::duration<int64_t, std::nano> days = end - start;
    return days.count() / (60 * 60 * 24);
}


int64_t Date::time_duration_operation(){
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    example_oper();
    std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
  
  std::chrono::duration<double> elapsed_seconds = end - start;
  std::cout << "times: " << elapsed_seconds.count() << " s." << std::endl;
}

void Date::example_oper(){
    int a = 0;
    for(int i = 0; i < 1000; i++){
        a++;
    }
}

void date_main() {
    Date currentDate;
    std::cout << "Current date: " << currentDate.getYear() << "-" << currentDate.getMonth() << "-" << currentDate.getDay() << std::endl;

    std::string dateString = "2024-06-07";
    std::string format = "%Y-%m-%d";

    std::tm date = currentDate.parseDate(dateString, format);
    
    int day = date.tm_mday;
    int month = date.tm_mon + 1;
    int year = date.tm_year + 1900;
    
    std::cout << "Parsed date: " << day << "/" << month << "/" << year << std::endl;

    std::cout << currentDate.difference_date_days(std::chrono::system_clock::now(), std::chrono::system_clock::now()+ std::chrono::hours(24)) << std::endl;

    std::cout << currentDate.time_duration_operation() << std::endl;
    
}
