//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICDServerNotificationsManagerDelegate;

@interface ICDServerNotificationsManager : NSObject
{
    id <ICDServerNotificationsManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100028b94
@property(readonly, nonatomic) __weak id <ICDServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleFamilyContentDeletionNotification:(id)arg1 streamEvent:(id)arg2;	// IMP=0x00000001000287c4
- (void)_handleApplicationRegistration:(_Bool)arg1 notificationName:(id)arg2 streamEvent:(id)arg3;	// IMP=0x00000001000284f8
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x0000000100028450
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x0000000100028388
- (void)_handleAllowsExplicitContentChangedNotification:(id)arg1;	// IMP=0x0000000100028318
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0000000100028250
- (void)_handleFirstUnlockNotification:(id)arg1;	// IMP=0x00000001000281a8
- (void)_didReceiveTelephonyCenterNotification:(id)arg1;	// IMP=0x000000010002808c
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x0000000100027e58
- (void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2;	// IMP=0x0000000100027cd8
- (void)_tearDownNotifications;	// IMP=0x0000000100027c7c
- (void)_setupNotifications;	// IMP=0x0000000100027888
- (void)dealloc;	// IMP=0x000000010002783c
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000277c0

@end

