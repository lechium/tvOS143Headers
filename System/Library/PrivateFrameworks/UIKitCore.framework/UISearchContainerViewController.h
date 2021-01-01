/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)initWithSearchController:(id)arg1 ;
-(void)setTabBarObservedScrollView:(id)arg1 ;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(BOOL)_transitionsChildViewControllers;
-(void)_presentSearchControllerIfNecessary;
@end

