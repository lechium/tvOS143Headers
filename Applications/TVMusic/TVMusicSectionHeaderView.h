//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "TVMusicMoveableHeader-Protocol.h"

@class NSString, UILabel;

@interface TVMusicSectionHeaderView : UICollectionReusableView <TVMusicMoveableHeader>
{
    NSString *_headerText;	// 8 = 0x8
    UILabel *_headingLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100024c98
@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (_Bool)visibleContentIntersectsRect:(struct CGRect)arg1;	// IMP=0x0000000100024b5c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100024a80
- (void)_addHeadingLabel;	// IMP=0x000000010002491c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000247f4

@end

