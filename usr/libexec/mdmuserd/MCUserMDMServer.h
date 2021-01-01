//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "MCJobQueueObserver-Protocol.h"
#import "MCMDMServerProtocol-Protocol.h"
#import "MCUserMDMXPCProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class APSConnection, MCJobQueue, MCTimerContext, NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MCUserMDMServer : NSObject <MCJobQueueObserver, APSConnectionDelegate, NSXPCListenerDelegate, MCUserMDMXPCProtocol, MCMDMServerProtocol>
{
    _Bool _memberQueueIsMDMConfigurationValid;	// 8 = 0x8
    _Bool _memberQueuePinningRevocationCheckRequired;	// 9 = 0x9
    _Bool _memberQueueUseDevelopmentAPNS;	// 10 = 0xa
    _Bool _memberQueueSignMessage;	// 11 = 0xb
    _Bool _memberQueuePollRequested;	// 12 = 0xc
    _Bool _memberQueueUserSwitchAlreadyInitiated;	// 13 = 0xd
    _Bool _memberQueueLastResponseWasNotNow;	// 14 = 0xe
    _Bool _executionQueueIsCheckinInProgress;	// 15 = 0xf
    int _memberQueueAccessRights;	// 16 = 0x10
    int _memberQueuePowerAssertionAssertedNotificationToken;	// 20 = 0x14
    int _memberQueuePowerAssertionDeassertedNotificationToken;	// 24 = 0x18
    int _eventQueueBusyCount;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_memberQueue;	// 32 = 0x20
    APSConnection *_memberQueueDevAPSConnection;	// 40 = 0x28
    APSConnection *_memberQueueProdAPSConnection;	// 48 = 0x30
    NSString *_memberQueueManagingProfileIdentifier;	// 56 = 0x38
    struct __SecIdentity *_memberQueueIdentity;	// 64 = 0x40
    NSArray *_memberQueueServerPinnedSecCertificateRefs;	// 72 = 0x48
    NSArray *_memberQueueCheckInPinnedSecCertificateRefs;	// 80 = 0x50
    NSString *_memberQueueTopic;	// 88 = 0x58
    NSURL *_memberQueueServerURL;	// 96 = 0x60
    NSURL *_memberQueueCheckInURL;	// 104 = 0x68
    NSString *_memberQueuePushMagic;	// 112 = 0x70
    NSData *_memberQueuePushToken;	// 120 = 0x78
    MCTimerContext *_memberQueueTimerContext;	// 128 = 0x80
    NSString *_memberQueueCommandUUID;	// 136 = 0x88
    MCJobQueue *_jobQueue;	// 144 = 0x90
    CDUnknownBlockType _executionQueuePushTokenWaitContinuationBlock;	// 152 = 0x98
}

