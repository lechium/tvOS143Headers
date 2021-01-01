//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTask, W5StatusManager, W5WiFiSnifferRequest;
@protocol OS_dispatch_queue;

@interface W5WiFiSniffManager : NSObject
{
    W5StatusManager *_status;	// 8 = 0x8
    NSTask *_task;	// 16 = 0x10
    NSTask *_watchdogTask;	// 24 = 0x18
    NSString *_outputPath;	// 32 = 0x20
    NSMutableArray *_pendingRequests;	// 40 = 0x28
    W5WiFiSnifferRequest *_activeRequest;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void)teardownAndNotify:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038e78
- (id)__supportedWiFiChannel:(long long)arg1;	// IMP=0x0000000100038d3c
- (_Bool)__isCancelled;	// IMP=0x0000000100038c74
- (void)__nextRequest;	// IMP=0x000000010003839c
- (void)__setupWatchdogTask;	// IMP=0x00000001000381cc
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037f48
- (id)__pendingRequestWithUUID:(id)arg1;	// IMP=0x0000000100037e08
- (void)addRequest:(id)arg1;	// IMP=0x0000000100037d64
- (void)dealloc;	// IMP=0x0000000100037cf0
- (id)init;	// IMP=0x0000000100037cb8
- (id)initWithStatusManager:(id)arg1;	// IMP=0x0000000100037c24

@end

