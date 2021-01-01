/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol PKLoadingViewControllerDelegate;
@class UIActivityIndicatorView, UILabel;

@interface PKLoadingViewController : UIViewController {

	id<PKLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_cancelButtonTapped:(id)arg1 ;
@end
