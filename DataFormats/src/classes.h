#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitive.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitiveFwd.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrack.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrackFwd.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonCandidateTrack.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonCandidateTrackFwd.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefToBase.h"

#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonRegionalTracksFwd.h"

#include "DataFormats/RPCDigi/interface/RPCDigiL1Link.h"
#include "DataFormats/L1CSCTrackFinder/interface/L1CSCTrackCollection.h"
#include "DataFormats/L1DTTrackFinder/interface/L1MuDTTrackContainer.h"
#include "DataFormats/L1GlobalMuonTrigger/interface/L1MuRegionalCand.h"

namespace {
  using namespace L1TMuon;
  struct dictionary {
    // trigger primitive information
    TriggerPrimitive::RPCData rpcD;
    TriggerPrimitive::CSCData cscD;
    TriggerPrimitive::DTData  dtD;
    
    edm::Wrapper<TriggerPrimitive::RPCData> wrpcD;
    edm::Wrapper<TriggerPrimitive::CSCData> wcscD;
    edm::Wrapper<TriggerPrimitive::DTData>  wdtD;

    TriggerPrimitive trigPrim;
    edm::Wrapper<TriggerPrimitive> wtrigPrim;
    TriggerPrimitiveCollection vtrigPrim;
    edm::Wrapper<TriggerPrimitiveCollection> wvtrigPrim;

    TriggerPrimitiveRef rtrigPrim;
    TriggerPrimitiveList rvtrigPrim;
    TriggerPrimitiveStationMap smtrigPrim;
    
    TriggerPrimitivePtr ptrigPrim;   

    // internal tracks
    InternalTrack tk;
    edm::Wrapper<InternalTrack> wtk;

    InternalTrackCollection ctk;
    edm::Wrapper<InternalTrackCollection> wctk;

    InternalTrackRef rtk;
    InternalTrackPtr ptk;

    // Candidate tracks
    CandidateTrack cctk;
    edm::Wrapper<CandidateTrack> wcctk;

    CandidateTrackCollection ccctk;
    edm::Wrapper<CandidateTrackCollection> wccctk;

    CandidateTrackRef rcctk;
    CandidateTrackPtr pcctk;
    
    // regional muon system tracks removed from their containers
    // so we can save references to them
    RegionalCandBaseRef rcR2B;
    RegionalCandPtr     rcPtr;
    RegionalCandRef     rfRef;

    DTTrackCollection dtTrkColl;
    edm::Wrapper<DTTrackCollection> wdtTrkColl;
    DTTrackPtr dtTrkPtr;
    DTTrackRef dtTrackRef;
    
    CSCTrackCollection cscTrkColl;
    edm::Wrapper<CSCTrackCollection> wcscTrkColl;
    CSCTrackPtr cscTrkPtr;
    CSCTrackRef cscTrkRef;

    RPCL1LinkPtr prpcL1link;
    RPCL1LinkRef rrpcL1link;

    edm::reftobase::Holder<L1MuRegionalCand,RegionalCandRef>  r2rholder;
    edm::reftobase::Holder<L1MuRegionalCand,DTTrackRef>  r2dtholder;
    edm::reftobase::Holder<L1MuRegionalCand,CSCTrackRef>  r2cscholder;
    edm::reftobase::Holder<L1MuRegionalCand,InternalTrackRef>  r2itholder;
    edm::reftobase::RefHolder<RegionalCandRef>  r2rrefholder;
    edm::reftobase::RefHolder<DTTrackRef>  r2dtrefholder;
    edm::reftobase::RefHolder<CSCTrackRef>  r2cscrefholder;
    edm::reftobase::RefHolder<InternalTrackRef>  r2itrefholder;
  };
}
