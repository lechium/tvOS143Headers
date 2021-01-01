//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSLayoutConstraint, SiriUIContentLabel, SiriUIDisambiguationItem, UIImageView;

@interface SRDisambiguationCell : SiriUIContentCollectionViewCell
{
    _Bool _hasStarColumn;	// 8 = 0x8
    _Bool _lastRow;	// 9 = 0x9
    _Bool _constraintsCreated;	// 10 = 0xa
    SiriUIDisambiguationItem *_item;	// 16 = 0x10
    SiriUIContentLabel *_titleLabel;	// 24 = 0x18
    SiriUIContentLabel *_secondaryTitleLabel;	// 32 = 0x20
    SiriUIContentLabel *_extraDisambiguationLabel;	// 40 = 0x28
    SiriUIContentLabel *_extraDisambiguationSubTextLabel;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
    UIImageView *_starView;	// 64 = 0x40
    NSLayoutConstraint *_titleLeadingOffsetConstraint;	// 72 = 0x48
    NSLayoutConstraint *_imageLeadingOffsetConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleBaselineConstraint;	// 88 = 0x58
    NSLayoutConstraint *_secondaryTitleBaselineConstraint;	// 96 = 0x60
    NSLayoutConstraint *_extraTitleBaselineConstraint;	// 104 = 0x68
}

+ (double)defaultHeightWithImageView;	// IMP=0x000000010008bcfc
+ (double)defaultHeightWithSubtitle;	// IMP=0x000000010008bcf0
+ (double)defaultHeightWithHeading;	// IMP=0x000000010008bce4
+ (double)defaultHeight;	// IMP=0x000000010008bcd8
- (void).cxx_destruct;	// IMP=0x000000010008bef0
@property(nonatomic) _Bool constraintsCreated; // @synthesize constraintsCreated=_constraintsCreated;
@property(retain, nonatomic) NSLayoutConstraint *extraTitleBaselineConstraint; // @synthesize extraTitleBaselineConstraint=_extraTitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryTitleBaselineConstraint; // @synthesize secondaryTitleBaselineConstraint=_secondaryTitleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageLeadingOffsetConstraint; // @synthesize imageLeadingOffsetConstraint=_imageLeadingOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingOffsetConstraint; // @synthesize titleLeadingOffsetConstraint=_titleLeadingOffsetConstraint;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SiriUIContentLabel *extraDisambiguationSubTextLabel; // @synthesize extraDisambiguationSubTextLabel=_extraDisambiguationSubTextLabel;
@property(retain, nonatomic) SiriUIContentLabel *extraDisambiguationLabel; // @synthesize extraDisambiguationLabel=_extraDisambiguationLabel;
@property(retain, nonatomic) SiriUIContentLabel *secondaryTitleLabel; // @synthesize secondaryTitleLabel=_secondaryTitleLabel;
@property(retain, nonatomic) SiriUIContentLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isLastRow) _Bool lastRow; // @synthesize lastRow=_lastRow;
@property(nonatomic) _Bool hasStarColumn; // @synthesize hasStarColumn=_hasStarColumn;
@property(retain, nonatomic) SiriUIDisambiguationItem *item; // @synthesize item=_item;
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000010008bbdc
- (void)prepareForReuse;	// IMP=0x000000010008b4d4
- (void)updateConstraintConstants;	// IMP=0x000000010008b288
- (void)updateConstraints;	// IMP=0x000000010008aa6c
- (void)layoutSubviews;	// IMP=0x000000010008a898
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008a40c

@end

