//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetDataConsumer-Protocol.h"

@class ChunkedDigest, DigestVerifier, NSString;
@protocol AssetDataConsumer, OS_dispatch_queue;

@interface DecryptDataConsumer : NSObject <AssetDataConsumer>
{
    struct KBCryptOpaque_ *_session;	// 8 = 0x8
    char *_partialSampleBuffer;	// 16 = 0x10
    unsigned long long _partialSampleBufferLength;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_consumerQueue;	// 32 = 0x20
    DigestVerifier *_digestVerifier;	// 40 = 0x28
    ChunkedDigest *_digest;	// 48 = 0x30
    id <AssetDataConsumer> _streamAdapter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100237730
@property(retain) id <AssetDataConsumer> streamAdapter; // @synthesize streamAdapter=_streamAdapter;
@property(retain) ChunkedDigest *digest; // @synthesize digest=_digest;
- (void)_resetDecryptionBufferAndDigestVerifier;	// IMP=0x00000001002376f4
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010023753c
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100237428
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100237314
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100237108
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100236dd4
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002365a8
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100236558
- (_Bool)_beginSessionWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100236210
- (void)dealloc;	// IMP=0x00000001002361b4
- (id)initWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002360d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
