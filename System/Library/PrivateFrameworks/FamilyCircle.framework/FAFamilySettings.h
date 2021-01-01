/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircle/FAFamilyCircleRequest.h>
#import <libobjc.A.dylib/FAFamilySetupPrompterDelegate.h>

@class FAFamilySetupPrompter, UIViewController, ACAccount, NSString;

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {

	FAFamilySetupPrompter* _prompter;
	FAFamilySettings* _retainedSelf;
	BOOL _isFirstRun;
	UIViewController* _presentingViewController;
	ACAccount* _iTunesAccount;

}

@property (assign) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (retain) ACAccount * iTunesAccount;                                //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (assign) BOOL isFirstRun;                                          //@synthesize isFirstRun=_isFirstRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ACAccount *)iTunesAccount;
-(void)setITunesAccount:(ACAccount *)arg1 ;
-(void)launchiCloudFamilySettingsWithOptions:(id)arg1 ;
-(void)_launchPrefsUsingDaemonWithOptions:(id)arg1 ;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
-(void)launchiCloudFamilySettings;
-(BOOL)isFirstRun;
-(void)setIsFirstRun:(BOOL)arg1 ;
@end

