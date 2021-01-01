//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, _ACCAssistiveTouchProviderInfo;

@interface ACCAssistiveTouchServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    _ACCAssistiveTouchProviderInfo *_assistiveTouchProviderInfo;	// 40 = 0x28
    NSMutableDictionary *_registeredAccessoryConnections;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x00000001000e3060
- (void).cxx_destruct;	// IMP=0x00000001000e314c
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(retain, nonatomic) _ACCAssistiveTouchProviderInfo *assistiveTouchProviderInfo; // @synthesize assistiveTouchProviderInfo=_assistiveTouchProviderInfo;
- (void)requestState:(id)arg1;	// IMP=0x00000001000e2e74
- (void)setEnabled:(id)arg1 flag:(_Bool)arg2;	// IMP=0x00000001000e2c70
- (void)accessoryAssistiveTouchDetached:(id)arg1;	// IMP=0x00000001000e2a48
- (void)accessoryAssistiveTouchAttached:(id)arg1;	// IMP=0x00000001000e27f4
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x00000001000e2670
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000e1cec
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e1b6c
- (void)dealloc;	// IMP=0x00000001000e1a2c
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x00000001000e1890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

