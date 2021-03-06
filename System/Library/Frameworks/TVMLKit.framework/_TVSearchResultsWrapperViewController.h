/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class _TVStackCollectionViewController, UIViewController;

@interface _TVSearchResultsWrapperViewController : UIViewController {

	_TVStackCollectionViewController* _stackCollectionViewController;
	UIViewController* _defaultResultsViewController;

}

@property (nonatomic,retain) _TVStackCollectionViewController * stackCollectionViewController;              //@synthesize stackCollectionViewController=_stackCollectionViewController - In the implementation block
@property (nonatomic,retain) UIViewController * defaultResultsViewController;                               //@synthesize defaultResultsViewController=_defaultResultsViewController - In the implementation block
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(id)initWithStackCollectionViewController:(id)arg1 ;
-(void)setDefaultResultsViewController:(UIViewController *)arg1 ;
-(_TVStackCollectionViewController *)stackCollectionViewController;
-(void)setStackCollectionViewController:(_TVStackCollectionViewController *)arg1 ;
-(UIViewController *)defaultResultsViewController;
@end

