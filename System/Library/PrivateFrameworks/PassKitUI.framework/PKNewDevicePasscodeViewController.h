/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@protocol PKNewDevicePasscodeViewControllerDelegate;
@class PKPasscodeUpgradeFlowController, NSString;

@interface PKNewDevicePasscodeViewController : UIViewController <PKPaymentSetupPresentationProtocol> {

	PKPasscodeUpgradeFlowController* _flowController;
	long long _minimumPasscodeLength;
	unsigned long long _passcodeInputScreenType;
	unsigned long long _passcodeInputState;
	long long _context;
	NSString* _currentPasscode;
	NSString* _newPasscode;
	NSString* _constraintFailedInstructions;
	BOOL _viewHasAppeared;
	id<PKNewDevicePasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNewDevicePasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKNewDevicePasscodeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKNewDevicePasscodeViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 minimumPasscodeLength:(long long)arg2 withCurrentPasscode:(id)arg3 ;
@end

