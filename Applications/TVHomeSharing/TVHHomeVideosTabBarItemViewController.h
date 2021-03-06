//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"

@class NSSet, NSString, TVHHomeVideosMainViewController;

@interface TVHHomeVideosTabBarItemViewController : UIViewController <TVHMediaLibraryTabBarItemViewController>
{
    TVHHomeVideosMainViewController *_homeVideosMainViewController;	// 8 = 0x8
}

+ (id)new;	// IMP=0x000000010007e1b0
- (void).cxx_destruct;	// IMP=0x000000010007e620
@property(retain, nonatomic) TVHHomeVideosMainViewController *homeVideosMainViewController; // @synthesize homeVideosMainViewController=_homeVideosMainViewController;
- (void)didLoseSelection;	// IMP=0x000000010007e5bc
- (void)didReceiveSelection;	// IMP=0x000000010007e57c
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (void)viewDidLoad;	// IMP=0x000000010007e424
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010007e384
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007e2fc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007e274
- (id)init;	// IMP=0x000000010007e1ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

