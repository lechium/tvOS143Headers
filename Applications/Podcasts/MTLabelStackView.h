//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIColor, UILabel;
@protocol MTLabelStackViewDelegate;

@interface MTLabelStackView : UIView
{
    _Bool _heightWillChange;	// 8 = 0x8
    NSCache *_textSizeCache;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSString *_titleTextStyle;	// 32 = 0x20
    NSString *_subtitleTextStyle;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIColor *_subtitleTextColor;	// 56 = 0x38
    id <MTLabelStackViewDelegate> _delegate;	// 64 = 0x40
    double _subtitleMaxWidth;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_subtitleLabel;	// 88 = 0x58
}

+ (unsigned long long)defaultSubtitleNumberOfLines;	// IMP=0x00000001000dfbcc
+ (unsigned long long)defaultTitleNumberOfLines;	// IMP=0x00000001000dfbc4
+ (id)defaultSubtitleFont;	// IMP=0x00000001000dfb60
+ (id)defaultTitleFont;	// IMP=0x00000001000dfafc
+ (id)defaultSubtitleTextStyle;	// IMP=0x00000001000dfaec
+ (id)defaultTitleTextStyle;	// IMP=0x00000001000dfadc
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(_Bool)arg3;	// IMP=0x00000001000dfa2c
+ (double)distanceBetweenLabelFrames;	// IMP=0x00000001000df978
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000001000df880
+ (double)maxHeight;	// IMP=0x00000001000df828
- (void).cxx_destruct;	// IMP=0x00000001000e115c
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;	// IMP=0x00000001000e05c0
- (void)_heightWillChange;	// IMP=0x00000001000e05a4
- (void)_updateSubtitleFont;	// IMP=0x00000001000e04f0
- (void)_updateTitleFont;	// IMP=0x00000001000e043c
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;	// IMP=0x00000001000e0400
- (double)subtitleHeightForWidth:(double)arg1;	// IMP=0x00000001000e02d8
- (double)titleHeightForWidth:(double)arg1;	// IMP=0x00000001000e01b0
- (double)distanceBetweenLabelFrames;	// IMP=0x00000001000e0044
- (double)heightForWidth:(double)arg1;	// IMP=0x00000001000dffc0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000dff90
- (void)layoutSubviews;	// IMP=0x00000001000dfde8
- (void)updateFonts;	// IMP=0x00000001000dfcf8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000dfbd4

@end

