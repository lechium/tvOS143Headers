//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface VCPSystemMonitor : NSObject
{
    int _thermalToken;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_freeSpaceTimer;	// 16 = 0x10
    long long _recommendedState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002cea4
@property(readonly) long long recommendedState; // @synthesize recommendedState=_recommendedState;
- (int)disable;	// IMP=0x000000010002ce68
- (int)enable;	// IMP=0x000000010002cc78
- (void)checkFreeSpace;	// IMP=0x000000010002c934
- (void)checkThermalPressure;	// IMP=0x000000010002c838
- (void)dealloc;	// IMP=0x000000010002c7bc
- (void)reset;	// IMP=0x000000010002c774
- (id)init;	// IMP=0x000000010002c700

@end

