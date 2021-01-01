//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class BLService, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLDaemon : NSObject <NSXPCListenerDelegate>
{
    BLService *_libraryService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_listenersReadyQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_startupQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSXPCListener *_libraryServiceListener;	// 40 = 0x28
}

+ (id)daemon;	// IMP=0x000000010006d60c
- (void).cxx_destruct;	// IMP=0x000000010006e528
@property(retain, nonatomic) NSXPCListener *libraryServiceListener; // @synthesize libraryServiceListener=_libraryServiceListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *listenersReadyQueue; // @synthesize listenersReadyQueue=_listenersReadyQueue;
@property(retain, nonatomic) BLService *libraryService; // @synthesize libraryService=_libraryService;
- (void)_setupForNotifications;	// IMP=0x000000010006e4c0
- (void)sq_finishedStartingUp;	// IMP=0x000000010006e300
- (void)lrq_setupCacheDelete;	// IMP=0x000000010006e2c8
- (void)lrq_setupListeners;	// IMP=0x000000010006e188
- (void)lrq_setupBeforeListenersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006e0b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010006dc3c
- (void)start;	// IMP=0x000000010006d8dc
- (void)dealloc;	// IMP=0x000000010006d850
- (id)init;	// IMP=0x000000010006d678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
