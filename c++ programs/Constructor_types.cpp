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
        cout<< "Hours are: "<< hour<<endl;
        cout<< "Minutes are: "<< minute<<endl;
        cout<< "Seconds are: "<< second<<endl;
    }

    Time() // created own constructor
    {
        cout<< "Default Constructor"<<endl;
        hour = 100;
        minute = 0;
        second = 0;
    }

    Time (int hour, int minute, int second)
    {
        cout<< "Paramiterize constructor"<<endl;
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }

    Time(Time & k) // when calling object in constructor then put '&', &k is getting refference of t1
    { 
        cout << "Copy Constructor"<<endl;
        this -> hour = k.hour;
        this -> minute = k.minute;
        this -> second = k.second;
    }

};

int main(){
   Time T;
   T.display(); // It will call default constructor.

   Time t1(23, 231, 223);
   t1.display(); // it will call parameterize constructor, then we dont need setData

   Time t2(t1);
   t2.display(); //Copy constructor for coping t1 to t2
}