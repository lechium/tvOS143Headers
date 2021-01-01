//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_os_log, _CDLocalContext;

@interface _DASUserRequestedBackupTaskManager : NSObject
{
    _Bool _syncInProgress;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    id <_CDLocalContext> _context;	// 24 = 0x18
    long long _totalClients;	// 32 = 0x20
    NSMutableDictionary *_backupTasks;	// 40 = 0x28
    NSMutableArray *_clientsWithErrors;	// 48 = 0x30
}

+ (id)userRequestedBackupKeyPath;	// IMP=0x0000000100068e90
+ (id)managerWithContext:(id)arg1;	// IMP=0x0000000100068e3c
- (void).cxx_destruct;	// IMP=0x0000000100069954
@property(nonatomic) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(retain, nonatomic) NSMutableArray *clientsWithErrors; // @synthesize clientsWithErrors=_clientsWithErrors;
@property(retain, nonatomic) NSMutableDictionary *backupTasks; // @synthesize backupTasks=_backupTasks;
@property(nonatomic) long long totalClients; // @synthesize totalClients=_totalClients;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)syncRequested;	// IMP=0x00000001000698d0
- (void)_queue_obtainPendingBackupTasks;	// IMP=0x0000000100069720
- (_Bool)activityEligibleForRunning:(id)arg1;	// IMP=0x0000000100069644
- (void)reportActivityNoLongerRunning:(id)arg1;	// IMP=0x00000001000691a4
- (void)reportActivityRunning:(id)arg1;	// IMP=0x0000000100069040
- (void)activitySubmitted:(id)arg1;	// IMP=0x0000000100068f14
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100068ce0

@end
