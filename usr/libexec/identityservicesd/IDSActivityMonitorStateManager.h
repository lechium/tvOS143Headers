//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSActivityPushListenerDelegate-Protocol.h"

@class FTMessageDelivery, IDSActivityPushListener, IDSDAccountController, IDSDServiceController, IDSPeerIDManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSActivityStateProvider;

@interface IDSActivityMonitorStateManager : NSObject <IDSActivityPushListenerDelegate>
{
    NSMutableSet *_listeningOnActivities;	// 8 = 0x8
    NSMutableDictionary *_listenersByActivity;	// 16 = 0x10
    id <IDSActivityStateProvider> _stateProvider;	// 24 = 0x18
    IDSActivityPushListener *_pushListener;	// 32 = 0x20
    FTMessageDelivery *_messageDelivery;	// 40 = 0x28
    IDSPeerIDManager *_peerIDManager;	// 48 = 0x30
    IDSDAccountController *_accountController;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100020af4
- (void).cxx_destruct;	// IMP=0x00000001000253fc
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) IDSActivityPushListener *pushListener; // @synthesize pushListener=_pushListener;
@property(retain, nonatomic) id <IDSActivityStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property(retain, nonatomic) NSMutableSet *listeningOnActivities; // @synthesize listeningOnActivities=_listeningOnActivities;
- (void)pushListener:(id)arg1 receivedUpdatePush:(id)arg2;	// IMP=0x0000000100024268
- (void)_updateListener;	// IMP=0x0000000100024050
- (void)_subscribeForInfo:(id)arg1 withDescription:(id)arg2 resolvedTokens:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000235a0
- (void)unsubscribeForActivity:(id)arg1 subActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022ca0
- (void)subscribeForInfo:(id)arg1 onActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021e98
- (void)ackUpdatesForActivity:(id)arg1;	// IMP=0x0000000100021e04
- (id)currentSubscriptionsForActivity:(id)arg1;	// IMP=0x0000000100021d64
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x0000000100021ca4
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x0000000100021be4
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x0000000100021b1c
- (_Bool)isListeningOnActivity:(id)arg1;	// IMP=0x0000000100021a9c
- (_Bool)stopListeningOnActivity:(id)arg1;	// IMP=0x00000001000218a8
- (_Bool)startListeningOnActivity:(id)arg1;	// IMP=0x00000001000216a4
- (void)removeListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x0000000100021444
- (void)addListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x00000001000212a0
- (void)setup;	// IMP=0x00000001000211f0
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 queue:(id)arg6;	// IMP=0x0000000100020fc0
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 pushListener:(id)arg6;	// IMP=0x0000000100020d98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

