//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADFMDMonitor : NSObject
{
    _Bool _isLostModeActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000010029cae8
- (void).cxx_destruct;	// IMP=0x000000010029cf88
- (_Bool)isLostModeActive;	// IMP=0x000000010029cf80
- (_Bool)_fetchLostModeState;	// IMP=0x000000010029cf28
- (void)_updateLostModeState;	// IMP=0x000000010029cd90
- (void)dealloc;	// IMP=0x000000010029cd0c
- (id)init;	// IMP=0x000000010029cb84

@end

