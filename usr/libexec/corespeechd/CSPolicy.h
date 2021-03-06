//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSEventMonitorDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate>
{
    NSMutableArray *_monitors;	// 8 = 0x8
    NSMutableArray *_conditions;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010009df34
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x000000010009dda0
- (void)notifyCallbackWithOption:(unsigned long long)arg1;	// IMP=0x000000010009dcf8
- (void)notifyCallback:(_Bool)arg1 option:(unsigned long long)arg2;	// IMP=0x000000010009dc78
- (_Bool)isEnabled;	// IMP=0x000000010009dbb0
- (_Bool)_checkAllConditionsEnabled;	// IMP=0x000000010009da9c
- (void)subscribeEventMonitor:(id)arg1;	// IMP=0x000000010009d9cc
- (void)addConditions:(CDUnknownBlockType)arg1;	// IMP=0x000000010009d8f8
- (void)dealloc;	// IMP=0x000000010009d758
- (void)setCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010009d728
- (id)init;	// IMP=0x000000010009d664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

