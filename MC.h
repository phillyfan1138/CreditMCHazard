#ifndef __MC_H_INCLUDED__
#define __MC_H_INCLUDED__
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <omp.h>
#include <algorithm>
template<typename Number>
class MC {
	private:
        int m;
        int bin=0;
		Number estimate;
		Number error;
        std::vector<Number> distribution;
	public:
		MC(int);
		MC();
        void setM(int);
		Number getEstimate();
		Number getError();
		Number getVariance();
		//Number getVaR(double);
        std::vector<Number> getDistribution();
		template<typename FN>
		void simulate(FN&& fn);
  	    template<typename FN>
		void simulateDistribution(FN&& fn);   
        

};
#include "MC.hpp"
#endif