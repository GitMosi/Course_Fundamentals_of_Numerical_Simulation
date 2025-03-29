#include <iostream>
#include <Particle.h>
#include <vector>
#include "TCanvas.h"
#include "TMultiGraph.h"
#include "TGraphErrors.h"
#include "TAxis.h"
#include "TROOT.h"
#include "TApplication.h"
#include "TStyle.h"

using namespace std;

int main()
{
    Particle par;
    vector<double> x,y,t,th;
    while(par.t<12)
    {
        par.GetValues();
        x.push_back(par.x[0]);
        y.push_back(par.x[1]);
        t.push_back(par.t);
        th.push_back(par.theta);
        par.Step();
    }

    TCanvas *c1 = new TCanvas("c1");
    TGraphErrors *gr = new TGraphErrors(t.size(),&t[0],&th[0]);
    gr->SetLineWidth(3);
	gr->SetLineColor(kBlue);
	gr->SetTitle("Pendulum Path");
    //gr->GetXaxis()->SetLimits(0, t[t.size()-1]);
//    gr->SetMaximum(2);
    gr->Draw("apl");
	c1->Print("Penddulum.eps");

    return 0;
}
