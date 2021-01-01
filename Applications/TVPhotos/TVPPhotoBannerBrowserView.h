//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UIFocusGuide, UILabel, UIVisualEffectView;

@interface TVPPhotoBannerBrowserView : UICollectionReusableView
{
    _Bool _requiresHorizontalMargins;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSArray *_buttons;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    UIVisualEffectView *__hostView;	// 56 = 0x38
    UIFocusGuide *__focusGuide;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100059b54
@property(retain) UIFocusGuide *_focusGuide; // @synthesize _focusGuide=__focusGuide;
@property(retain) UIVisualEffectView *_hostView; // @synthesize _hostView=__hostView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) _Bool requiresHorizontalMargins; // @synthesize requiresHorizontalMargins=_requiresHorizontalMargins;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000001000599cc
- (struct CGSize)_getAttributedSubtitleSize;	// IMP=0x00000001000598e4
- (struct CGSize)_getAttributedTitleSize;	// IMP=0x00000001000597fc
- (void)layoutSubviews;	// IMP=0x0000000100059098
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100059070
- (id)preferredFocusEnvironments;	// IMP=0x0000000100058ec8
- (_Bool)canBecomeFocused;	// IMP=0x0000000100058ec0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100058d60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100058344

@end
