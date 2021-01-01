//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCClient.h"

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient : XPCClient
{
    NSMutableSet *_disavowedSessionProperties;	// 48 = 0x30
    NSSet *_downloadPhasesToIgnore;	// 56 = 0x38
    long long _handlerIdentifier;	// 64 = 0x40
    _Bool _sessionsNeedPowerAssertion;	// 72 = 0x48
    _Bool _sessionsShouldBlockOtherDownloads;	// 73 = 0x49
}

- (id)description;	// IMP=0x0000000100026f30
@property _Bool sessionsShouldBlockOtherDownloads;
@property _Bool sessionsNeedPowerAssertion;
@property long long handlerIdentifier;
@property(copy) NSSet *downloadPhasesToIgnore;
- (id)resetDisavowedSessionProperties;	// IMP=0x0000000100026a64
@property(readonly) NSSet *disavowedSessionProperties;
- (void)addDisavowedSessionProperties:(id)arg1;	// IMP=0x000000010002661c
- (void)dealloc;	// IMP=0x00000001000265bc
- (id)initWithInputConnection:(id)arg1;	// IMP=0x0000000100026568

@end

