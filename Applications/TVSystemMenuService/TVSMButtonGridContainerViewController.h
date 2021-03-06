//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVSMViewControllerPlatterFrameProviding-Protocol.h"

@class NSString, TVSMButtonGridCollectionViewController, TVSMClockViewController, _TVSMPlatterView;

@interface TVSMButtonGridContainerViewController : UIViewController <TVSMViewControllerPlatterFrameProviding>
{
    TVSMButtonGridCollectionViewController *_collectionViewController;	// 8 = 0x8
    TVSMClockViewController *_clockViewController;	// 16 = 0x10
    _TVSMPlatterView *_effectView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100009690
@property(readonly, nonatomic) _TVSMPlatterView *effectView; // @synthesize effectView=_effectView;
@property(readonly, nonatomic) TVSMClockViewController *clockViewController; // @synthesize clockViewController=_clockViewController;
@property(readonly, nonatomic) TVSMButtonGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (struct CGRect)untransformedPlatterFrameInCoordinateSpace:(id)arg1;	// IMP=0x00000001000094f4
@property(readonly, nonatomic) struct CGRect selectedCellFrame;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100009464
- (_Bool)definesPresentationContext;	// IMP=0x000000010000945c
- (void)viewDidLoad;	// IMP=0x0000000100008d64
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100008ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

