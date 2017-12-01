/*
 * ntuple_JetInfo.h
 *
 *  Created on: 13 Feb 2017
 *      Author: jkiesele
 */

#ifndef DEEPNTUPLES_DEEPNTUPLIZER_INTERFACE_NTUPLE_JETINFO_H_
#define DEEPNTUPLES_DEEPNTUPLIZER_INTERFACE_NTUPLE_JETINFO_H_

#include "ntuple_content.h"
#include "TRandom3.h"
#include <map>
#include <string>

/*
 * For global jet info such as eta, pt, gen info
 */
class ntuple_JetInfo: public ntuple_content{
public:
    ntuple_JetInfo():ntuple_content()
{}

    void getInput(const edm::ParameterSet& iConfig);
    void initBranches(TTree* );
    void readEvent(const edm::Event& iEvent);

    //use either of these functions

    bool fillBranches(const pat::Jet &, const size_t& jetidx, const  edm::View<pat::Jet> * coll=0);


    /////////branches

    // labels (MC truth)
    // regressions pt, Deta, Dphi
    //classification

    //truth labeling with fallback to physics definition for light/gluon/undefined of standard flavor definition

    // global variables

    // jet variables

    // quark/gluon
    std::map<std::string, float> discriminators_;
};


#endif /* DEEPNTUPLES_DEEPNTUPLIZER_INTERFACE_NTUPLE_JETINFO_H_ */
