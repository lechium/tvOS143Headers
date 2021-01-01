//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFProviderServiceDelegate-Protocol.h"

@class ADServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADServiceConnectionProviderServiceDelegate : NSObject <AFProviderServiceDelegate>
{
    ADServiceConnection *_serviceConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    NSMutableDictionary *_syncRequestsByUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001dd3b4
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(id)arg1;	// IMP=0x00000001001dd234
- (oneway void)getTimeoutSuspendedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dd1c8
- (oneway void)handleCommand:(id)arg1 executionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001dd0e4
- (oneway void)fetchContextsForKeys:(id)arg1 forRequestID:(id)arg2 includesNearbyDevices:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001dd02c
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dcf5c
- (oneway void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dce88
- (oneway void)getStarkModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dce1c
- (oneway void)getCarDNDModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dcdb0
- (oneway void)getLockStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dcd44
- (oneway void)dismissAssistant;	// IMP=0x00000001001dccfc
- (oneway void)openURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001dcc64
- (oneway void)syncChunksWithPreAnchor:(id)arg1 postAnchor:(id)arg2 updates:(id)arg3 deletes:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00000001001dc864
- (void)clearSyncRequestWithUUID:(id)arg1;	// IMP=0x00000001001dc7d0
- (void)setSyncRequest:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000001001dc780
- (id)syncRequestForUUID:(id)arg1;	// IMP=0x00000001001dc770
- (id)initWithServiceConnection:(id)arg1 syncQueue:(id)arg2;	// IMP=0x00000001001dc6ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
