//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "WAAWDMessageSubmitterConfigChangedDelegate-Protocol.h"
#import "WAIOReporterPersistenceDelegate-Protocol.h"
#import "WAIOReporterPopulatorMessageDelegate-Protocol.h"
#import "WAQueryableMessageDelegate-Protocol.h"
#import "WAXPCConnectionDelegate-Protocol.h"

@class AnalyticsProcessor, DPSQuickRecoveryRecommendationEngine, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSXPCListener, RecommendationEngine, WACoreCapture, WAIOReporterMessagePopulator, WAMessageAWDStore;
@protocol OS_dispatch_queue;

@interface WAEngine : NSObject <WAQueryableMessageDelegate, WAIOReporterPopulatorMessageDelegate, WAAWDMessageSubmitterConfigChangedDelegate, WAIOReporterPersistenceDelegate, NSXPCListenerDelegate, WAXPCConnectionDelegate>
{
    _Bool _dpsStudyInProgress;	// 8 = 0x8
    _Bool _dpsCurrentlyGatheringConsecutiveSamples;	// 9 = 0x9
    _Bool _slowWiFiStudyInProgress;	// 10 = 0xa
    _Bool _analyticsProcessorIsReady;	// 11 = 0xb
    int _dpsAction;	// 12 = 0xc
    int _keybagToken;	// 16 = 0x10
    NSMutableDictionary *_submitterMap;	// 24 = 0x18
    NSMutableDictionary *_queryableMessageRegistrationMap;	// 32 = 0x20
    NSMutableDictionary *_processTokenToGroupTypeMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_engineQ;	// 48 = 0x30
    WAMessageAWDStore *_messageStore;	// 56 = 0x38
    WAIOReporterMessagePopulator *_iorMessagePopulator;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    NSMutableDictionary *_processTokenToXPCConnectionMap;	// 80 = 0x50
    NSMutableArray *_pendingUntokenedConnections;	// 88 = 0x58
    NSMutableDictionary *_cachedModelObjectsKeyToMessageMap;	// 96 = 0x60
    NSMutableDictionary *_interfaceNameToApple80211InstanceMap;	// 104 = 0x68
    NSString *_infraInterfaceName;	// 112 = 0x70
    RecommendationEngine *_recommendationEngine;	// 120 = 0x78
    DPSQuickRecoveryRecommendationEngine *_dpsQuickRecoveryEngine;	// 128 = 0x80
    NSString *_wifiChipSet;	// 136 = 0x88
    NSDate *_dpsNotificationRecievedTime;	// 144 = 0x90
    WACoreCapture *_coreCaptureControl;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_studyQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dpsReadWriteSerialQueue;	// 168 = 0xa8
    NSMutableArray *_dpsnToAppend;	// 176 = 0xb0
    NSMutableArray *_dpsapToAppend;	// 184 = 0xb8
    NSMutableArray *_dpscsToAppend;	// 192 = 0xc0
    NSMutableArray *_assocDiffToAppend;	// 200 = 0xc8
    NSMutableArray *_swfnToAppend;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_fileHandlingQ;	// 216 = 0xd8
    NSURL *_wifianalyticsTmpDir;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_mutexQueue;	// 232 = 0xe8
    AnalyticsProcessor *_analyticsProcessor;	// 240 = 0xf0
    double _analyticsProcessingTimeIntervalSecs;	// 248 = 0xf8
    double _analyticsAgeOutTimeIntervalSecs;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000010004fc70
@property(nonatomic) int keybagToken; // @synthesize keybagToken=_keybagToken;
@property(nonatomic) _Bool analyticsProcessorIsReady; // @synthesize analyticsProcessorIsReady=_analyticsProcessorIsReady;
@property(nonatomic) double analyticsAgeOutTimeIntervalSecs; // @synthesize analyticsAgeOutTimeIntervalSecs=_analyticsAgeOutTimeIntervalSecs;
@property(nonatomic) double analyticsProcessingTimeIntervalSecs; // @synthesize analyticsProcessingTimeIntervalSecs=_analyticsProcessingTimeIntervalSecs;
@property(retain, nonatomic) AnalyticsProcessor *analyticsProcessor; // @synthesize analyticsProcessor=_analyticsProcessor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutexQueue; // @synthesize mutexQueue=_mutexQueue;
@property(retain, nonatomic) NSURL *wifianalyticsTmpDir; // @synthesize wifianalyticsTmpDir=_wifianalyticsTmpDir;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileHandlingQ; // @synthesize fileHandlingQ=_fileHandlingQ;
@property(nonatomic) int dpsAction; // @synthesize dpsAction=_dpsAction;
@property(retain, nonatomic) NSMutableArray *swfnToAppend; // @synthesize swfnToAppend=_swfnToAppend;
@property(retain, nonatomic) NSMutableArray *assocDiffToAppend; // @synthesize assocDiffToAppend=_assocDiffToAppend;
@property(retain, nonatomic) NSMutableArray *dpscsToAppend; // @synthesize dpscsToAppend=_dpscsToAppend;
@property(retain, nonatomic) NSMutableArray *dpsapToAppend; // @synthesize dpsapToAppend=_dpsapToAppend;
@property(retain, nonatomic) NSMutableArray *dpsnToAppend; // @synthesize dpsnToAppend=_dpsnToAppend;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dpsReadWriteSerialQueue; // @synthesize dpsReadWriteSerialQueue=_dpsReadWriteSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *studyQueue; // @synthesize studyQueue=_studyQueue;
@property(retain, nonatomic) WACoreCapture *coreCaptureControl; // @synthesize coreCaptureControl=_coreCaptureControl;
@property(retain, nonatomic) NSDate *dpsNotificationRecievedTime; // @synthesize dpsNotificationRecievedTime=_dpsNotificationRecievedTime;
@property(retain, nonatomic) NSString *wifiChipSet; // @synthesize wifiChipSet=_wifiChipSet;
@property(retain, nonatomic) DPSQuickRecoveryRecommendationEngine *dpsQuickRecoveryEngine; // @synthesize dpsQuickRecoveryEngine=_dpsQuickRecoveryEngine;
@property(nonatomic) _Bool slowWiFiStudyInProgress; // @synthesize slowWiFiStudyInProgress=_slowWiFiStudyInProgress;
@property(nonatomic) _Bool dpsCurrentlyGatheringConsecutiveSamples; // @synthesize dpsCurrentlyGatheringConsecutiveSamples=_dpsCurrentlyGatheringConsecutiveSamples;
@property(nonatomic) _Bool dpsStudyInProgress; // @synthesize dpsStudyInProgress=_dpsStudyInProgress;
@property(retain, nonatomic) RecommendationEngine *recommendationEngine; // @synthesize recommendationEngine=_recommendationEngine;
@property(retain, nonatomic) NSString *infraInterfaceName; // @synthesize infraInterfaceName=_infraInterfaceName;
@property(retain, nonatomic) NSMutableDictionary *interfaceNameToApple80211InstanceMap; // @synthesize interfaceNameToApple80211InstanceMap=_interfaceNameToApple80211InstanceMap;
@property(retain, nonatomic) NSMutableDictionary *cachedModelObjectsKeyToMessageMap; // @synthesize cachedModelObjectsKeyToMessageMap=_cachedModelObjectsKeyToMessageMap;
@property(retain, nonatomic) NSMutableArray *pendingUntokenedConnections; // @synthesize pendingUntokenedConnections=_pendingUntokenedConnections;
@property(retain, nonatomic) NSMutableDictionary *processTokenToXPCConnectionMap; // @synthesize processTokenToXPCConnectionMap=_processTokenToXPCConnectionMap;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) WAIOReporterMessagePopulator *iorMessagePopulator; // @synthesize iorMessagePopulator=_iorMessagePopulator;
@property(retain, nonatomic) WAMessageAWDStore *messageStore; // @synthesize messageStore=_messageStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQ; // @synthesize engineQ=_engineQ;
@property(retain, nonatomic) NSMutableDictionary *processTokenToGroupTypeMap; // @synthesize processTokenToGroupTypeMap=_processTokenToGroupTypeMap;
@property(retain, nonatomic) NSMutableDictionary *queryableMessageRegistrationMap; // @synthesize queryableMessageRegistrationMap=_queryableMessageRegistrationMap;
@property(retain, nonatomic) NSMutableDictionary *submitterMap; // @synthesize submitterMap=_submitterMap;
- (void)processWiFiAnalyticsMessageJSONFilesInTmpDir;	// IMP=0x000000010004f0f0
- (_Bool)canProcessWiFiAnalyticsMessageJSONFiles:(id)arg1;	// IMP=0x000000010004ee24
- (id)_summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2;	// IMP=0x000000010004ed9c
- (id)getValueForKeyFromUserDefaults:(id)arg1;	// IMP=0x000000010004ec78
- (void)setValueForKeyToUserDefaults:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010004eb38
- (id)_getDeviceAnalyticsConfiguration;	// IMP=0x000000010004e938
- (id)_setDeviceAnalyticsConfiguration:(id)arg1;	// IMP=0x000000010004e2a8
- (void)_trigger11AXPerfStudyAndReply:(CDUnknownBlockType)arg1 forProcessWithToken:(id)arg2 forInterface:(id)arg3;	// IMP=0x000000010004ce14
- (void)persist;	// IMP=0x000000010004ce08
- (void)configDidChangeForGroupType:(long long)arg1 withConfiguredMetricIDs:(id)arg2 andInterestedMetricIDs:(id)arg3;	// IMP=0x000000010004c68c
- (id)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 forProcessWithToken:(id)arg3;	// IMP=0x000000010004c4d8
- (void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004c1f8
- (void)_triggerSlowWiFiStudy:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004bb3c
- (void)gatherConsecutiveLinkQualitySamples:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004a33c
- (void)_triggerDPSStudy:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000490dc
- (void)gatherConsecutiveDatapathReadings:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045904
- (void)populateChannelInfo:(id)arg1;	// IMP=0x0000000100045598
- (void)_triggerQueryForNWActivity:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004417c
- (void)_examinePeerMessageForIntegrity:(id)arg1;	// IMP=0x0000000100043b4c
- (void)_trapFWWithReason:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043820
- (void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043570
- (void)_purgeGroupTypeIfNecessary:(long long)arg1;	// IMP=0x00000001000430f4
- (void)_informQueryableHandlersOfConnectionWithProcessToken:(id)arg1;	// IMP=0x0000000100042f68
- (void)_clearMessageStoreAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042edc
- (void)_killDaemonAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042e5c
- (id)_registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3;	// IMP=0x0000000100042638
- (id)_getMessageByUUID:(id)arg1 forProcessToken:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000424c4
- (id)_submitWiFiAnalyticsMessage:(id)arg1;	// IMP=0x00000001000422b8
- (void)_processWAMessageForLogging:(id)arg1;	// IMP=0x0000000100041eec
- (void)_processWAMessageForCoreAnalytics:(id)arg1;	// IMP=0x0000000100041b68
- (id)_submitMessage:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3;	// IMP=0x00000001000416a4
- (id)_ingestMessage:(id)arg1 forProcessToken:(id)arg2;	// IMP=0x00000001000415c8
- (void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3 shouldCheckForPrePopulation:(_Bool)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000411a4
- (id)_cachedModelObjectsMessageForGroupType:(long long)arg1 key:(id)arg2;	// IMP=0x0000000100040dec
- (id)_getMessagesModelForProcessToken:(id)arg1 groupType:(long long)arg2 andError:(id *)arg3;	// IMP=0x0000000100040834
- (void)_initSubmitterAndQueryableRegistrationForProcessToken:(id)arg1 andGroupType:(long long)arg2;	// IMP=0x000000010003fe98
- (void)_removePersistenceFile;	// IMP=0x000000010003f8fc
- (void)_unpersist;	// IMP=0x000000010003db7c
- (void)_persist;	// IMP=0x000000010003c8b8
- (void)_prepareToTerminate;	// IMP=0x000000010003c82c
- (void)prepareToTerminateAnyReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010003c628
- (void)sendWakeUpNotificationForProcessWithName:(id)arg1;	// IMP=0x000000010003c3e0
- (id)getXPCConnectionForProcessToken:(id)arg1;	// IMP=0x000000010003c244
- (void)xpcConnection:(id)arg1 summarizeDeviceAnalyticsForNetwork:(id)arg2 maxAgeInDays:(unsigned long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010003becc
- (void)xpcConnection:(id)arg1 getDeviceAnalyticsConfigurationAndReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003bb9c
- (void)xpcConnection:(id)arg1 setDeviceAnalyticsConfiguration:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b848
- (void)xpcConnection:(id)arg1 trigger11axPerfStudyAndReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b434
- (void)xpcConnection:(id)arg1 clientConfigChangeDelegateSetForGroupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b040
- (void)xpcConnection:(id)arg1 triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ac98
- (void)xpcConnection:(id)arg1 triggerQueryForNWActivity:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a920
- (void)xpcConnection:(id)arg1 trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a564
- (void)xpcConnection:(id)arg1 clearMessageStoreAndReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a19c
- (void)xpcConnection:(id)arg1 killDaemonAndReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039dd8
- (void)xpcConnection:(id)arg1 getMessageForUUID:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039a5c
- (void)xpcConnection:(id)arg1 getNewMessageForKey:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000395a4
- (void)xpcConnection:(id)arg1 registerMessageGroup:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038d54
- (void)xpcConnection:(id)arg1 registerForQueryableMessageWithidentifierDict:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100038a5c
- (void)xpcConnection:(id)arg1 getMessagesModelForGroupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003866c
- (void)xpcConnection:(id)arg1 ingestMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038310
- (void)xpcConnection:(id)arg1 submitWiFiAnalyticsMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037fbc
- (void)xpcConnection:(id)arg1 submitMessage:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100037b74
- (void)xpcConnection:(id)arg1 establishConnectionWithToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036de0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100036b34
- (_Bool)queryInfraInterfaceInstanceAndChip;	// IMP=0x00000001000363ec
- (void)run;	// IMP=0x00000001000362f4
- (id)wifianalyticsTmpDirectory;	// IMP=0x0000000100035ff4
- (id)init;	// IMP=0x0000000100035a7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

