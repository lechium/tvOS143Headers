//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer;
@protocol OS_dispatch_queue;

@interface MCBackgroundActivityManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _effectiveSettingsChangedNotificationToken;	// 16 = 0x10
    int _passcodeChangedNotificationToken;	// 20 = 0x14
    int _passcodePolicyChangedNotificationToken;	// 24 = 0x18
    MCProfileServiceServer *_server;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001c7a8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int passcodePolicyChangedNotificationToken; // @synthesize passcodePolicyChangedNotificationToken=_passcodePolicyChangedNotificationToken;
@property(nonatomic) int passcodeChangedNotificationToken; // @synthesize passcodeChangedNotificationToken=_passcodeChangedNotificationToken;
@property(nonatomic) int effectiveSettingsChangedNotificationToken; // @synthesize effectiveSettingsChangedNotificationToken=_effectiveSettingsChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (void)_workQueueReschedule:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x000000010001c620
- (void)_rescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x000000010001c4b8
- (void)_workQueueReschedulePasscodeExpiryJob;	// IMP=0x000000010001c2b4
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x000000010001c294
- (void)rescheduleManagedAppValidationJob;	// IMP=0x000000010001c228
- (void)rescheduleProfileJanitorJob;	// IMP=0x000000010001c188
- (void)_handleXPCActivity:(long long)arg1 proposedStartDate:(id)arg2 normalizeStartDate:(_Bool)arg3 proposedGracePeriod:(id)arg4 proposedPriority:(const char *)arg5 repeatingInterval:(id)arg6 requireNetwork:(_Bool)arg7;	// IMP=0x000000010001b9bc
- (id)_jobDescriptionForBackgroundActivityType:(long long)arg1;	// IMP=0x000000010001b95c
- (const char *)_jobNameForBackgroundActivityType:(long long)arg1;	// IMP=0x000000010001b934
- (id)_nextManagedAppValidationDateWithOverride:(id)arg1;	// IMP=0x000000010001b89c
- (id)_nextActivationLockCleanupDate;	// IMP=0x000000010001b81c
- (id)_profileJanitorEarliestExpiryDate;	// IMP=0x000000010001b7d0
- (id)_nextRegularDate;	// IMP=0x000000010001b608
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x000000010001b514
- (void)stop;	// IMP=0x000000010001b4a0
- (void)start;	// IMP=0x000000010001adb4

@end

