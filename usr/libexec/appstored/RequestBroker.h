//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;

@interface RequestBroker : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x0000000100103e30
+ (id)_allEntitlements;	// IMP=0x0000000100103dd8
- (void).cxx_destruct;	// IMP=0x0000000100104420
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)_startListener;	// IMP=0x00000001001042a0
- (void)_disconnectClient:(id)arg1;	// IMP=0x000000010010421c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100103598
- (id)init;	// IMP=0x0000000100103524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
