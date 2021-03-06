//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDPhoneCallObserverDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class MRDPhoneCallObserver, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MRDRemoteControlServer : NSObject <MRDPhoneCallObserverDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_commandQueuesForDisplayIDs;	// 16 = 0x10
    NSMutableSet *_pendingSendPlaybackSessionDisplayIDs;	// 24 = 0x18
    NSMutableDictionary *_remoteControlContexts;	// 32 = 0x20
    MRDPhoneCallObserver *_callObserver;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_remoteAlertWorkerQueue;	// 48 = 0x30
    int _fadeOutNotificationToken;	// 56 = 0x38
    NSMutableDictionary *_redirectionCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100011550
- (void)_cleanUpPersistedSessionForSessionPreloadCommand:(id)arg1;	// IMP=0x0000000100011064
- (id)_persistPlaybackSessionAndUpdateOptionsForSessionPreloadCommand:(id)arg1 forClient:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100010ae8
- (void)_performCommandProcessingAfterSend:(id)arg1;	// IMP=0x0000000100010a94
- (id)_resolveCommandBeforeSend:(id)arg1 toClient:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000109f0
- (void)_broadcastNotificationsForCommand:(id)arg1;	// IMP=0x00000001000108b8
- (_Bool)_isCommandCacheable:(unsigned int)arg1;	// IMP=0x0000000100010894
- (id)_createBroadcastCommandPlayerPathForClient:(id)arg1;	// IMP=0x00000001000107c0
- (id)_createBroadcastCommandResponseFromStatuses:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100010460
- (_Bool)_applicationIsRunning:(id)arg1;	// IMP=0x00000001000102a4
- (void)_shouldIgnoreCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ff84
- (id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1;	// IMP=0x000000010000fd44
- (id)_remoteControlContextForCommand:(id)arg1;	// IMP=0x000000010000fac4
- (id)_destinationClientForRemoteControlCommand:(id)arg1;	// IMP=0x000000010000f818
- (id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1;	// IMP=0x000000010000f6dc
- (id)_enqueuedCommandsForDisplayID:(id)arg1;	// IMP=0x000000010000f5b4
- (void)_clearAllQueuedCommandsForReason:(id)arg1;	// IMP=0x000000010000f230
- (void)_clearQueuedCommandsForApplicationWithDisplayID:(id)arg1;	// IMP=0x000000010000ef4c
- (void)_sendQueuedCommandsForDestinationClient:(id)arg1;	// IMP=0x000000010000eb68
- (void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2;	// IMP=0x000000010000e5d0
- (void)_enqueueCommand:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000dbbc
- (void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d5a8
- (void)_sendExternalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d3ec
- (void)_sendLocalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cd74
- (void)_forwardCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cc9c
- (void)phoneCallObserver:(id)arg1 callDidChange:(id)arg2;	// IMP=0x000000010000cc04
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000010000ca8c
- (void)_clientCanBeNowPlayingAppNotification:(id)arg1;	// IMP=0x000000010000ca2c
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000c0c0
- (void)_handleSendPlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000bf5c
- (void)_handleSendPlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000bde8
- (void)_handleSendPlaybackSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b684
- (void)_handleGetPendingCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b21c
- (void)_handlePresentMediaControlsLanguageOptionsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b218
- (void)_handleDismissMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b214
- (void)_handlePresentMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b210
- (void)_handlePrewarmMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000b20c
- (void)_handleBroadcastCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000afbc
- (void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000aa50
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010000a964
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010000a8d8
@property(readonly, nonatomic) NSArray *remoteControlClients;
- (void)clearContextsForClient:(id)arg1;	// IMP=0x000000010000a484
- (void)sendRemoteControlCommand:(id)arg1 toClients:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000980c
- (void)broadcastRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009704
- (void)broadcastRemoteControlCommand:(id)arg1;	// IMP=0x00000001000096f4
- (void)sendRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000084d0
- (void)sendRemoteControlCommand:(id)arg1;	// IMP=0x00000001000084c0
- (void)dealloc;	// IMP=0x0000000100008434
- (id)init;	// IMP=0x0000000100008230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

