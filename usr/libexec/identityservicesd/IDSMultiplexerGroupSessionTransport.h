//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSMultiplexerTransport-Protocol.h"

@class NSMutableArray, NSString;

@interface IDSMultiplexerGroupSessionTransport : NSObject <IDSMultiplexerTransport>
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableArray *_portSignatures;	// 16 = 0x10
    NSMutableArray *_participantIDs;	// 24 = 0x18
    NSMutableArray *_routedConnections;	// 32 = 0x20
    CDUnknownBlockType _readHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100153fe0
- (_Bool)tryConsumePacketBuffer:(CDStruct_78c9ccae *)arg1;	// IMP=0x000000010015381c
- (void)setPacketBufferReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001537b0
- (id)routeClientConnections:(id)arg1;	// IMP=0x00000001001530bc
- (void)cancelClientConnection:(id)arg1;	// IMP=0x0000000100152c7c
@property(readonly, nonatomic) int packetizationHeadroom;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000100152a5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

