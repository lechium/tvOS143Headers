//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MTColorTheme, MTTVSectionHeaderView, UILabel;

@interface MTTVTableSectionHeaderView : UITableViewHeaderFooterView
{
    MTTVSectionHeaderView *_sectionHeaderView;	// 8 = 0x8
    _Bool _floating;	// 16 = 0x10
}

+ (double)height;	// IMP=0x000000010012ac94
- (void).cxx_destruct;	// IMP=0x000000010012b0a8
- (void)setFloating:(_Bool)arg1;	// IMP=0x000000010012b040
@property(nonatomic) _Bool alwaysFloating;
@property(retain, nonatomic) MTColorTheme *colorTheme;
- (id)text;	// IMP=0x000000010012aebc
- (void)setText:(id)arg1;	// IMP=0x000000010012ae40
@property(readonly, nonatomic) UILabel *textLabel;
- (void)setNeedsLayout;	// IMP=0x000000010012add0
- (void)layoutSubviews;	// IMP=0x000000010012ad68
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010012aca8

@end

