#include "Time.h"
#include <format>

Time::Time(int h, int m, int s){
  setTime(h,m,s);
}

void Time::setTime(int h, int m, int s){
  setHour(h);
  setMinute(m);
  setSecond(s);
}

std::string Time::toUniversal() const{
  return std::format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const{
  return std::format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12), minute, second, ( (hour < 12) ? "AM" : "PM"));
}

void Time::tick(){
  second++; 
  
  //Incremento para o próximo minuto
  if(second >= 60){
    second = 0;
    minute++;
  }
  
  //Incremento para a próxima hora
  if(minute >= 60){
    minute = 0;
    hour++;
  }
  
  //Incremento para o próximo dia
  if(hour >= 24)
    hour = 0;
    
  }
  

