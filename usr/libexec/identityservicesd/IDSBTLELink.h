//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"
#import "IDSLink-Protocol.h"

@class NSData, NSString, NSUUID;
@protocol IDSLinkDelegate, IDSWPPacketSendingProtocol;

@interface IDSBTLELink : NSObject <IDSLink, CBPeripheralDelegate>
{
    NSString *_cbuuid;	// 8 = 0x8
    NSString *_deviceUniqueID;	// 16 = 0x10
    NSString *_linkID;	// 24 = 0x18
    NSUUID *_peerID;	// 32 = 0x20
    id <IDSWPPacketSendingProtocol> _wpLinkManager;	// 40 = 0x28
    CDStruct_78c9ccae *_incomingPacketBuffer;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    unsigned long long _totalBytesSent;	// 64 = 0x40
    unsigned long long _totalPacketsSent;	// 72 = 0x48
    unsigned long long _totalBytesReceived;	// 80 = 0x50
    unsigned long long _totalPacketsReceived;	// 88 = 0x58
    unsigned long long _previousBytesSent;	// 96 = 0x60
    unsigned long long _previousPacketsSent;	// 104 = 0x68
    unsigned long long _previousBytesReceived;	// 112 = 0x70
    unsigned long long _previousPacketsReceived;	// 120 = 0x78
    double _previousReportTime;	// 128 = 0x80
    _Bool _hasSpaceAvailable;	// 136 = 0x88
    _Bool _shouldSendHasSpaceAvailable;	// 137 = 0x89
    NSData *_outgoingData;	// 144 = 0x90
    id <IDSLinkDelegate> _delegate;	// 152 = 0x98
    id <IDSLinkDelegate> _alternateDelegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010015c4b0
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) NSString *linkID; // @synthesize linkID=_linkID;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x000000010015bf50
- (void)didReceiveData:(id)arg1;	// IMP=0x000000010015b4c4
- (void)setHasSpaceAvailable:(_Bool)arg1;	// IMP=0x000000010015b0f4
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010015b068
- (unsigned long long)sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010015ad48
- (id)copyLinkStatsDict;	// IMP=0x000000010015abb0
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)start;	// IMP=0x000000010015aaf4
- (void)triggerBTCorruptionRecovery;	// IMP=0x000000010015aac0
- (void)_localDetectedCorruption;	// IMP=0x000000010015aaac
- (void)dealloc;	// IMP=0x000000010015aa44
- (id)initWithWPLinkManager:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010015a8ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

