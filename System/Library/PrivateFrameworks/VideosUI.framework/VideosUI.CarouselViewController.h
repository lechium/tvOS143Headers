/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>
#import <libobjc.A.dylib/VUISwiftImpressionsElement.h>

@class NSArray;

@interface VideosUI.CarouselViewController : UIViewController <TVCarouselViewDelegate, TVCarouselViewDataSource, VUISwiftImpressionsElement> {

	 viewImpressioner;
	 headerViewModel;
	 viewElement;
	 collectionViewModel;
	 $__lazy_storage_$_carouselViewContainer;
	 dataModelItems;
	 lastViewWidth;
	 centeredItemIndex;
	 impressionsTracker;
	 impressionsCalculator;
	 selfVisibilityMonitor;
	 $__lazy_storage_$_cellVisibilityMonitor;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2 ;
-(id)getSnapshotImpressions;
-(id)getRecordedImpressions;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
@end

