#include <Particle.h>

const double Particle::g=9.8;

Particle::Particle()
{
    L=1;
    m=1;
    theta=1;;
    thetaDot=0;
    t=0;
    dt=0.01;

}

Particle::Particle(double L0,double m0,double th0,double thD0,double dt0)
{
    L=L0;
    m=1;
    theta=th0;
    thetaDot=thD0;
    dt=dt0;
}

void Particle::SetValues(double th, double thDot)
{
    theta=th;
    thetaDot=thDot;
}

void Particle::GetValues()
{
    x[0]=L*sin(theta);
    x[1]=L*(1-cos(theta));
    v[0]=L*thetaDot*cos(theta);
    v[1]=L*thetaDot*sin(theta);

}
void Particle::Step()
{
    double a,thDotM,thM;
    a=-g/L*sin(theta);
    thDotM=thetaDot+a*dt/2;
    thM=theta+thetaDot*dt/2;
    a=-g/L*sin(thM);

    thetaDot=thetaDot+a*dt;
    theta=theta+thDotM*dt;
    t=t+dt;
}
