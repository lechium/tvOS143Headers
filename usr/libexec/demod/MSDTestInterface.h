//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDSendTestCommand-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCConnection, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MSDTestInterface : NSObject <NSXPCListenerDelegate, MSDSendTestCommand>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_testQueue;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    NSXPCInterface *_xpcInterface;	// 32 = 0x20
    unsigned long long _defaultLogLevel;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000cb54
- (void).cxx_destruct;	// IMP=0x000000010000d660
@property unsigned long long defaultLogLevel; // @synthesize defaultLogLevel=_defaultLogLevel;
@property(retain) NSXPCInterface *xpcInterface; // @synthesize xpcInterface=_xpcInterface;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *testQueue; // @synthesize testQueue=_testQueue;
@property(retain) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (id)sanitizeTestLog:(id)arg1;	// IMP=0x000000010000d4fc
- (void)pushTestLog:(id)arg1;	// IMP=0x000000010000d464
- (void)sendCommandsToDemod:(id)arg1 replyFromDemod:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d1c0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000cf58
- (void)sendTestEvents:(id)arg1;	// IMP=0x000000010000ce1c
- (void)pushTestEvent:(id)arg1 ofType:(id)arg2;	// IMP=0x000000010000cd4c
- (id)getTimeStamp;	// IMP=0x000000010000ccf0
- (void)start;	// IMP=0x000000010000cbd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

