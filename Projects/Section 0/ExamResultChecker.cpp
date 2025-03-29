#include <iostream>
using namespace std;

void PrintPassOrFail(int score, int passMark);

int main(int argc, char * argv[])
{
    int score = 29, pass_mark = 30;
    PrintPassOrFail(score, pass_mark);
    return 0;
}

void PrintPassOrFail(int score, int passMark)
{
    cout << (score >= passMark ? "Pass - congratulations!\n" : "Fail - better luck next time\n");
}
