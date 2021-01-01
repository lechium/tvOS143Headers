//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRapportLinkGenericMessageHandling-Protocol.h"
#import "ADRapportLinkListening-Protocol.h"

@class ADRapportLink, AFWatchdogTimer, NSArray, NSDate, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceCircleManager : NSObject <ADRapportLinkListening, ADRapportLinkGenericMessageHandling>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADRapportLink *_clientLink;	// 16 = 0x10
    NSHashTable *_listeners;	// 24 = 0x18
    NSArray *_currentCollectorIDs;	// 32 = 0x20
    _Bool _isCollector;	// 40 = 0x28
    float _currentStationaryScore;	// 44 = 0x2c
    AFWatchdogTimer *_stationaryScoreTimer;	// 48 = 0x30
    float _rollingRSSI;	// 56 = 0x38
    unsigned long long _rollingRSSICount;	// 64 = 0x40
    unsigned long long _rapportInstabilityPenalty;	// 72 = 0x48
    NSMutableArray *_deviceCountTrend;	// 80 = 0x50
    NSDate *_lastReelectionBasedOnScore;	// 88 = 0x58
}

+ (id)_rapportLinkWithQueue:(id)arg1;	// IMP=0x0000000100112b34
+ (id)sharedInstance;	// IMP=0x00000001001128d4
- (void).cxx_destruct;	// IMP=0x00000001001173fc
- (unsigned long long)_rapportLinkInstabilityPenalty;	// IMP=0x00000001001173f4
- (void)reelectCollectorDeviceForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100117348
- (id)_keepAliveLinkToDevice:(id)arg1;	// IMP=0x0000000100117100
- (void)_updateDeviceCountTrend;	// IMP=0x0000000100116dbc
- (void)_updateStationaryScore;	// IMP=0x0000000100116b20
- (void)_updateStationaryScoreAndResetTimer;	// IMP=0x0000000100116adc
- (void)_updateStationaryScoreBroadcasting;	// IMP=0x0000000100116a40
- (void)_stopStationaryScoreTimer;	// IMP=0x00000001001169fc
- (void)_startStationaryScoreTimer;	// IMP=0x00000001001168bc
- (void)rapportLink:(id)arg1 didReceiveMessage:(id)arg2 ofType:(id)arg3 fromDeviceWithIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001164c0
- (void)rapportLinkDidInvalidate:(id)arg1;	// IMP=0x000000010011646c
- (void)rapportLinkDidInterrupt:(id)arg1;	// IMP=0x0000000100116418
- (void)_resetRapportLink;	// IMP=0x000000010011638c
- (void)rapportLink:(id)arg1 didUpdateLocalDevice:(id)arg2;	// IMP=0x000000010011629c
- (void)rapportLink:(id)arg1 didUpdateDevice:(id)arg2 changes:(unsigned int)arg3;	// IMP=0x0000000100116208
- (void)rapportLink:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x00000001001160b8
- (void)rapportLink:(id)arg1 didFindDevice:(id)arg2;	// IMP=0x0000000100115fb8
- (void)_fetchDeviceCapabilitiesForDevices:(id)arg1 fromCollectorWithIndex:(unsigned long long)arg2 existingCapabilities:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001158fc
- (void)_fetchDeviceCapabilitiesForDevices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001157f8
- (void)_updateSiriInfoWithDeviceCapabilities;	// IMP=0x0000000100115744
- (void)_reelectCollectorDeviceForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100114380
- (void)_updateReelectionTimestampBasedOnReason:(long long)arg1;	// IMP=0x000000010011432c
- (void)_reelectCollectorIfNecessary;	// IMP=0x0000000100114200
- (void)_updateCollectorElectionVersionWithNotification:(id)arg1;	// IMP=0x00000001001140b4
- (_Bool)_isDeviceCollectorCandidate:(id)arg1;	// IMP=0x0000000100113fdc
- (_Bool)_isLocalDeviceCollectorCandidate;	// IMP=0x0000000100113f1c
- (id)_collectorDeviceIdentifiersWithFlags;	// IMP=0x0000000100113c88
- (void)_updateClientLinkSiriInfo;	// IMP=0x0000000100113b80
- (void)wakeUpNearbyDevices;	// IMP=0x00000001001138f8
- (void)getCapabilitiesForDeviceWithIdsDeviceUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001134ec
- (id)_rpDeviceWithIDSDeviceUniqueIdentifier:(id)arg1;	// IMP=0x0000000100113358
- (void)reelectContextCollectorWithBestScore;	// IMP=0x00000001001131bc
- (void)removeListener:(id)arg1;	// IMP=0x0000000100113124
- (void)addListener:(id)arg1;	// IMP=0x000000010011308c
- (void)getContextCollectorDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100112f24
- (id)_rapportLinkMessageOptions;	// IMP=0x0000000100112ea0
- (void)_setupClientLink;	// IMP=0x0000000100112d04
- (id)_initWithQueue:(id)arg1 rapportLink:(id)arg2;	// IMP=0x00000001001129dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
