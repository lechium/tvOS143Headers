//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PBAppSwitcherTitleView : UIView
{
    NSString *_title;	// 8 = 0x8
    double _titleOpacity;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000001000f2f38
- (void).cxx_destruct;	// IMP=0x00000001000f3c48
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;	// IMP=0x00000001000f3598
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000f347c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000f3000

@end

