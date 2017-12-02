
Installation (CMSSW 8_0_25)
============

```
cmsrel CMSSW_8_0_25
cd CMSSW_8_0_25/src/
cmsenv
git cms-init
git clone https://github.com/corvettettt/DeepFlavorArea.git DeepNTuples
git cms-merge-topic -u mverzett:DeepFlavour-from-CMSSW_8_0_21
mkdir RecoBTag/DeepFlavour/data/
cd RecoBTag/DeepFlavour/data/
wget http://home.fnal.gov/~verzetti//DeepFlavour/training/DeepFlavourNoSL.json
cd -
git clone https://github.com/corvettettt/DeepDijet.git CMSDIJET
scram b -j 4
