//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)stringForWatchAvailability:(unsigned long long)arg1;	// IMP=0x000000010001d948
+ (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d764
+ (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d580
+ (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d3b8
+ (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d1b0
+ (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001cf00
+ (_Bool)isHomePodAvailable;	// IMP=0x000000010001cef8
+ (unsigned long long)watchAvailability;	// IMP=0x000000010001cc84

@end

