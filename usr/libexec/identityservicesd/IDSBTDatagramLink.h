//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSLink-Protocol.h"

@class CBScalablePipe, NSString;
@protocol IDSLinkDelegate;

@interface IDSBTDatagramLink : NSObject <IDSLink>
{
    NSString *_cbuuid;	// 8 = 0x8
    NSString *_deviceUniqueID;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    unsigned long long _totalBytesSent;	// 32 = 0x20
    unsigned long long _totalPacketsSent;	// 40 = 0x28
    unsigned long long _totalBytesReceived;	// 48 = 0x30
    unsigned long long _totalPacketsReceived;	// 56 = 0x38
    unsigned long long _previousBytesSent;	// 64 = 0x40
    unsigned long long _previousPacketsSent;	// 72 = 0x48
    unsigned long long _previousBytesReceived;	// 80 = 0x50
    unsigned long long _previousPacketsReceived;	// 88 = 0x58
    double _previousReportTime;	// 96 = 0x60
    CBScalablePipe *_pipe;	// 104 = 0x68
    struct channel *_channel;	// 112 = 0x70
    struct channel_ring_desc *_rxRing;	// 120 = 0x78
    struct channel_ring_desc *_txRing;	// 128 = 0x80
    CDStruct_78c9ccae *_currentIncomingPacket;	// 136 = 0x88
    id <IDSLinkDelegate> _delegate;	// 144 = 0x90
    id <IDSLinkDelegate> _alternateDelegate;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000100011940
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)copyLinkStatsDict;	// IMP=0x000000010001160c
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x0000000100011270
- (void)_processIncomingPacket;	// IMP=0x00000001000107a0
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000100010714
- (unsigned long long)sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010000fc54
- (void)start;	// IMP=0x000000010000f82c
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)invalidate;	// IMP=0x000000010000f45c
- (void)dealloc;	// IMP=0x000000010000f3f8
- (id)initWithPipe:(id)arg1 withDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010000f104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

