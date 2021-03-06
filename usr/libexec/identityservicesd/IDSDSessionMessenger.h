//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSConnection, IDSDSessionSharedState, NSNumber;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionMessenger : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _alwaysSkipSelf;	// 68 = 0x44
    APSConnection *_apsConnection;	// 72 = 0x48
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 80 = 0x50
    NSNumber *_remoteUsePhoneContinuityLocalMessage;	// 88 = 0x58
    IDSDSessionSharedState *_sharedState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100073970
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(retain, nonatomic) NSNumber *remoteUsePhoneContinuityLocalMessage; // @synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
- (void)sendReinitiateMessageWithSubcommand:(long long)arg1;	// IMP=0x0000000100072fd8
- (void)receivedEndMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100072a0c
- (void)receivedSessionMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x000000010007247c
- (_Bool)_canSendMessageLocally:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x0000000100072090
- (void)_sendSinglePathMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 forceLocalDelivery:(_Bool)arg4 messageGUID:(id)arg5 fromID:(id)arg6 willSendBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000100070b7c
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4 willSendBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010007052c
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4;	// IMP=0x0000000100070420
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x000000010007033c
- (void)sendMessage:(id)arg1 withCommand:(id)arg2;	// IMP=0x0000000100070238
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x000000010006fc00
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2;	// IMP=0x000000010006f8b8

@end

