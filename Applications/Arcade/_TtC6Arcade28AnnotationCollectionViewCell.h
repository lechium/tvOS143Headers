//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, _TtC6Arcade16DynamicTypeLabel;

@interface _TtC6Arcade28AnnotationCollectionViewCell : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *titleLabel;	// 176 = 0xb0
    MISSING_TYPE *summaryLabel;	// 184 = 0xb8
    MISSING_TYPE *detailViewPool;	// 0 = 0x0
    MISSING_TYPE *detailViews;	// 0 = 0x0
    MISSING_TYPE *linkLabel;	// 0 = 0x0
    MISSING_TYPE *backgroundEffectView;	// 0 = 0x0
    MISSING_TYPE *isExpanded;	// 0 = 0x0
    MISSING_TYPE *titleText;	// 0 = 0x0
    MISSING_TYPE *explicitSummary;	// 0 = 0x0
    MISSING_TYPE *detailItems;	// 0 = 0x0
    MISSING_TYPE *linkAction;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100170e60
- (void)accessibilityLinkLabelTapped;	// IMP=0x0000000100170d28
@property(nonatomic, readonly) _Bool accessibilityIsSummaryExpandable;
@property(nonatomic, readonly) _Bool accessibilityCellIsExpanded;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityLinkLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilitySummaryLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) NSArray *accessibilityDetailItems;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010016fdf4
- (void)layoutSubviews;	// IMP=0x000000010016f1d8
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000010016ed48
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)prepareForReuse;	// IMP=0x000000010016eab4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010016e8dc
@property(nonatomic) long long overrideUserInterfaceStyle;

@end

