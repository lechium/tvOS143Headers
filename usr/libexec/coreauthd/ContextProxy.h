//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAContextXPC-Protocol.h"
#import "LAOriginatorProt-Protocol.h"

@class Context, NSString;
@protocol LAContextCallbackXPC;

@interface ContextProxy : NSObject <LAContextXPC, LAOriginatorProt>
{
    CDUnknownBlockType _invalidationBlock;	// 8 = 0x8
    CDUnknownBlockType _checkEntitlementBlock;	// 16 = 0x10
    _Bool _cApiOrigin;	// 24 = 0x18
    int _processId;	// 28 = 0x1c
    unsigned int _userId;	// 32 = 0x20
    int _auditSessionId;	// 36 = 0x24
    id <LAContextCallbackXPC> _callback;	// 40 = 0x28
    unsigned long long _originatorId;	// 48 = 0x30
    Context *_managedContext;	// 56 = 0x38
    CDStruct_4c969caf _auditToken;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100009c00
@property(readonly, nonatomic) Context *managedContext; // @synthesize managedContext=_managedContext;
@property(readonly, nonatomic) unsigned long long originatorId; // @synthesize originatorId=_originatorId;
@property(readonly, nonatomic) id <LAContextCallbackXPC> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool cApiOrigin; // @synthesize cApiOrigin=_cApiOrigin;
- (void)invalidateWithError:(id)arg1;	// IMP=0x0000000100009b6c
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x0000000100009b5c
- (void)evaluateACL:(id)arg1 cfOperation:(void *)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100009ac0
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100009a10
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009990
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;	// IMP=0x000000010000967c
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009368
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009060
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008d7c
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008aa8
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000087ec
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000084ec
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008294
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007f98
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007ce4
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000798c
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007674
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000736c
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007064
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006d3c
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100006990
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100006650
@property(readonly, copy) NSString *description;
- (void)interruptWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000062e8
- (void)dealloc;	// IMP=0x000000010000620c
- (id)initWithContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 auditToken:(CDStruct_4c969caf)arg5 cApiOrigin:(_Bool)arg6 checkEntitlementBlock:(CDUnknownBlockType)arg7 invalidationBlock:(CDUnknownBlockType)arg8 callback:(id)arg9;	// IMP=0x0000000100005f58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

