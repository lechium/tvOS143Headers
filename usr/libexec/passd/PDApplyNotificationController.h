//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDApplyManagerObserver-Protocol.h"

@class NSString, PDApplyManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager;
@protocol OS_dispatch_queue;

@interface PDApplyNotificationController : NSObject <PDApplyManagerObserver>
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDApplyManager *_applyManager;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)_expiryReminderNotificationDateFromExpiryDate:(id)arg1;	// IMP=0x00000001001de5b0
+ (id)_acceptReminderNotificationDate;	// IMP=0x00000001001de4d8
- (void).cxx_destruct;	// IMP=0x00000001001df878
- (id)_cutomRouteForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x00000001001df7e4
- (void)_queue_notificationForNewApplication:(id)arg1 oldApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00000001001dea70
- (void)notificationForNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x00000001001de884
- (void)_queue_removeAllNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x00000001001de820
- (void)_queue_removeNonTerminalNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x00000001001de724
- (id)_expiryReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00000001001de578
- (id)_acceptReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00000001001de4a0
- (id)_approvedIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00000001001de468
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x00000001001de398
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x00000001001de348
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x00000001001de334
- (void)postApplyStateRequiresUserInteractionNotificationWithNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x00000001001ddf70
- (id)initWithApplyManager:(id)arg1 userNotificationManager:(id)arg2 paymentWebServiceCoordinator:(id)arg3;	// IMP=0x00000001001dde4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

