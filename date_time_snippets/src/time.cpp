#include "time.h"
#include <iomanip>

int64_t Time::time_duration_operation(){
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    example_oper();
    std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
  
  std::chrono::duration<double> elapsed_seconds = end - start;
  std::cout << "times: " << elapsed_seconds.count() << " s." << std::endl;

  return elapsed_seconds.count();
}

void Time::example_oper(){
    int a = 0;
    for(int i = 0; i < 1000; i++){
        a++;
    }
}

std::tm Time::parseTime(const std::string& timeString, const std::string& format){
    std::tm time = {};
    std::istringstream ss(timeString);
    if (ss >> std::get_time(&time, format.c_str())){
         return time; 
         } else {
             throw std::runtime_error("Failed to parse time"); 
             } 
             }

void time_main(){
    Time currentTime;
    std::cout << "Current time: " << currentTime.getHour() << "-" << currentTime.getMinut() << "-" << currentTime.getSec() << std::endl;

    std::string timeString = "13:27:43";
    std::string format = "%H:%M:%S";

    std::tm date = currentTime.parseTime(timeString, format);
    
    int hour = date.tm_hour;
    int min = date.tm_min;
    int sec = date.tm_sec;
    
    std::cout << "Parsed time: " << hour << ":" << min << ":" << sec << std::endl;

    currentTime.time_duration_operation();

}