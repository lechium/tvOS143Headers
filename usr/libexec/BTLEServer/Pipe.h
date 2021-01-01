//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class CBScalablePipe, NSMutableArray, NSMutableData, NSSet, NSString;
@protocol PipeDelegate;

@interface Pipe : NSObject <NSStreamDelegate>
{
    id <PipeDelegate> _delegate;	// 8 = 0x8
    CBScalablePipe *_pipe;	// 16 = 0x10
    NSSet *_supportedCommands;	// 24 = 0x18
    NSMutableArray *_txMessageQueue;	// 32 = 0x20
    NSMutableData *_receivedMessage;	// 40 = 0x28
    NSMutableData *_incomingBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100015be8
@property(retain, nonatomic) NSMutableData *incomingBuffer; // @synthesize incomingBuffer=_incomingBuffer;
@property(retain, nonatomic) NSMutableData *receivedMessage; // @synthesize receivedMessage=_receivedMessage;
@property(retain, nonatomic) NSMutableArray *txMessageQueue; // @synthesize txMessageQueue=_txMessageQueue;
@property(retain, nonatomic) NSSet *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(readonly, retain, nonatomic) CBScalablePipe *pipe; // @synthesize pipe=_pipe;
@property(nonatomic) __weak id <PipeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000100015a24
- (void)receiveMessage:(char *)arg1 length:(long long)arg2;	// IMP=0x0000000100015790
- (void)sendNextQueuedMessage;	// IMP=0x0000000100015528
- (void)sendMessage:(id)arg1;	// IMP=0x00000001000153d4
- (void)dealloc;	// IMP=0x00000001000151e0
- (id)initWithDelegate:(id)arg1 pipe:(id)arg2;	// IMP=0x0000000100014f7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

