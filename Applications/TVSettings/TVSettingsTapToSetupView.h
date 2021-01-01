//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface TVSettingsTapToSetupView : UIView
{
    NSString *_title;	// 8 = 0x8
    NSString *_instructions;	// 16 = 0x10
    NSString *_footer;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_bodyLabel;	// 40 = 0x28
    UILabel *_footerLabel;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
    UIActivityIndicatorView *_spinnerView;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100065944
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_setActivityIndicatorIsInProgress:(_Bool)arg1;	// IMP=0x000000010006580c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100065710
- (void)stopAnimatingSpinner;	// IMP=0x0000000100065700
- (void)startAnimatingSpinner;	// IMP=0x00000001000656f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100064138

@end

