//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExplicitPreferenceManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0000000100189394
- (_Bool)explicitPreferencesDisabled:(char *)arg1;	// IMP=0x0000000100189364
- (void)setExplicitPreferencesDisabled:(_Bool)arg1;	// IMP=0x0000000100189328
- (_Bool)lastChangeInducingBagExplicitOff:(char *)arg1;	// IMP=0x00000001001892f8
- (void)setLastChangeInducingBagExplicitOff:(_Bool)arg1;	// IMP=0x00000001001892bc
- (id)init;	// IMP=0x00000001001887dc

@end

