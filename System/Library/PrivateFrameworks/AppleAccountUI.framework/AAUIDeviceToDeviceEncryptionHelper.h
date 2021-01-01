/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;
@class UIViewController, AKAppleIDAuthenticationController;

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject {

	UIViewController* _presentingViewController;
	id<AAUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
	AKAppleIDAuthenticationController* _authController;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authController;                          //@synthesize authController=_authController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                        //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIDeviceToDeviceEncryptionHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIDeviceToDeviceEncryptionHelperDelegate>)delegate;
-(void)setDelegate:(id<AAUIDeviceToDeviceEncryptionHelperDelegate>)arg1 ;
-(UIViewController *)presentingViewController;
-(id)initWithPresentingViewController:(id)arg1 ;
-(id)_encryptionErrorFromError:(id)arg1 ;
-(BOOL)_isHSA2AvailableForAuthenticationContext:(id)arg1 ;
-(void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(AKAppleIDAuthenticationController *)authController;
-(void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_authenticateContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validatePasscodeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasPasscode;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAuthController:(AKAppleIDAuthenticationController *)arg1 ;
@end
