/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVContentPartnerKitUI/TVApplicationControllerDelegate.h>

@class TVCKSearchSiriContext, TVCKSearchAppSetupHelper, TVApplicationController, UINavigationController, NSString;

@interface TVCKSearchAppViewController : UIViewController <UIGestureRecognizerDelegate, TVApplicationControllerDelegate> {

	TVCKSearchSiriContext* _siriContext;
	TVCKSearchAppSetupHelper* _setupHelper;
	TVApplicationController* _appController;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) TVCKSearchAppSetupHelper * setupHelper;                     //@synthesize setupHelper=_setupHelper - In the implementation block
@property (nonatomic,retain) TVApplicationController * appController;                    //@synthesize appController=_appController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) TVCKSearchSiriContext * siriContext;                      //@synthesize siriContext=_siriContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(id)_launchOptions;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(TVCKSearchSiriContext *)siriContext;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)preferredFocusEnvironments;
-(TVApplicationController *)appController;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)setAppController:(TVApplicationController *)arg1 ;
-(TVCKSearchAppSetupHelper *)setupHelper;
-(void)setSetupHelper:(TVCKSearchAppSetupHelper *)arg1 ;
-(void)_startAppControllerWithBootURL:(id)arg1 ;
@end

