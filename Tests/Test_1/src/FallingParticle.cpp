#include "FallingParticle.h"

const double FallingParticle::g=9.8;
FallingParticle::FallingParticle()
{
    cout << "A new Falling Particle is created." << endl;
}
FallingParticle::FallingParticle(double xp, double vp)
{
    cout << "A new Falling Particle object is created." << endl;
    this->x=xp;
    this->v=vp;
    x0=xp;
    v0=vp;
}

FallingParticle::~FallingParticle()
{
    //dtor
}
void FallingParticle::Step()
{
    x = x+v*dt;
    v = v-g*dt;
    t = t+dt;
}
double FallingParticle::AnalyticPosition()
{
    return x0+v0*t-0.5*g*t*t;
}
double FallingParticle::AnalyticVelocity()
{
    return v0-g*t;
}
