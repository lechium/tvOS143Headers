//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCRequestToken.h"

#import "XPCNotificationClient-Protocol.h"

@class NSString;

@interface _XPCInternalRequestToken : XPCRequestToken <XPCNotificationClient>
{
}

- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010024baac
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010024baa8
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024ba2c
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024b984
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024b7e4
- (id)notificationClient;	// IMP=0x000000010024b7e0
- (_Bool)isInternal;	// IMP=0x000000010024b7d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

