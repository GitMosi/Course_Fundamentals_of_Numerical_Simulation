#ifndef TIME_H
#define TIME_H
#include <ctime>
#include <iostream>
using namespace std;

class Time
{
    public:
        Time();
        virtual ~Time();
        void Start();
        void Stop();

    protected:

    private:
        clock_t begin,end;
};

#endif // TIME_H
