//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface RemoteNotificationHandler : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x000000010000b250
- (void).cxx_destruct;	// IMP=0x000000010000ccf8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apsQueue; // @synthesize apsQueue=_apsQueue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (id)_storeDSIDs;	// IMP=0x000000010000cad4
- (id)_cloudDSID;	// IMP=0x000000010000ca50
- (void)_handleStoreNotificationPayload:(id)arg1;	// IMP=0x000000010000c210
- (void)_handleCloudNotificationPayload:(id)arg1;	// IMP=0x000000010000bc2c
- (void)_startConnection;	// IMP=0x000000010000b8f4
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010000b520
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010000b404
- (void)handleLegacyStoreNotificationPayload:(id)arg1;	// IMP=0x000000010000b314
- (void)start;	// IMP=0x000000010000b2bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