+ (id)sharedServer;	// IMP=0x0000000100002da4
- (void).cxx_destruct;	// IMP=0x000000010000ddd8
@property(nonatomic) int eventQueueBusyCount; // @synthesize eventQueueBusyCount=_eventQueueBusyCount;
@property(nonatomic) _Bool executionQueueIsCheckinInProgress; // @synthesize executionQueueIsCheckinInProgress=_executionQueueIsCheckinInProgress;
@property(copy, nonatomic) CDUnknownBlockType executionQueuePushTokenWaitContinuationBlock; // @synthesize executionQueuePushTokenWaitContinuationBlock=_executionQueuePushTokenWaitContinuationBlock;
@property(nonatomic) _Bool memberQueueLastResponseWasNotNow; // @synthesize memberQueueLastResponseWasNotNow=_memberQueueLastResponseWasNotNow;
@property(retain, nonatomic) MCJobQueue *jobQueue; // @synthesize jobQueue=_jobQueue;
@property(nonatomic) _Bool memberQueueUserSwitchAlreadyInitiated; // @synthesize memberQueueUserSwitchAlreadyInitiated=_memberQueueUserSwitchAlreadyInitiated;
@property(retain, nonatomic) NSString *memberQueueCommandUUID; // @synthesize memberQueueCommandUUID=_memberQueueCommandUUID;
@property(nonatomic) int memberQueuePowerAssertionDeassertedNotificationToken; // @synthesize memberQueuePowerAssertionDeassertedNotificationToken=_memberQueuePowerAssertionDeassertedNotificationToken;
@property(nonatomic) int memberQueuePowerAssertionAssertedNotificationToken; // @synthesize memberQueuePowerAssertionAssertedNotificationToken=_memberQueuePowerAssertionAssertedNotificationToken;
@property(retain, nonatomic) MCTimerContext *memberQueueTimerContext; // @synthesize memberQueueTimerContext=_memberQueueTimerContext;
@property(nonatomic) _Bool memberQueuePollRequested; // @synthesize memberQueuePollRequested=_memberQueuePollRequested;
@property(retain, nonatomic) NSData *memberQueuePushToken; // @synthesize memberQueuePushToken=_memberQueuePushToken;
@property(nonatomic) _Bool memberQueueSignMessage; // @synthesize memberQueueSignMessage=_memberQueueSignMessage;
@property(retain, nonatomic) NSString *memberQueuePushMagic; // @synthesize memberQueuePushMagic=_memberQueuePushMagic;
@property(nonatomic) _Bool memberQueueUseDevelopmentAPNS; // @synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS;
@property(nonatomic) int memberQueueAccessRights; // @synthesize memberQueueAccessRights=_memberQueueAccessRights;
@property(retain, nonatomic) NSURL *memberQueueCheckInURL; // @synthesize memberQueueCheckInURL=_memberQueueCheckInURL;
@property(retain, nonatomic) NSURL *memberQueueServerURL; // @synthesize memberQueueServerURL=_memberQueueServerURL;
@property(retain, nonatomic) NSString *memberQueueTopic; // @synthesize memberQueueTopic=_memberQueueTopic;
@property(nonatomic) _Bool memberQueuePinningRevocationCheckRequired; // @synthesize memberQueuePinningRevocationCheckRequired=_memberQueuePinningRevocationCheckRequired;
@property(retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs; // @synthesize memberQueueCheckInPinnedSecCertificateRefs=_memberQueueCheckInPinnedSecCertificateRefs;
@property(retain, nonatomic) NSArray *memberQueueServerPinnedSecCertificateRefs; // @synthesize memberQueueServerPinnedSecCertificateRefs=_memberQueueServerPinnedSecCertificateRefs;
@property(nonatomic) struct __SecIdentity *memberQueueIdentity; // @synthesize memberQueueIdentity=_memberQueueIdentity;
@property(retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // @synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier;
@property(nonatomic) _Bool memberQueueIsMDMConfigurationValid; // @synthesize memberQueueIsMDMConfigurationValid=_memberQueueIsMDMConfigurationValid;
@property(retain, nonatomic) APSConnection *memberQueueProdAPSConnection; // @synthesize memberQueueProdAPSConnection=_memberQueueProdAPSConnection;
@property(retain, nonatomic) APSConnection *memberQueueDevAPSConnection; // @synthesize memberQueueDevAPSConnection=_memberQueueDevAPSConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000db5c
- (void)willSwitchUser;	// IMP=0x000000010000d984
- (void)processUserRequest:(id)arg1 encodeResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d628
- (void)userPushTokenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d200
- (void)simulatePushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cd74
- (void)performOutstandingActivities;	// IMP=0x000000010000ca94
- (void)scheduleTokenUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c69c
- (void)notifyNewConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c4f0
- (void)buddyDidFinish;	// IMP=0x000000010000c2fc
- (void)_keybagStateDidChange;	// IMP=0x000000010000c06c
- (_Bool)deviceIsLocked;	// IMP=0x000000010000c040
- (void)_networkReachabilityDidChange;	// IMP=0x000000010000be08
- (void)setUserSwitchAlreadyInitiated:(_Bool)arg1;	// IMP=0x000000010000bd68
- (_Bool)userSwitchAlreadyInitiated;	// IMP=0x000000010000bc48
- (void)setMemberQueueTokenUpdateRequestCount:(int)arg1;	// IMP=0x000000010000baa8
- (void)memberQueueDecrementTokenUpdateRequestCount;	// IMP=0x000000010000ba60
- (void)memberQueueIncrementTokenUpdateRequestCount;	// IMP=0x000000010000ba14
- (int)memberQueueTokenUpdateCount;	// IMP=0x000000010000b968
- (void)setTokenUpdateRequestCountToZero;	// IMP=0x000000010000b8d8
- (int)tokenUpdateCount;	// IMP=0x000000010000b7cc
@property(retain, nonatomic) NSDictionary *memberQueueCachedResponse;
- (void)setCachedResponse:(id)arg1;	// IMP=0x000000010000b58c
- (id)cachedResponse;	// IMP=0x000000010000b3c4
- (_Bool)memberQueueHasOutstandingActivity;	// IMP=0x000000010000b348
- (_Bool)hasOutstandingActivity;	// IMP=0x000000010000b244
- (void)executionQueueHandleRequest:(id)arg1 withMDMParserOfClass:(Class)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ab04
- (void)executionQueueHandleRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a9d8
- (id)responseFromBasicResponse:(id)arg1;	// IMP=0x000000010000a500
- (void)executionQueuePollServerForCommandWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000096c4
- (void)schedulePollingServerForCommandWithAssertion:(id)arg1;	// IMP=0x00000001000094ec
- (void)sendResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008ea8
- (id)_responseDataFromResponseDictionary:(id)arg1;	// IMP=0x0000000100008e88
- (id)_userFieldsForResponse;	// IMP=0x0000000100008e7c
- (id)_idleResponse;	// IMP=0x0000000100008dbc
- (void)executionQueueTellServerAboutDeviceTokenWithAssertion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007cfc
- (id)unauthorizedByServerError;	// IMP=0x0000000100007c64
- (void)executionQueueRemoveMDMProfileWithAssertion:(id)arg1;	// IMP=0x0000000100007910
- (void)pushTokenCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000071c4
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100006718
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100005fc8
- (void)executionQueueCheckForOutstandingActivityIsReachabilityEvent:(_Bool)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005c80
- (void)_executionQueueCheckForOutstandingActivityIsReachabilityEvent:(_Bool)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005a0c
- (_Bool)startOutError:(id *)arg1;	// IMP=0x00000001000055cc
- (_Bool)readConfigurationOutError:(id *)arg1;	// IMP=0x000000010000398c
- (void)memberQueueForgetCurrentConfiguration;	// IMP=0x00000001000037b0
@property(readonly, nonatomic, getter=isTokenUpdateScheduled) _Bool tokenUpdateScheduled;
@property(readonly, nonatomic) _Bool lastResponseWasNotNow;
- (void)setMemberQueuePushMagicMismatchDateMarker:(id)arg1;	// IMP=0x00000001000035c0
- (id)memberQueuePushMagicMismatchDateMarker;	// IMP=0x0000000100003534
- (void)setMemberQueueLastPushTokenHash:(id)arg1;	// IMP=0x0000000100003300
- (id)memberQueueLastPushTokenHash;	// IMP=0x0000000100003274
@property(readonly, copy, nonatomic) NSString *serverName;
@property(readonly, copy, nonatomic) NSString *organizationName;
- (void)setServerURL:(id)arg1;	// IMP=0x0000000100003100
- (id)serverURL;	// IMP=0x0000000100002f4c
- (void)dealloc;	// IMP=0x0000000100002ee8
- (id)init;	// IMP=0x0000000100002e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

