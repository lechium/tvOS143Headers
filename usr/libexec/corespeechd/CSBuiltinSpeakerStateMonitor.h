//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00000001000c16e0
- (void)setBuiltInSpeakerState:(unsigned long long)arg1;	// IMP=0x00000001000c16f8
- (_Bool)isBuiltinSpeakerMuted;	// IMP=0x00000001000c16f0
- (unsigned long long)currentBuiltinSpeakerState;	// IMP=0x00000001000c16e8

@end
