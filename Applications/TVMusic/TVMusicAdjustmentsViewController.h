//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIScrollView;

@interface TVMusicAdjustmentsViewController : UIViewController
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSArray *_adjusters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002956c
@property(retain, nonatomic) NSArray *adjusters; // @synthesize adjusters=_adjusters;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100029540
- (id)preferredFocusEnvironments;	// IMP=0x0000000100029484
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100029434
- (void)_updateAdjusterData;	// IMP=0x00000001000292d4
- (void)viewDidLoad;	// IMP=0x00000001000288d4
- (id)initWithAdjusters:(id)arg1;	// IMP=0x000000010002884c

@end

