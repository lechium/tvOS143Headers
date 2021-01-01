//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSAsyncDecrypter-Protocol.h"
#import "IDSAsyncEncrypter-Protocol.h"

@class IDSCertifiedDeliveryReplayCommitter, IDSPeerIDManager, IDSPublicIdentityCache, IDSRateLimiter, IDSURI, NSData, NSString;
@protocol IDSMPFullDeviceIdentityContainerEncrypter;

@interface IDSURIEncrypter : NSObject <IDSAsyncEncrypter, IDSAsyncDecrypter>
{
    _Bool _avoidMainQueue;	// 8 = 0x8
    _Bool _forceLegacy;	// 9 = 0x9
    IDSPeerIDManager *_peerIDManager;	// 16 = 0x10
    IDSRateLimiter *_rateLimiter;	// 24 = 0x18
    IDSCertifiedDeliveryReplayCommitter *_replayCommitter;	// 32 = 0x20
    IDSPublicIdentityCache *_publicIdentityCache;	// 40 = 0x28
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityContainerEncrypter;	// 48 = 0x30
    IDSURI *_localURI;	// 56 = 0x38
    IDSURI *_remoteURI;	// 64 = 0x40
    NSData *_pushToken;	// 72 = 0x48
    NSString *_service;	// 80 = 0x50
    NSData *_cert;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000b1994
@property(nonatomic) _Bool forceLegacy; // @synthesize forceLegacy=_forceLegacy;
@property(readonly, nonatomic) NSData *cert; // @synthesize cert=_cert;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) IDSURI *remoteURI; // @synthesize remoteURI=_remoteURI;
@property(readonly, nonatomic) IDSURI *localURI; // @synthesize localURI=_localURI;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
@property(readonly, nonatomic) _Bool avoidMainQueue; // @synthesize avoidMainQueue=_avoidMainQueue;
@property(readonly, nonatomic) IDSPublicIdentityCache *publicIdentityCache; // @synthesize publicIdentityCache=_publicIdentityCache;
@property(readonly, nonatomic) IDSCertifiedDeliveryReplayCommitter *replayCommitter; // @synthesize replayCommitter=_replayCommitter;
@property(readonly, nonatomic) IDSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(readonly, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
- (void)decryptData:(id)arg1 usingIdentifier:(id)arg2 onQueue:(id)arg3 isRetry:(_Bool)arg4 replayKey:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000aec24
- (void)encryptData:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ad2cc
- (id)encryptData:(id)arg1 usedIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x00000001000ad100
- (_Bool)_isReplayError:(id)arg1;	// IMP=0x00000001000acedc
- (id)_lookupIdentityWithLastResortFallback:(_Bool *)arg1;	// IMP=0x00000001000acb18
- (id)_lookupEndpoint;	// IMP=0x00000001000ac99c
- (void)setupWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5;	// IMP=0x00000001000ac848
- (id)initWithPeerIDManager:(id)arg1 fullDeviceIdentityContainerEncrypter:(id)arg2 rateLimiter:(id)arg3 replayCommitter:(id)arg4 publicIdentityCache:(id)arg5 avoidMainQueue:(_Bool)arg6;	// IMP=0x00000001000ac664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
