//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UMEventSubmitter;
@protocol OS_dispatch_queue;

@interface UMEventRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_submitQueue;	// 16 = 0x10
    _Bool _submissionPending;	// 24 = 0x18
    NSString *_installType;	// 32 = 0x20
    UMEventSubmitter *_submitter;	// 40 = 0x28
    NSString *_uuid;	// 48 = 0x30
    NSString *_baseServerURL;	// 56 = 0x38
    NSString *_targetOSVersion;	// 64 = 0x40
    NSNumber *_installTonight;	// 72 = 0x48
    NSString *_context;	// 80 = 0x50
    NSString *_systemMountPoint;	// 88 = 0x58
    NSString *_dataMountPoint;	// 96 = 0x60
    NSString *_updateMountPoint;	// 104 = 0x68
    NSString *_nvramPath;	// 112 = 0x70
    NSDictionary *_eventAttributes;	// 120 = 0x78
    NSString *_brainVersion;	// 128 = 0x80
    NSDictionary *_nvramDict;	// 136 = 0x88
    NSMutableDictionary *_attributeDict;	// 144 = 0x90
}

+ (_Bool)diagnosticsAndUsageAllowed:(id)arg1;	// IMP=0x0000000100014e78
+ (id)recorderWithOptions:(id)arg1;	// IMP=0x0000000100014d34
+ (id)recorder;	// IMP=0x0000000100014d1c
@property(retain, nonatomic) NSMutableDictionary *attributeDict; // @synthesize attributeDict=_attributeDict;
@property(retain, nonatomic) NSDictionary *nvramDict; // @synthesize nvramDict=_nvramDict;
@property(copy, nonatomic) NSString *brainVersion; // @synthesize brainVersion=_brainVersion;
@property(retain, nonatomic) NSDictionary *eventAttributes; // @synthesize eventAttributes=_eventAttributes;
@property(retain, nonatomic) NSString *nvramPath; // @synthesize nvramPath=_nvramPath;
@property(retain, nonatomic) NSString *updateMountPoint; // @synthesize updateMountPoint=_updateMountPoint;
@property(retain, nonatomic) NSString *dataMountPoint; // @synthesize dataMountPoint=_dataMountPoint;
@property(retain, nonatomic) NSString *systemMountPoint; // @synthesize systemMountPoint=_systemMountPoint;
@property(nonatomic) _Bool submissionPending; // @synthesize submissionPending=_submissionPending;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSNumber *installTonight; // @synthesize installTonight=_installTonight;
@property(copy, nonatomic) NSString *targetOSVersion; // @synthesize targetOSVersion=_targetOSVersion;
@property(copy, nonatomic) NSString *baseServerURL; // @synthesize baseServerURL=_baseServerURL;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) UMEventSubmitter *submitter; // @synthesize submitter=_submitter;
@property(copy, nonatomic) NSString *installType; // @synthesize installType=_installType;
- (void)commitMetadataToPersistentStorage:(id)arg1;	// IMP=0x0000000100019fc0
- (void)commitMetadataToPersistentStorage;	// IMP=0x0000000100019fb0
- (unsigned long long)numUnsubmittedEvents;	// IMP=0x0000000100019f8c
- (id)_loadUnsubmittedEvents;	// IMP=0x0000000100019dac
- (id)_copyUnsubmittedEventsFromDirectory:(id)arg1 skipEventsIfPreviouslySubmittedAndWithinBackoffTime:(_Bool)arg2 previouslySubmittedEventSkipped:(_Bool *)arg3;	// IMP=0x0000000100019940
- (void)submitEventsWithUpdateOptions:(id)arg1;	// IMP=0x0000000100019828
- (void)submitEvents;	// IMP=0x0000000100019818
- (void)submitEventsInBackground:(_Bool)arg1 withOptions:(id)arg2;	// IMP=0x0000000100019200
- (void)submitEventsInBackground:(_Bool)arg1;	// IMP=0x00000001000191f0
- (double)_timeIntervalUntilRetry:(id)arg1;	// IMP=0x0000000100019148
- (void)_submitEvents:(id)arg1 toURL:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100018cbc
- (void)_removeEvents:(id)arg1;	// IMP=0x0000000100018b68
- (_Bool)_updateRetryInformationForEvents:(id)arg1;	// IMP=0x00000001000188dc
- (void)_scheduleEventSubmissionRetry;	// IMP=0x00000001000187bc
- (void)_submitIndividualEvents:(id)arg1 toURL:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001859c
- (id)_submissionBodyForEvents:(id)arg1;	// IMP=0x00000001000183b4
- (id)_copyEscapeStringsForEventData:(id)arg1;	// IMP=0x00000001000181a4
- (void)recordPostUpdateEvent:(id)arg1 additionalInfo:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017a78
- (void)recordPostUpdateEvent:(id)arg1 additionalInfo:(id)arg2;	// IMP=0x0000000100017a68
- (void)recordEvent:(id)arg1 information:(id)arg2;	// IMP=0x0000000100017a58
- (void)recordEvent:(id)arg1 information:(id)arg2 installIsComplete:(_Bool)arg3;	// IMP=0x0000000100017a10
- (void)removePersistentAttributeKey:(id)arg1;	// IMP=0x000000010001799c
- (void)addPersistentAttribute:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000178bc
- (void)stopRecordingInstall;	// IMP=0x00000001000178b0
- (void)startRecordingInstall:(id)arg1;	// IMP=0x000000010001758c
- (void)_writeInfoFile;	// IMP=0x00000001000173d8
- (void)_cleanupInstallState;	// IMP=0x0000000100017054
- (_Bool)_installInProgressAfterApply;	// IMP=0x0000000100017010
- (_Bool)_installInProgress;	// IMP=0x0000000100016fb0
- (_Bool)_setNvramValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100016f50
- (id)_nvramValue:(id)arg1;	// IMP=0x0000000100016e28
- (void)_recordEvent:(id)arg1 information:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010001678c
- (void)_saveEvent:(id)arg1;	// IMP=0x00000001000163ec
- (long long)_uptime;	// IMP=0x0000000100016388
- (id)_currentTimeInMilliseconds;	// IMP=0x0000000100016320
- (id)_currentOSVersion;	// IMP=0x000000010001630c
- (id)_getDiskUsage;	// IMP=0x0000000100015da4
- (id)_getGestaltDiskUsageKey:(struct __CFString *)arg1 inDictionary:(id)arg2;	// IMP=0x0000000100015d50
- (id)_getGestaltString:(struct __CFString *)arg1;	// IMP=0x0000000100015d3c
- (id)_getGestaltString:(struct __CFString *)arg1 default:(id)arg2;	// IMP=0x0000000100015ce8
- (id)_getGestaltValue:(struct __CFString *)arg1;	// IMP=0x0000000100015ccc
- (id)_eventDirectoryWithMountPoint:(id)arg1;	// IMP=0x0000000100015adc
- (id)_eventDirectory;	// IMP=0x0000000100015aa4
- (id)_legacyEventDirectory;	// IMP=0x0000000100015a4c
- (_Bool)_setPermissionsOnURL:(id)arg1;	// IMP=0x00000001000158cc
- (double)_retryInterval;	// IMP=0x00000001000158c0
- (id)_installInfoFile;	// IMP=0x0000000100015894
- (id)_legacyInstallInfoFile;	// IMP=0x0000000100015868
- (id)_supportDirectoryWithMountPoint:(id)arg1;	// IMP=0x00000001000156f8
- (id)_supportDirectory;	// IMP=0x00000001000156b0
- (id)_legacySupportDirectory;	// IMP=0x0000000100015658
- (id)_serverURL;	// IMP=0x0000000100015578
- (int)_serverCompatibilityVersion;	// IMP=0x0000000100015570
- (id)_topic;	// IMP=0x0000000100015564
- (id)_defaults;	// IMP=0x0000000100015534
- (void)dealloc;	// IMP=0x000000010001546c
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000100015000
- (id)init;	// IMP=0x0000000100014ff0

@end
