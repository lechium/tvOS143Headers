//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MTChevronView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
}

+ (id)chevronImage;	// IMP=0x000000010011ac10
- (void).cxx_destruct;	// IMP=0x000000010011af44
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010011aeb4
- (void)layoutSubviews;	// IMP=0x000000010011ad98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010011ac7c

@end

