/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPeerPaymentConfirmNameViewControllerDelegate;
@class PKFamilyMember, UIBarButtonItem, NSString;

@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupViewControllerDelegate> {

	PKFamilyMember* _familyMember;
	long long _context;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _spinnerButton;
	BOOL _showSpinner;
	id<PKPeerPaymentConfirmNameViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentConfirmNameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPeerPaymentConfirmNameViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPeerPaymentConfirmNameViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)_donePressed;
-(void)_continue;
-(void)_cancelPressed;
-(void)showSpinner:(BOOL)arg1 ;
-(id)initWithFamilyMember:(id)arg1 delegate:(id)arg2 context:(long long)arg3 ;
@end
