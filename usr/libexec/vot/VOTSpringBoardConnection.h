//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMachPort;

@interface VOTSpringBoardConnection : NSObject
{
    NSMachPort *_sbPort;	// 8 = 0x8
}

+ (id)defaultConnection;	// IMP=0x0000000100041cc4
- (void).cxx_destruct;	// IMP=0x00000001000425a4
- (void)setScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x0000000100042578
- (void)setInPassthroughMode:(_Bool)arg1;	// IMP=0x000000010004254c
- (void)showElementLabelPanel:(_Bool)arg1 currentLabel:(id)arg2;	// IMP=0x00000001000424dc
- (void)sendProgrammaticAppSwitch:(_Bool)arg1;	// IMP=0x0000000100042220
- (void)showSpringboardNoHomeButtonGestureAlert;	// IMP=0x000000010004221c
- (void)showSpringBoardVOConfirmation:(_Bool)arg1;	// IMP=0x0000000100042218
- (id)_sbPort;	// IMP=0x0000000100042210
- (void)informConnectionDied;	// IMP=0x00000001000421c8
- (void)restartConnection;	// IMP=0x0000000100041d64
- (_Bool)isConnected;	// IMP=0x0000000100041d18
- (void)dealloc;	// IMP=0x0000000100041ccc

@end
