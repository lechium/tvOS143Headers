/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerOperation.h>

@protocol PKSubcredentialPairingFlowControllerProtocol;
@class PKExplanationView, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {

	PKExplanationView* _explainationView;
	BOOL _isAdvancing;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(unsigned long long)operation;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)cancelButtonPressed;
-(void)configureExplanationViewWithError:(id)arg1 ;
@end

