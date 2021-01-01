//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface NESMProviderManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_event_publisher> *_eventPublisher;	// 16 = 0x10
    NSMutableDictionary *_registrationMap;	// 24 = 0x18
    NSMutableArray *_extensionsBeingUpdated;	// 32 = 0x20
    NSMutableArray *_pendingTerminationOperations;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x000000010000a91c
- (void).cxx_destruct;	// IMP=0x000000010000cf1c
@property(retain) NSMutableArray *pendingTerminationOperations; // @synthesize pendingTerminationOperations=_pendingTerminationOperations;
@property(readonly, nonatomic) NSMutableArray *extensionsBeingUpdated; // @synthesize extensionsBeingUpdated=_extensionsBeingUpdated;
@property(readonly, nonatomic) NSMutableDictionary *registrationMap; // @synthesize registrationMap=_registrationMap;
@property(readonly, nonatomic) NSObject<OS_xpc_event_publisher> *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)getExpectedCDHashesForProvider:(id)arg1;	// IMP=0x000000010000cee0
- (void)createLaunchdJobsForSystemExtensions;	// IMP=0x000000010000cedc
- (void)handleSessionStopped:(id)arg1;	// IMP=0x000000010000ccf8
- (void)activateProviderEventTokensForProvider:(id)arg1 class:(long long)arg2;	// IMP=0x000000010000ca7c
- (_Bool)isProviderRegisteredWithIdentifier:(id)arg1 class:(long long)arg2;	// IMP=0x000000010000c5f4
- (void)fireEvent:(id)arg1 usingRegistrationAtIndex:(unsigned long long)arg2 registrations:(id)arg3 agent:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000bef8
- (void)launchAgent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bb20
- (void)deregisterProviderBundleIdentifier:(id)arg1;	// IMP=0x000000010000bb10
- (void)deregisterProviderEventToken:(unsigned long long)arg1;	// IMP=0x000000010000b824
- (void)registerProviderEventToken:(unsigned long long)arg1 forProvider:(id)arg2 extensionPoint:(id)arg3 expectedCDHashes:(id)arg4;	// IMP=0x000000010000b3c0
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ab04
- (_Bool)isValidExtensionPoint:(id)arg1;	// IMP=0x000000010000aa50
- (id)init;	// IMP=0x000000010000a988

@end

