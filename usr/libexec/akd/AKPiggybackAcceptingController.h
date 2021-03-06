//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KCJoiningAcceptSecretDelegate-Protocol.h"

@class AKCAPiggybackReporter, AKCircleRequestPayload, KCJoiningAcceptAccountCircleDelegate, KCJoiningAcceptSession, NSString;

@interface AKPiggybackAcceptingController : NSObject <KCJoiningAcceptSecretDelegate>
{
    AKCircleRequestPayload *_lastPayload;	// 8 = 0x8
    AKCircleRequestPayload *_initiatingPayload;	// 16 = 0x10
    long long _verificationAttempts;	// 24 = 0x18
    KCJoiningAcceptAccountCircleDelegate *_circleDelegate;	// 32 = 0x20
    _Bool _verificationFailed;	// 40 = 0x28
    AKCAPiggybackReporter *_piggybackReporter;	// 48 = 0x30
    KCJoiningAcceptSession *_acceptSession;	// 56 = 0x38
}

+ (_Bool)isInCircle;	// IMP=0x000000010000d708
- (void).cxx_destruct;	// IMP=0x000000010000da48
@property(retain, nonatomic) KCJoiningAcceptSession *acceptSession; // @synthesize acceptSession=_acceptSession;
- (void)_releaseAssertion;	// IMP=0x000000010000da30
- (void)_grabLockAssertion;	// IMP=0x000000010000da2c
- (id)_generateSecret;	// IMP=0x000000010000d9e4
- (id)accountCode;	// IMP=0x000000010000d958
- (int)verificationFailed:(id *)arg1;	// IMP=0x000000010000d860
- (id)secret;	// IMP=0x000000010000d76c
- (_Bool)isDone;	// IMP=0x000000010000d75c
- (id)_authKitAccountForPayload:(id)arg1;	// IMP=0x000000010000d65c
- (id)replyContextWithPayload:(id)arg1;	// IMP=0x000000010000d4cc
- (id)_acceptSessionForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000d358
- (void)processPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c8e8
- (id)initWithPiggybackReporter:(id)arg1;	// IMP=0x000000010000c870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

