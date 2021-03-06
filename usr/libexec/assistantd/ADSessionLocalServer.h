//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADSession.h"

#import "ADSessionLocalConnectionDelegate-Protocol.h"

@class ADSessionLocalConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ADSessionLocalServer : ADSession <ADSessionLocalConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADSessionLocalConnection *_serverConnection;	// 16 = 0x10
    struct __CFDictionary *_commandMap;	// 24 = 0x18
    _Bool _hasActiveRequest;	// 32 = 0x20
    double _requestStartTime;	// 40 = 0x28
    double _loadRetryStartTime;	// 48 = 0x30
    NSString *_sessionInitCommandId;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010029b618
- (void)_sendAssistantDataChangedSinceAnchor:(id)arg1 refId:(id)arg2;	// IMP=0x000000010029b3e8
- (void)siriConnection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x000000010029b2c4
- (void)siriConnectionDidClose:(id)arg1;	// IMP=0x000000010029b1d0
- (void)siriConnection:(id)arg1 didReceiveAceObject:(id)arg2;	// IMP=0x000000010029b0b0
- (void)siriConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 delay:(double)arg3;	// IMP=0x000000010029af9c
- (void)siriConnection:(id)arg1 willStartWithConnectionType:(id)arg2;	// IMP=0x000000010029af40
- (_Bool)_shouldRetry;	// IMP=0x000000010029ae94
- (void)_sendLoadAssistant;	// IMP=0x000000010029aa3c
- (void)_sendServerCommands:(id)arg1;	// IMP=0x000000010029a91c
- (void)_sendServerCommand:(id)arg1;	// IMP=0x000000010029a494
- (void)sendCommand:(id)arg1;	// IMP=0x000000010029a380
- (void)_handleAceObject:(id)arg1;	// IMP=0x000000010029a178
- (void)_saCommandIgnored:(id)arg1;	// IMP=0x000000010029a168
- (void)_saSetConnectionHeader:(id)arg1;	// IMP=0x000000010029a164
- (void)_saAssistantLoaded:(id)arg1;	// IMP=0x0000000100299eb8
- (void)_saCommandFailed:(id)arg1;	// IMP=0x0000000100299c2c
- (void)_assistantFailedForReason:(id)arg1 error:(id)arg2;	// IMP=0x0000000100299b44
- (void)_saAssistantNotReady:(id)arg1;	// IMP=0x0000000100299854
- (_Bool)sessionIsActive;	// IMP=0x0000000100299800
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x0000000100299690
- (void)_resetServerConnectionSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100299568
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x0000000100299550
- (void)_startSession;	// IMP=0x000000010029944c
- (void)_startConnection;	// IMP=0x0000000100299394
- (_Bool)supportsSync;	// IMP=0x000000010029938c
- (void)dealloc;	// IMP=0x0000000100299304
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2 languageCode:(id)arg3 connectionMode:(id)arg4 sharedUserIdentifier:(id)arg5 loggingSharedUserIdentifier:(id)arg6;	// IMP=0x00000001002990d8

@end

