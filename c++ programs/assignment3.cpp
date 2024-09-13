#include<iostream>
#include<string.h>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;


    public:

    Time() // created own constructor
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time (int hour, int minute, int second)
    {
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }


    Time addTime(Time &k)
    {
        Time temp;
        temp.hour = this -> hour + k.hour;
        temp.minute = this ->  minute + k.minute;
        temp.second = this -> second + k.second;

        if(temp.second >= 60){
            temp.second = temp.second - 60;
            temp.minute ++;
        }
        if(temp.minute >= 60){
            temp.minute = temp.minute - 60;
            temp.hour ++;
        }
            return temp;
    }

    void display()
    {
        cout << "Hours: " << hour << endl;
        cout << "Minutes: " << minute << endl;
        cout << "Seconds: " << second << endl;
    }

    //  Time addTime(Time &t)
    // {
    //     Time temp;
    //     temp.second = second + t.second;
    //     temp.minute = minute + t.minute + temp.second / 60;
    //     temp.second %= 60;
    //     temp.hour = hour + t.hour + temp.minute / 60;
    //     temp.minute %= 60;
    //     return temp;
    // }

};

int main(){
    Time t1(10, 20, 30);
    Time t2(1, 40, 40);
    Time t3;
    t3 = t1.addTime(t2);
    t3.display();
}