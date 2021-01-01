//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegatePrivate-Protocol.h"

@class NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface UserNotificationManager : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate>
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001001eda24
- (void).cxx_destruct;	// IMP=0x00000001001ee780
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) UNUserNotificationCenter *center; // @synthesize center=_center;
- (void)_requestAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ee314
- (id)_bag;	// IMP=0x00000001001ee0b4
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x00000001001edde8
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001eda90
- (id)init;	// IMP=0x00000001001ed848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
