//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXVoiceOverActivity, SCRCThreadKey;

@interface VOTOutputComponent : NSObject
{
    unsigned long long _currentOutputActionID;	// 8 = 0x8
    SCRCThreadKey *_threadKey;	// 16 = 0x10
    AXVoiceOverActivity *_lastUsedActivity;	// 24 = 0x18
    double _lastUsedActivityTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000e88c
@property(nonatomic) double lastUsedActivityTime; // @synthesize lastUsedActivityTime=_lastUsedActivityTime;
@property(retain, nonatomic) AXVoiceOverActivity *lastUsedActivity; // @synthesize lastUsedActivity=_lastUsedActivity;
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x000000010000e860
- (id)determineLanguageForEvent:(id)arg1;	// IMP=0x000000010000e79c
- (id)determineLanguageForAction:(id)arg1 overrideLanguage:(id)arg2 targetLanguage:(id)arg3;	// IMP=0x000000010000e560
- (void)notifyActionComplete:(id)arg1;	// IMP=0x000000010000e3f8
- (void)notifyRangeWillOutput:(struct _NSRange)arg1 container:(id)arg2;	// IMP=0x000000010000e2a4
- (void)handleEvent:(id)arg1;	// IMP=0x000000010000e2a0
- (void)preprocessAction:(id)arg1;	// IMP=0x000000010000e29c
- (void)setCurrentOutputActionID:(unsigned long long)arg1;	// IMP=0x000000010000e294
- (id)determineActivityForAction:(id)arg1;	// IMP=0x000000010000df54
- (double)outputMutedActivityLastToggleTime;	// IMP=0x0000000100109b0c
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x0000000100109ae8
- (_Bool)determineOutputMutedForActivity:(id)arg1;	// IMP=0x000000010000dd94
- (void)performAction:(id)arg1 owner:(id)arg2;	// IMP=0x000000010000dbe8
- (id)init;	// IMP=0x000000010000db78

@end

