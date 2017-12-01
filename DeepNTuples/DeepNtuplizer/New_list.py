import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring()
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [

'/store/mc/RunIISummer16MiniAODv2/RSGravitonToGluonGluon_kMpl01_M_3000_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/120000/1876D16C-D1B5-E611-B6B4-001E675A6653.root'


] );

#readFiles.extend( [
#] );
secFiles.extend( [
               ] )
