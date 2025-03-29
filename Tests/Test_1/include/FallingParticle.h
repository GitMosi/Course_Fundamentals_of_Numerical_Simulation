#ifndef FALLINGPARTICLE_H
#define FALLINGPARTICLE_H

#include <Particle.h>


class FallingParticle : public Particle
{
    public:
        const static double g;
        double x0,v0;
        FallingParticle();
        FallingParticle(double,double);
        virtual ~FallingParticle();
        void Step();
        double AnalyticPosition();
        double AnalyticVelocity();

    protected:

    private:
};
class FallingParticleEC : public FallingParticle
{
    public:
        FallingParticleEC(double xp,double vp)
        {
            this->x=xp;
            this->v=vp;
            this->x0=xp;
            this->v0=vp;
            cout << "A new ECFalling Particle is created." << endl;
        }
        void Step()
        {
            v = v-g*dt;
            x = x+v*dt;
            t = t+dt;
        }
};

class FallingParticleER : public FallingParticle
{
    double vm;
    public:
        FallingParticleER(double xp,double vp)
        {
            this->x=xp;
            this->v=vp;
            this->x0=xp;
            this->v0=vp;
            cout << "A new ERFalling Particle is created." << endl;
        }
        void Step()
        {
            vm=v-g*dt/2;
            v=v-g*dt;
            x=x+vm*dt;
            t=t+dt;
        }
};

#endif // FALLINGPARTICLE_H
