//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRClientProxy-Protocol.h"
#import "PRRangingClientProtocol-Protocol.h"
#import "PRRangingServerProtocol-Protocol.h"

@class NSDictionary, NSString, PRNSXPCConnection;
@protocol OS_dispatch_queue, PRRangingClientProtocol;

@interface PRRangingServiceProxy : NSObject <PRClientProxy, PRRangingClientProtocol, PRRangingServerProtocol>
{
    PRNSXPCConnection<PRRangingClientProtocol> *_connWrapper;	// 8 = 0x8
    shared_ptr_55175bc8 _rangingManagerClient;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    unsigned short _p2pServiceId;	// 40 = 0x28
    NSDictionary *_clientInfo;	// 48 = 0x30
    _Bool _terminated;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000001000228e4
- (void).cxx_destruct;	// IMP=0x00000001000228a0
@property(readonly, copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)stopP2PRanging:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022454
- (void)startP2PRanging:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021f78
- (void)configureForP2PRanging:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010002117c
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x000000010002100c
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x0000000100020efc
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;	// IMP=0x0000000100020dec
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x0000000100020c80
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100020b14
- (void)terminate;	// IMP=0x0000000100020a50
- (void)activate;	// IMP=0x000000010002089c
- (void)dealloc;	// IMP=0x00000001000207d0
- (void)connectWithClientInfo:(id)arg1;	// IMP=0x000000010002060c
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100020310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
