//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAClientConfigChangedDelegate-Protocol.h"

@class NSString, WAClient;
@protocol OS_dispatch_queue;

@interface WiFiManagerAnalytics : NSObject <WAClientConfigChangedDelegate>
{
    _Bool _hasRegisteredWithDaemon;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_wifiManagerQueue;	// 16 = 0x10
    WAClient *_waClient;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQ;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000f1040
- (void).cxx_destruct;	// IMP=0x0000000100109c34
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQ; // @synthesize serialQ=_serialQ;
@property(nonatomic) _Bool hasRegisteredWithDaemon; // @synthesize hasRegisteredWithDaemon=_hasRegisteredWithDaemon;
@property(retain, nonatomic) WAClient *waClient; // @synthesize waClient=_waClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wifiManagerQueue; // @synthesize wifiManagerQueue=_wifiManagerQueue;
- (void)_populateSlowWiFiNotificationMessage:(const struct __CFDictionary *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001098a4
- (void)_populateDPSLinkStateChangeMessage:(CDStruct_de0e5961 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001095c8
- (void)_populateDPSProbeResultMessage:(CDStruct_95ce6899 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010010927c
- (void)_populateDPSNotificationMessage:(const struct __CFDictionary *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100108fdc
- (void)_populateAirplayStatisticsMessage:(struct WiFiMetricsManagerAirplayStatistics *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100107d40
- (void)_populateOtaSystemInfoMessage:(CDStruct_d361f42f *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001075b4
- (void)_populateSidecarUsageMessage:(struct WiFiMetricsManagerSidecarStatistics *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001066b8
- (void)_loadSidecarHistogramBin:(id)arg1 blankAWDSHBInstance:(id)arg2 histogram:(CDStruct_39925896 *)arg3 histogramCount:(unsigned int)arg4 fieldForKey:(id)arg5;	// IMP=0x00000001001064b4
- (void)configDidChangeWithConfiguredMetricIDs:(id)arg1 andInterestedMetricIDs:(id)arg2 forGroupType:(long long)arg3;	// IMP=0x00000001001062e0
- (void)trigger11axPerfStudy;	// IMP=0x00000001001061f8
- (void)collectInterfaceStatsForEventType:(int)arg1 andEvent:(_Bool)arg2 wifiDevice:(struct __WiFiDevice *)arg3 andCellularInterfaceName:(struct __CFString *)arg4;	// IMP=0x0000000100106068
- (int)_getAssociationEventIDForEventTypeString:(id)arg1;	// IMP=0x0000000100105f68
- (void)_populateActionFrameMessage:(CDStruct_a9c4f86c *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100105858
- (void)_populateWiFiConnectionQualityMessageWithScorecard:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100102f94
- (void)_populateAlwaysOnWiFiReportMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001021d8
- (void)_populateBlacklistingEventMessage:(CDStruct_853d9d76 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101e7c
- (void)_populateAssocHistoryMessageWithString:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101134
- (void)_populateSoftErrorCountersMessage:(struct softErrorCounters *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100f28
- (void)_getPrepopulatedMessageWithID:(unsigned int)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100c9c
- (void)_populateRetStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100b18
- (void)_populateLprxStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100994
- (void)_populateWcpsStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100810
- (void)_populateScanStatsMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010010068c
- (void)_populateAssocInfoMessageAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100508
- (void)_populatePHClientMessage:(CDStruct_f2c29a7a *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001001f0
- (void)_populateSoftAPMessage:(CDStruct_1fc1c3b2 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ffd00
- (void)_populateWoWBlacklistHistoryMessage:(CDStruct_46441b56 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ff14c
- (void)_populateNetworkTransitionCumulativeMessage:(struct __WiFiMetricsManagerNetworkTransitionCumulative *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fef1c
- (void)_populateNetworkTransitionSessionRecordsMessage:(CDStruct_32e92d78 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe8e0
- (void)_populateAutoJoinCumulativeMessage:(CDStruct_5478c3ab *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe4cc
- (void)_populateAutoJoinSessionRecordsMessage:(CDStruct_0b3a2485 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd89c
- (void)_populateTXInhibitEventMessage:(CDStruct_b31ca263 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd6d4
- (void)_populateUserBlacklistingMessage:(CDStruct_d0632ee2 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd3dc
- (void)_populateRoamStatusMessage:(CDStruct_0031ec31 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fca84
- (void)_populateLastSSIDInfoStatsMessage:(CDStruct_5bae0375 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc804
- (void)_populateActiveProbeStatsMessage:(CDStruct_0307c87d *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc3c4
- (void)_populateLeakyAPStatsMessage:(CDStruct_1490e47e *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc0cc
- (void)_populateLinkQualityStatsMessage:(CDStruct_b75b73a9 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb478
- (void)_populateKnownNetworksEventMessage:(CDStruct_30ae134f *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb1c8
- (void)_populatePowerStatsUpdateMessage:(CDStruct_cc4e5495 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000faf10
- (void)_populateWifidAvailabilityMessage:(CDStruct_20c13360 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fad00
- (void)_populateWatchdogEvent:(CDStruct_4a093ba1 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f9710
- (void)_populateDeviceCountMessage:(CDStruct_eb5aa7f0 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f948c
- (void)_populateCustomNetworkSettingMessage:(CDStruct_a561fd19 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f9164
- (void)_populateIPV4DHCPLatencyMessage:(CDStruct_4cef2586 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8e5c
- (void)_populateTetheredDeviceOUIMessage:(CDStruct_8356e4f6 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8c60
- (void)_populateHotspotTransportMessage:(CDStruct_f4b747e6 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8a18
- (void)_populateNetworkPrefsMessage:(CDStruct_e0daccdd *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f7eb8
- (void)_populateAssocErrorMessage:(CDStruct_ee00bbfb *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f7a2c
- (void)_populateAWDLUsageMessage:(CDStruct_ab83e539 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f6530
- (void)_populateWoWStateMessage:(CDStruct_b31ca263 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f6368
- (void)_populateInterfaceStatsMessage:(CDStruct_aaf269f3 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f5e80
- (void)_populateHardwareVersionMessage:(CDStruct_1d7abdeb *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f5c74
- (void)_populateLQMHistoryMessage:(CDStruct_c203e5c3 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f58bc
- (void)_populatePowerMessage:(CDStruct_6b48f683 *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f56ec
- (void)_populate11axLinkChangedMessage:(CDStruct_f998206b *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f495c
- (void)_populateLinkChangedMessage:(CDStruct_8e6166fd *)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f39d8
- (id)__copyHashOfSSID:(id)arg1;	// IMP=0x00000001000f37c8
- (id)_initPrivate;	// IMP=0x00000001000f370c
- (id)init;	// IMP=0x00000001000f36c8
- (void)_registerForQueryableMessages;	// IMP=0x00000001000f34a8
- (void)prepareMessageForSubmission:(unsigned int)arg1 withData:(void *)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f2980
- (void)_runReplyBlock:(CDUnknownBlockType)arg1 withMessage:(id)arg2 andError:(id)arg3;	// IMP=0x00000001000f2920
- (void *)_gatherDataForMessageWithIdentifier:(unsigned int)arg1 andArguments:(id)arg2;	// IMP=0x00000001000f26dc
- (void)_triggerQueryableMessageSubmissionOnMasterThread:(unsigned int)arg1 andArguments:(id)arg2;	// IMP=0x00000001000f24dc
- (void)getDeviceAnalyticsConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f22fc
- (void)setDeviceAnalyticsConfiguration:(id)arg1;	// IMP=0x00000001000f219c
- (void)triggerDatapathDiagnosticsNoReply:(id)arg1;	// IMP=0x00000001000f1fe0
- (void)submitGeoServicesMessage:(id)arg1;	// IMP=0x00000001000f1df8
- (void)submitWiFiAnalyticsMessage:(id)arg1;	// IMP=0x00000001000f1c28
- (void)submitMessage:(id)arg1;	// IMP=0x00000001000f1974
- (void)setWiFiManagerQueue:(id)arg1;	// IMP=0x00000001000f18f0
- (void)_registerQueryableMessageWithIdentifier:(unsigned int)arg1;	// IMP=0x00000001000f160c
- (void)_register;	// IMP=0x00000001000f11bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
