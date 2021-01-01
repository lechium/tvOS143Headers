//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SpringBoardAlertProxyDelegate;

@interface SpringBoardAlertProxy : NSObject
{
    id <SpringBoardAlertProxyDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSXPCConnection *_inputConnection;	// 32 = 0x20
    NSObject<OS_xpc_object> *_inputEndpoint;	// 40 = 0x28
    SSXPCConnection *_outputConnection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004e93c
@property(readonly) NSObject<OS_xpc_object> *XPCEndpoint; // @synthesize XPCEndpoint=_inputEndpoint;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010004e78c
- (void)_disconnect;	// IMP=0x000000010004e678
@property __weak id <SpringBoardAlertProxyDelegate> delegate;
- (void)sendMessage:(id)arg1;	// IMP=0x000000010004e550
- (void)dealloc;	// IMP=0x000000010004e3e0
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010004e030

@end

