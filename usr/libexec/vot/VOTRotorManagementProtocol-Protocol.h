//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VOTRotor;

@protocol VOTRotorManagementProtocol <NSObject>
- (_Bool)rotorEnabled;
- (_Bool)forceRotorOffGesturedTextInputIfNeeded:(_Bool)arg1;
- (void)setElementRotorToType:(long long)arg1 saveToPreferences:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)setRotor:(VOTRotor *)arg1 toType:(long long)arg2 saveToPreferences:(_Bool)arg3 userInitiated:(_Bool)arg4;
- (long long)currentRotorType;
- (void)hideVisualRotor;
@end

