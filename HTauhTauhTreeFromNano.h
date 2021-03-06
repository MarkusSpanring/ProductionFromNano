#ifndef HTauhTauhTreeFromNano_h
#define HTauhTauhTreeFromNano_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "HTTEvent.h"
#include <iostream>

// Header of the base class
#include "HTauTauTreeFromNanoBase.h"

class HTauhTauhTreeFromNano : public HTauTauTreeFromNanoBase {
 public :

  /////////////////////////////////////////////////
  /// TT final state specific
  bool pairSelection(unsigned int index);
  unsigned int bestPair(std::vector<unsigned int> &pairIndexes);
  /////////////////////////////////////////////////
  
  HTauhTauhTreeFromNano(TTree *tree=0, std::vector<edm::LuminosityBlockRange> lumiBlock = std::vector<edm::LuminosityBlockRange>(), std::string prefix="HTTTT");
  virtual ~HTauhTauhTreeFromNano();
  
};

#endif

#ifdef HTauhTauhTreeFromNano_cxx
HTauhTauhTreeFromNano::HTauhTauhTreeFromNano(TTree *tree, std::vector<edm::LuminosityBlockRange> lumiBlocks, std::string prefix) : HTauTauTreeFromNanoBase(tree, lumiBlocks, prefix)
{}

HTauhTauhTreeFromNano::~HTauhTauhTreeFromNano()
{}

#endif // #ifdef HTauhTauhTreeFromNano_cxx
