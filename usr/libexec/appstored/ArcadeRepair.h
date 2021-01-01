//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApplicationRepair-Protocol.h"

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, TaskQueue;
@protocol ApplicationRepairDelegate;

@interface ArcadeRepair : NSObject <ApplicationRepair>
{
    ApplicationProxy *_application;	// 8 = 0x8
    NSString *_logUUID;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    ASDRepairOptions *_options;	// 32 = 0x20
    double _startTime;	// 40 = 0x28
    TaskQueue *_taskQueue;	// 48 = 0x30
    id <ApplicationRepairDelegate> _delegate;	// 56 = 0x38
    NSArray *_repairedBundleIDs;	// 64 = 0x40
}

+ (int)_fairplayStatusForApplication:(id)arg1 options:(id)arg2;	// IMP=0x000000010010f7c4
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x000000010010f234
- (void).cxx_destruct;	// IMP=0x0000000100112080
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showAllOcelotApps:(id)arg1;	// IMP=0x0000000100111f44
- (void)_showTimeoutDialogWithRetryTimeout:(double)arg1;	// IMP=0x0000000100111ac8
- (void)_showUpsell;	// IMP=0x0000000100111788
- (void)_showOKDialogWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010011166c
- (void)_showOfflineExpiredSubscriptionDialog;	// IMP=0x0000000100111560
- (void)_showOfflineDialog;	// IMP=0x0000000100111454
- (void)_showLoginDialog;	// IMP=0x00000001001110b4
- (_Bool)_switchUserFromUserName:(id)arg1 forAccount:(id)arg2;	// IMP=0x0000000100110f94
- (void)_handleAppRemovedFromProgram;	// IMP=0x0000000100110aac
- (_Bool)_handleSbsyncAndRepairWithTimeout:(double)arg1 retryTimeout:(double)arg2;	// IMP=0x000000010010ff1c
- (_Bool)_handleAuthenication;	// IMP=0x000000010010fc80
- (_Bool)_handleRecoveryWithTimeout:(double)arg1 retryTimeout:(double)arg2;	// IMP=0x000000010010f924
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x000000010010f54c
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x000000010010f1c8
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
- (id)initWithApplication:(id)arg1 options:(id)arg2;	// IMP=0x000000010010efb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

