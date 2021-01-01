//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApplicationRepair-Protocol.h"

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, TaskQueue;
@protocol ApplicationRepairDelegate;

@interface VPPRepair : NSObject <ApplicationRepair>
{
    ApplicationProxy *_application;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSString *_logUUID;	// 24 = 0x18
    ASDRepairOptions *_options;	// 32 = 0x20
    TaskQueue *_taskQueue;	// 40 = 0x28
    id <ApplicationRepairDelegate> _delegate;	// 48 = 0x30
    NSArray *_repairedBundleIDs;	// 56 = 0x38
}

+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x000000010025fd78
- (void).cxx_destruct;	// IMP=0x0000000100260800
- (_Bool)_handleVPPRecoveryWithOutError:(id *)arg1;	// IMP=0x000000010026046c
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025ff84
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x000000010025fd0c
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithApplication:(id)arg1 options:(id)arg2;	// IMP=0x000000010025faa0
- (id)init;	// IMP=0x000000010025fa64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

