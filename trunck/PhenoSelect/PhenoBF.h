/*
 * PhenoBF.h
 *
 *  Created on: Dec 13, 2012
 *      Author: pickrell
 */

#ifndef PHENOBF_H_
#define PHENOBF_H_
#include "CountData.h"
using namespace std;

class PhenoBF{
public:
	PhenoBF();
	PhenoBF(string, string);
	gsl_rng* r;
	CountData* counts_control;
	CountData* counts_pheno;
	void initialize();
	double c1, c2, c3;
	vector<double> xa_control;
	vector<double> xa_pheno;
	int ncontrol;
	int npheno;
	double s;
	int model;
	double single_llk0_control(int);
	double single_llk0_pheno(int);
	double single_llk1(int);
	double llk0();
	double llk1();
	double normal_ldens(double, double, double);

	double beta_prior, branch_prior, s_prior;
	double xa_update_sd, branch_update_sd, s_update_sd;
	int nit;
	int whichpop;
	void single_iteration();
	void update_xa_control(int);
	void update_xa_pheno(int);
	void update_branches();
	void update_s();
};


#endif /* PHENOBF_H_ */
