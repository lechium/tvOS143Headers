//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface INActivity : NSObject
{
    id _target;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcActivity;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_activityQueue;	// 32 = 0x20
    const char *_activityID;	// 40 = 0x28
    NSString *_activityNextFireDateKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100004b0c
@property(copy, nonatomic) NSString *activityNextFireDateKey; // @synthesize activityNextFireDateKey=_activityNextFireDateKey;
@property(nonatomic) const char *activityID; // @synthesize activityID=_activityID;
- (void)_scheduleNextFireForDate:(id)arg1;	// IMP=0x00000001000047d0
- (void)_configureXPCActivityWithCriteria:(id)arg1;	// IMP=0x0000000100004320
- (void)ensureNextActivityWillOccurBeforeDate:(id)arg1;	// IMP=0x0000000100003f74
- (void)stop;	// IMP=0x0000000100003e3c
- (void)checkIn;	// IMP=0x0000000100003dc8
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000100003d28

@end

