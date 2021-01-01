//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMPSetPlaybackPosition.h>

#import "ADMediaRemoteServiceCommand-Protocol.h"

@class NSString;

@interface SAMPSetPlaybackPosition (ADMediaRemote) <ADMediaRemoteServiceCommand>
- (void)_ad_performPreviousItemWithTargetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100131ccc
- (void)_ad_performNextItemWithTargetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100131c7c
- (void)_ad_performSeekToBeginningWithTargetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100131a14
- (void)_ad_performWithMediaRemoteService:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001318f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

