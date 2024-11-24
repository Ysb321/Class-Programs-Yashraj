#include<iostream>
#include<string.h>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;

    public:
    Time()
    {
        hour= 0;
        minute= 0;
        second= 0;
    }

    Time(int hour, int minute, int second)
    {
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }

    Time addTime(Time & k)
    {
        Time Temp; // creating temp object for storing addition temporary
        Temp.hour = hour + k.hour;
        Temp.minute = minute + k.minute;
        Temp.second = second + k.second;


        if(Temp.second >= 60)
        {
            Temp.second = Temp.second % 60;
            Temp.minute++;
        }

        if(Temp.minute >= 60)
        {
            Temp.minute = Temp.minute % 60;
            Temp.hour++;
        }

        return Temp;
    }
        void display()
        {
            cout<<"Hour: "<<hour<<" Minute: "<<minute<<" Second: "<<second<<endl;
        }

};

int main()
{
    Time T;
    Time T1(10, 20, 50); // parameterize Constructor
    Time T2(1, 50 ,40); 
    Time T3;
    T3 = T1. addTime(T2);
    T3.display();
}