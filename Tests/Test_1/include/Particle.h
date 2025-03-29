#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
using namespace std;
class Particle
{
    public:
        double x,v,t,dt;
        Particle()
        {
            cout << "A new Particle is created." << endl;
        }
        virtual ~Particle() {}
        virtual void Step()=0;
        virtual double AnalyticPosition()=0;
        virtual double AnalyticVelocity()=0;
    protected:

    private:
};

#endif // PARTICLE_H
