/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialInvitationProvisioningFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialInvitationFlowControllerProtocol;
@class PKAppletSubcredentialSharingSession, PKHeroCardExplainationHeaderView, NSString, PKPeerPaymentContactResolver, PKSubcredentialInvitationFlowControllerContext;

@interface PKSubcredentialInvitationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {

	PKAppletSubcredentialSharingSession* _session;
	PKHeroCardExplainationHeaderView* _heroCardView;
	id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
	id<PKSubcredentialProvisioningViewModelProtocol> _remoteProvisioningViewModel;
	NSString* _contactName;
	PKPeerPaymentContactResolver* _contactResolver;
	BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
	PKSubcredentialInvitationFlowControllerContext* _provisioningContext;
	id<PKSubcredentialInvitationFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
-(unsigned long long)operation;
-(void)viewDidLoad;
-(void)resetState;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3 ;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showSuccessCheckmark:(BOOL)arg1 ;
-(void)advanceToNextState;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialInvitationFlowControllerContext *)arg1 ;
-(id)sharingSessionWithDelegate:(id)arg1 ;
-(id)contactKeysToFetch;
-(id)bodyTextForContext:(id)arg1 ;
-(void)startLocalDeviceProvisioning;
-(void)startRemoteDeviceProvisioning;
@end

