#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <time.h>
#include <ctime>

using namespace std;

double diffclock(clock_t, clock_t);

int main()
{
    // Start CPU timer
    clock_t begin = clock(); //CPU Time
    
    // End CPU timer
    clock_t end = clock();
    
    // Calculate CPU time elapsed
    cout << "Time elapsed: " << double(diffclock(end, begin)) << " s"<< endl;
    
    // Start wall-clock timer
    time_t start, end0;     //Clock Time
    double delta = 0;
    start = std::time(NULL);
    
    // End wall-clock timer
    end0 = std::time(NULL);
    
    // Calculate wall-clock time elapsed
    delta = end0 - start;    
    cout << "Time elapsed: " << delta << " s"<< endl;
}

double diffclock(clock_t clock1,clock_t clock2)
{
    return (clock1-clock2) * 1.0 / CLOCKS_PER_SEC;
}
