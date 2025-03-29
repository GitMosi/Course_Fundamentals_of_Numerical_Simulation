#include <iostream>
#include <Particle.h>
#include <FallingParticle.h>

using namespace std;

int main()
{
    double x0 = 0, v0 = 10, t0=0, dtp = 0.05;
    cout << "Euler Method / Pointer of Parent--------------------------------------------------\n";
    Particle * par;
    par=new FallingParticle(x0,v0);
    par->t=t0;
    par->dt=dtp;
    for(int i=0;i<40;i++)
    {
        par->Step();
    }
    cout << "Results\n";
    cout << "final time = " << par->t << endl;
    cout << "y = " << par->x << "\t v = "<< par->v << endl;

    cout << "analytic y = "<< par->AnalyticPosition()<< endl;
    cout << "analytic v = "<< par->AnalyticVelocity() << endl;
    cout << "acceleration = " << FallingParticle::g << endl;
    delete par;

    cout << "Euler-Cramers Method / Pointer of Parent------------------------------------------\n";
    par=new FallingParticleEC(x0,v0);
    par->t=t0;
    par->dt=dtp;
    for(int i=0;i<40;i++)
    {
        par->Step();
    }
    cout << "Results\n";
    cout << "final time = " << par->t << endl;
    cout << "y = " << par->x << "\t v = "<< par->v << endl;

    cout << "analytic y = "<< par->AnalyticPosition()<< endl;
    cout << "analytic v = "<< par->AnalyticVelocity() << endl;
    cout << "acceleration = " << FallingParticle::g << endl;
    delete par;

    cout << "Euler-Richardson Method / Pointer of Parent---------------------------------------\n";
    par=new FallingParticleER(x0,v0);
    par->t=t0;
    par->dt=dtp;
    for(int i=0;i<40;i++)
    {
        par->Step();
    }
    cout << "Results\n";
    cout << "final time = " << par->t << endl;
    cout << "y = " << par->x << "\t v = "<< par->v << endl;

    cout << "analytic y = "<< par->AnalyticPosition()<< endl;
    cout << "analytic v = "<< par->AnalyticVelocity() << endl;
    cout << "acceleration = " << FallingParticle::g << endl;
    delete par;

    cout << "Euler Method / Object of Child----------------------------------------------------\n";
    FallingParticle fpar(x0,v0);
    fpar.t=t0;
    fpar.dt=dtp;
    for(int i=0;i<40;i++)
    {
        fpar.Step();
    }
    cout << "Results\n";
    cout << "final time = " << fpar.t << endl;
    cout << "y = " << fpar.x << "\t v = "<< fpar.v << endl;

    cout << "analytic y = "<< fpar.AnalyticPosition()<< endl;
    cout << "analytic v = "<< fpar.AnalyticVelocity() << endl;
    cout << "acceleration = " << FallingParticle::g << endl;
    return 0;
}
