//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log, UARPUpdaterServiceInstanceDelegate;

__attribute__((visibility("hidden")))
@interface UARPUpdaterServiceInstance : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    id <UARPUpdaterServiceInstanceDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSString *_serviceName;	// 40 = 0x28
}

@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)description;	// IMP=0x000000010001ff94
- (void)ioKitRuleMatched:(id)arg1;	// IMP=0x000000010001fe40
- (void)queryMatchingRules;	// IMP=0x000000010001fb48
- (void)releaseXPCConnection;	// IMP=0x000000010001fb10
- (void)initializeUpdaterServiceConnection;	// IMP=0x000000010001f9dc
- (void)dealloc;	// IMP=0x000000010001f974
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010001f8d0

@end

