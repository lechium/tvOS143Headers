//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol TVPSignInLandingViewDelegate;

@interface TVPSignInLandingView : UIView
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_actionPromptMessage;	// 24 = 0x18
    UIImage *_sampleImage;	// 32 = 0x20
    double _alphaOnImage;	// 40 = 0x28
    id <TVPSignInLandingViewDelegate> _delegate;	// 48 = 0x30
    UILabel *_signInLabel;	// 56 = 0x38
    UILabel *_messageLabel;	// 64 = 0x40
    UIImageView *_imageView;	// 72 = 0x48
    UIButton *_signInButton;	// 80 = 0x50
    UIView *_containerView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010000efec
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *signInLabel; // @synthesize signInLabel=_signInLabel;
@property(nonatomic) __weak id <TVPSignInLandingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double alphaOnImage; // @synthesize alphaOnImage=_alphaOnImage;
@property(retain, nonatomic) UIImage *sampleImage; // @synthesize sampleImage=_sampleImage;
@property(copy, nonatomic) NSString *actionPromptMessage; // @synthesize actionPromptMessage=_actionPromptMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)configureUIControls;	// IMP=0x000000010000ea60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000e848
- (void)_onSelectSignIn:(id)arg1;	// IMP=0x000000010000e7e8
- (void)layoutSubviews;	// IMP=0x000000010000e3fc
- (id)preferredFocusEnvironments;	// IMP=0x000000010000e250
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000dfe8

@end

