//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface MTArtworkView : UIImageView
{
    _Bool _observingArtworkChangeNotifications;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    NSString *_artworkKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009dae8
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_reloadArtwork;	// IMP=0x000000010009d7b8
- (void)_stopObservingArtworkChangeNotifications;	// IMP=0x000000010009d748
- (void)_startObservingArtworkChangeNotifications;	// IMP=0x000000010009d6cc
- (void)_artworkDidChange:(id)arg1;	// IMP=0x000000010009d640
- (void)_artworkKeyDidChange;	// IMP=0x000000010009d5cc
- (void)_artworkSizeDidChange;	// IMP=0x000000010009d5c0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010009d508
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010009d450
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(retain, nonatomic) NSString *artworkKey; // @synthesize artworkKey=_artworkKey;
- (void)dealloc;	// IMP=0x000000010009d2b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009d0fc

@end

