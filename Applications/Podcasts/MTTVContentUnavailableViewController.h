//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MTTVContentUnavailableView, NSString, UIImage;

@interface MTTVContentUnavailableViewController : UIViewController
{
    UIImage *_image;	// 8 = 0x8
    NSString *_primaryText;	// 16 = 0x10
    NSString *_secondaryText;	// 24 = 0x18
    NSString *_buttonTitle;	// 32 = 0x20
    MTTVContentUnavailableView *_emptyOverlay;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100025244
@property(retain, nonatomic) MTTVContentUnavailableView *emptyOverlay; // @synthesize emptyOverlay=_emptyOverlay;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000100025084
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100024cf8
- (void)viewDidLoad;	// IMP=0x0000000100024c5c

@end

