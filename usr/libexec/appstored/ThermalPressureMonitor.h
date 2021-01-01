//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ThermalPressureMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _token;	// 16 = 0x10
    _Bool _elevated;	// 20 = 0x14
}

+ (id)defaultMonitor;	// IMP=0x0000000100195ab4
- (void).cxx_destruct;	// IMP=0x000000010019602c
- (void)_updateState;	// IMP=0x0000000100195f70
- (void)_registerForNotification;	// IMP=0x0000000100195ddc
- (void)_postStateDidChangeNotification;	// IMP=0x0000000100195d08
@property(readonly, getter=isElevated) _Bool elevated; // @synthesize elevated=_elevated;
- (void)dealloc;	// IMP=0x0000000100195c0c
- (id)init;	// IMP=0x0000000100195b20

@end

