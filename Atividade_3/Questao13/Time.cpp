#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

#include <ctime> //Biblioteca para pegar a hora do sistema
#include "Time.h"

Time::Time(){ //Construtor sem parâmetros que vai iniciar com a hora do sistema
  time_t timestamp = time(&timestamp);
  struct tm datetime = *localtime(&timestamp);

  setTime(datetime.tm_hour, datetime.tm_min, datetime.tm_sec);
}

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

