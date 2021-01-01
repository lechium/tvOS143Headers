//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateUpdating : NESMVPNSessionState
{
}

- (_Bool)handleClearConfiguration;	// IMP=0x000000010006cb78
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006ca74
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectingWithReason:(int)arg2;	// IMP=0x000000010006c938
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x000000010006c7c0
- (void)handleRestart;	// IMP=0x000000010006c6c0
- (void)handleUpdateConfiguration;	// IMP=0x000000010006c5c0
- (_Bool)handleSleep;	// IMP=0x000000010006c4bc
- (void)handleStop;	// IMP=0x000000010006c3bc
- (void)handleTimeout;	// IMP=0x000000010006c348
- (void)handleEstablishIPC;	// IMP=0x000000010006c210
- (void)leave;	// IMP=0x000000010006c124
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006c078
- (id)init;	// IMP=0x000000010006c03c

@end
