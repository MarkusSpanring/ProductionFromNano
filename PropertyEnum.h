enum class PropertyEnum {
pdgId = 0,
charge,
dxy,
dz,
sip3d,
pfRelIso03_all,
genPartFlav,
isGoodTriggerType,
FilterFired,
mc_match,
decayMode,
rawIso,
photonsOutsideSignalCone,
rawMVAoldDM2017v1,
rawMVAoldDM2017v2,
idMVAoldDM2017v1,
idMVAoldDM2017v2,
rawAntiEleCat,
idDecayMode,
idAntiEle,
idAntiMu,
leadTkPtOverTauPt,
chargedIso,
neutralIso,
puCorr,
softId,
mediumId,
tightId,
highPtId,
pfRelIso04_all,
cutBased,
mvaFall17Iso_WP80,
mvaFall17Iso_WP90,
mvaFall17noIso_WP80,
mvaFall17noIso_WP90,
deltaEtaSC,
lostHits,
convVeto,
rawFactor,
area,
puId,
partonFlavour,
btagCSVV2,
btagCMVA,
btagDeepB,
hadronFlavour,
jetId,
NONE
};

const vector<string> leptonProperties= {
"pdgId",
"charge",
"dxy",
"dz",
"sip3d",
"pfRelIso03_all",
"genPartFlav",
"isGoodTriggerType",
"FilterFired",
"mc_match",

"Tau_decayMode",
"Tau_rawIso",
"Tau_photonsOutsideSignalCone",
"Tau_rawMVAoldDM2017v1",
"Tau_rawMVAoldDM2017v2",
"Tau_idMVAoldDM2017v1",
"Tau_idMVAoldDM2017v2",
"Tau_rawAntiEleCat",
"Tau_idDecayMode",
"Tau_idAntiEle",
"Tau_idAntiMu",
"Tau_leadTkPtOverTauPt",
"Tau_chargedIso",
"Tau_neutralIso",
"Tau_puCorr",

"Muon_softId",
"Muon_mediumId",
"Muon_tightId",
"Muon_highPtId",
"Muon_pfRelIso04_all",

"Electron_cutBased",
"Electron_mvaFall17Iso_WP80",
"Electron_mvaFall17Iso_WP90",
"Electron_mvaFall17noIso_WP80",
"Electron_mvaFall17noIso_WP90",
"Electron_deltaEtaSC",
"Electron_lostHits",
"Electron_convVeto",


"Jet_rawFactor",
"Jet_area",
"Jet_puId",
"Jet_partonFlavour",
"Jet_btagCSVV2",
"Jet_btagCMVA",
"Jet_btagDeepB",
"Jet_hadronFlavour",
"Jet_jetId",
};
