//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADInstrumentationResolver : NSObject
{
}

- (id)wallClockTimeForTimestamp:(unsigned long long)arg1;	// IMP=0x000000010019ca40
- (id)buildDeviceDynamicContextRelativeToTimestamp:(unsigned long long)arg1;	// IMP=0x000000010019c7fc
- (id)buildDeviceFixedContext;	// IMP=0x000000010019c160
- (void)_triggerABCForNullAssistantIdentifier;	// IMP=0x000000010019c084
- (void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x000000010019bf1c

@end

