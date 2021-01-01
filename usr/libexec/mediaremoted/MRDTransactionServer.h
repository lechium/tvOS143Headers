//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"
#import "MRTransactionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransactionServer : NSObject <MRTransactionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _usedMemory;	// 16 = 0x10
    unsigned long long _allowedMemory;	// 24 = 0x18
    double _transactionWaitDuration;	// 32 = 0x20
    NSMutableArray *_transactions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003b114
@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)_sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010003ad28
- (void)sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010003ac10
- (void)sendContentItemTransactionWithPlaybackQueue:(id)arg1 request:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010003ab1c
- (void)handleContentItemTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x0000000100039f8c
- (void)handlePlaybackQueueRequestTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;	// IMP=0x00000001000399c0
- (void)adjustMemory:(long long)arg1;	// IMP=0x000000010003993c
- (void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000396a8
- (unsigned long long)transactionRequestingMemorySize:(id)arg1;	// IMP=0x0000000100039560
- (void)transactionDidEnd:(id)arg1 bytesRemaining:(unsigned long long)arg2;	// IMP=0x000000010003948c
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00000001000393a0
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000391ec
- (id)init;	// IMP=0x0000000100039118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

