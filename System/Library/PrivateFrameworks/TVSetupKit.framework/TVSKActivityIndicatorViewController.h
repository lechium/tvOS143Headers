/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_source;
@class UILabel, NSObject, UIActivityIndicatorView, UIVisualEffectView, NSString;

@interface TVSKActivityIndicatorViewController : UIViewController {

	UILabel* _activityTextLabel;
	BOOL _showingSpinner;
	NSObject*<OS_dispatch_source> _spinnerTimer;
	UIActivityIndicatorView* _spinnerView;
	UIVisualEffectView* _visualEffectView;
	BOOL _activityIndicatorHidden;
	NSString* _activityText;
	double _activityIndicatorDelay;

}

@property (nonatomic,copy) NSString * activityText;                                                      //@synthesize activityText=_activityText - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (assign,nonatomic) double activityIndicatorDelay;                                              //@synthesize activityIndicatorDelay=_activityIndicatorDelay - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setActivityText:(NSString *)arg1 ;
-(void)setActivityIndicatorDelay:(double)arg1 ;
-(NSString *)activityText;
-(BOOL)isActivityIndicatorHidden;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(double)activityIndicatorDelay;
@end

