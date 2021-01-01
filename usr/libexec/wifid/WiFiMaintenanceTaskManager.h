//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WiFiMaintenanceTaskManager : NSObject
{
    struct __WiFiManager *_wifiManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedWiFiMaintenanceTaskManager;	// IMP=0x000000010001ce40
@property NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct __WiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
- (void)schedulePNLMigration;	// IMP=0x000000010001ddcc
- (void)unSchedulePNLMigration;	// IMP=0x000000010001dd60
- (void)unSchedule3BarsObserver;	// IMP=0x000000010001dcf4
- (void)schedule3BarsObserver;	// IMP=0x000000010001d9b8
- (void)scheduleOutdatedListEntriesCleanUp;	// IMP=0x000000010001d678
- (void)unScheduleOutdatedListEntriesCleanUp;	// IMP=0x000000010001d60c
- (void)scheduleOrphanedSetsCleanUp;	// IMP=0x000000010001d2ec
- (void)unScheduleOrphanedSetsCleanUp;	// IMP=0x000000010001d280
- (void)scheduleGeoTagsPrivacyRetentionPolicyCheck;	// IMP=0x000000010001d200
- (void)unScheduleGeoTagsRetentionPolicyCheck;	// IMP=0x000000010001d194
- (void)scheduleGeoTagsRetentionPolicyCheckForRetentionPeriodInSeconds:(double)arg1 withIntervalPeriodInMinutes:(unsigned long long)arg2;	// IMP=0x000000010001cf48
- (void)unscheduleFromQueue:(id)arg1;	// IMP=0x000000010001cf38
- (void)scheduleWithQueue:(id)arg1;	// IMP=0x000000010001cf2c
- (void)dealloc;	// IMP=0x000000010001cef8

@end

