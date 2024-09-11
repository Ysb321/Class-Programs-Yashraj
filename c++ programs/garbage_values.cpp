#include <iostream>
#include <string.h>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;


    public:

    void setTime(int hour, int minute, int second)
    {
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }

    void display()
    {
        cout<< "Hours are: "<< hour;
        cout<< " Minutes are: "<< minute;
        cout<< " Seconds are: "<< second;
    }

    Time() // created own constructor
    {
        cout<< "Default Constructor";
        hour = 100;
        minute = 0;
        second = 0;
    }

    Time (int hour, int minute, int second)
    {
        cout<< "Paramiterize constructor";
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }

 
};

int main(){
   Time T;
   T.display(); // printing garbage values created by default constructor if we not create constructor

   Time t1(23, 231, 223);
   t1.display(); // it will parameterize constructor
}