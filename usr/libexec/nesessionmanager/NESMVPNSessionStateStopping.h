//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateStopping : NESMVPNSessionState
{
}

- (void)handlePlugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x000000010006b7a4
- (void)handleEstablishIPC;	// IMP=0x000000010006b66c
- (void)handleTimeout;	// IMP=0x000000010006b57c
- (void)handlePlugin:(id)arg1 statusDidChangeToDisconnectedWithReason:(int)arg2;	// IMP=0x000000010006b3f0
- (void)handleClearConfigurationResult:(_Bool)arg1;	// IMP=0x000000010006b108
- (_Bool)handleClearConfiguration;	// IMP=0x000000010006b004
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010006af04
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006ae00
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006ad90
- (id)init;	// IMP=0x000000010006ad54

@end

