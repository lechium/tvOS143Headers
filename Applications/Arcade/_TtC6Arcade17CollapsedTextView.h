//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, _TtC6Arcade19DynamicTypeTextView;

@interface _TtC6Arcade17CollapsedTextView : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *textLabel;	// 176 = 0xb0
    MISSING_TYPE *moreButton;	// 184 = 0xb8
    MISSING_TYPE *automaticallyAdjustTextColors;	// 192 = 0xc0
    MISSING_TYPE *primaryActionHandler;	// 200 = 0xc8
    MISSING_TYPE *shouldShowMoreButtonIfNeeded;	// 216 = 0xd8
    MISSING_TYPE *languageAwareString;	// 224 = 0xe0
    MISSING_TYPE *directionalTextAlignment;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000001000140a8
@property(nonatomic, readonly) _TtC6Arcade19DynamicTypeTextView *accessibilityTextView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100013f48
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000100012ed4
- (void)layoutSubviews;	// IMP=0x0000000100012ae0
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic) struct CGRect frame;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000123ac

@end

