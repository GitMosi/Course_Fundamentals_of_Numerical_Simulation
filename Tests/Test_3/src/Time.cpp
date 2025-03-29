#include "Time.h"

double diffclock(clock_t clock1,clock_t clock2)
{
    return (clock1-clock2) * 1.0/CLOCKS_PER_SEC;
}

Time::Time()
{
    //begin=clock(); //CPU Time
	//clock_t end=clock();
	//cout << "Time elapsed: " << double(diffclock(end,begin)) << " s"<< endl;
}

Time::~Time()
{
    //end=clock();
	//cout << "Time elapsed: " << double(diffclock(end,begin)) << " s"<< endl;
}
void Time::Start()
{
    begin=clock();
}
void Time::Stop()
{
    end=clock();
    double d=double(diffclock(end,begin));
    string s;
    if(d<60)
    {
        s=to_string(d)+" s";
    }
    else if(d<3600)
    {
        int n=(int)(d/60);
        s=to_string(n)+" min, "+to_string(d-n*60)+" s";
    }
    else
    {
        int n=(int)(d/3600);
        s=to_string(n)+" h, ";
        d=d-n*3600;
        s=s+to_string((int)(d/60))+" min, "+to_string(d-n*60)+" s";
    }
    cout << "Time elapsed: " << s << endl;
}
