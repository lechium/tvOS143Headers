/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVSignInLandingViewDelegate.h>

@class TVSignInLandingView, NSString;

@interface TVLiCloudAuthenticationViewController : UIViewController <TVSignInLandingViewDelegate> {

	/*^block*/id _callbackBlock;
	TVSignInLandingView* _signInView;

}

@property (nonatomic,retain) TVSignInLandingView * signInView;              //@synthesize signInView=_signInView - In the implementation block
@property (nonatomic,copy) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallbackBlock:(id)arg1 ;
-(void)loadView;
-(id)callbackBlock;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_menuOutGestureRecognized;
-(void)authenticateUserOnSelectSignIn;
-(TVSignInLandingView *)signInView;
-(void)setSignInView:(TVSignInLandingView *)arg1 ;
@end

