//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSettingsiTunesMoviesFacade : NSObject
{
    long long _playbackQuality;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000b7ad4
@property(nonatomic) long long playbackQuality; // @synthesize playbackQuality=_playbackQuality;
- (void)_updatePlaybackQuality;	// IMP=0x00000001000b7d6c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000b7cfc
- (void)dealloc;	// IMP=0x00000001000b7be4
- (id)init;	// IMP=0x00000001000b7b40

@end

