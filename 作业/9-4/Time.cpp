#include<iostream>
#include<iomanip>
#include<ctime>
#include<stdexcept>
#include"Time.h"

using namespace std;

Time::Time()
{
   const time_t currentTime =time(0);
   const tm *localTime=localtime(&currentTime);
   setTime(localTime->tm_hour,localTime->tm_min,localTime->tm_sec);

}

void Time::setTime(int h,int m,int s)
{
    if((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))
    {
        hour=h;
        minute=m;
        second=s;
    }
    else
       throw invalid_argument("hour,minute and/or second was out of rang");

}

void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}

void Time::printStandard()const
{
    cout<<((hour==0||hour==12) ? 12 : hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<( hour<12 ? "AM":"PM");

}


