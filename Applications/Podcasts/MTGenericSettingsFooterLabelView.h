//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MTGenericSettingsFooterLabelView : UIView
{
    _Bool _topAlignLabel;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

+ (double)labelInset;	// IMP=0x000000010016be94
- (void).cxx_destruct;	// IMP=0x000000010016c458
@property(nonatomic) _Bool topAlignLabel; // @synthesize topAlignLabel=_topAlignLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_updateColors;	// IMP=0x000000010016c374
- (_Bool)_isInDarkMode;	// IMP=0x000000010016c324
- (void)_setupLabelWithFont:(id)arg1;	// IMP=0x000000010016c18c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010016c0c0
- (void)layoutSubviews;	// IMP=0x000000010016be9c
- (id)initWithFont:(id)arg1;	// IMP=0x000000010016bddc

@end

