#ifndef PARTICLE_H
#define PARTICLE_H
#include <cmath>

class Particle
{
    static const double g;
    double  thetaDot,dt;
    public:
        double theta,m,L,t,x[2],v[2];
        Particle();
        Particle(double,double ,double,double,double);
        virtual ~Particle() {}
        void SetValues(double,double);
        void GetValues();
        void Step();

    protected:
};

#endif // PARTICLE_H
