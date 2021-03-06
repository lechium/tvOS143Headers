//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSArray, NSData, NSString;
@protocol OS_dispatch_queue;

@interface MSDPushService : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_connectionEnvironment;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    NSArray *_consumers;	// 32 = 0x20
    NSData *_pushToken;	// 40 = 0x28
}

+ (id)sharedService;	// IMP=0x000000010002ff40
- (void).cxx_destruct;	// IMP=0x0000000100030a60
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSArray *consumers; // @synthesize consumers=_consumers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSString *connectionEnvironment; // @synthesize connectionEnvironment=_connectionEnvironment;
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0000000100030938
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001000306dc
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001000305f4
- (id)_determinePushEnvironment;	// IMP=0x0000000100030508
- (void)_statConnectionWithEnvironment:(id)arg1;	// IMP=0x0000000100030038
- (void)dealloc;	// IMP=0x000000010002ffdc
- (id)init;	// IMP=0x000000010002fe54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

