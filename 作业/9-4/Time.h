#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time ();//���캯��
    void setTime (int,int,int);
    void printUniversal()const;
    void printStandard()const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};


#endif // TIME_H_INCLUDED
