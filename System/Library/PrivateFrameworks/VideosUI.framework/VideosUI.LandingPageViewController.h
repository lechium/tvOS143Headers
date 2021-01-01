/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.LandingPageViewController : UIViewController {

	 collectionImpressioner;
	 recentlySearchedCollectionViewModel;
	 delegate;
	 pageMetrics;
	 document;
	 activeServiceRequest;
	 stackViewController;
	 refreshTTL;
	 resetContentOffsetOnReAppear;
	 notificationCenter;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)handleAppWillEnterForeground:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
@end

