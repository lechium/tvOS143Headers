//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAIDSMessageReceiver-Protocol.h"
#import "DAIDSMessageSender-Protocol.h"

@class DDIDSService, NSMutableArray, NSString;
@protocol DAIDSMessageReceiver;

@interface DDMain : NSObject <DAIDSMessageReceiver, DAIDSMessageSender>
{
    NSMutableArray *_connections;	// 8 = 0x8
    DDIDSService *_pairedService;	// 16 = 0x10
    id <DAIDSMessageReceiver> _localReceiver;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100008038
- (void).cxx_destruct;	// IMP=0x0000000100008a74
@property(retain, nonatomic) id <DAIDSMessageReceiver> localReceiver; // @synthesize localReceiver=_localReceiver;
@property(retain, nonatomic) DDIDSService *pairedService; // @synthesize pairedService=_pairedService;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
- (void)receiveMessage:(id)arg1 data:(id)arg2 fromDestination:(id)arg3 expectsResponse:(_Bool)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x0000000100008520
- (void)sendMessage:(id)arg1 data:(id)arg2 toDestination:(id)arg3 forceLocalDelivery:(_Bool)arg4 expectsResponse:(_Bool)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x00000001000083e0
- (void)availableDestinationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008264
- (void)removeConnection:(id)arg1;	// IMP=0x0000000100008154
- (void)addConnection:(id)arg1;	// IMP=0x00000001000080a4
- (id)init;	// IMP=0x0000000100007f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

