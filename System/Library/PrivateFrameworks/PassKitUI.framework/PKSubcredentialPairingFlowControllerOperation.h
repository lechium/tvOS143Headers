/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PKSubcredentialPairingFlowControllerContext;


@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation,PKFieldDetectSuppressor>
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext; 
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController; 
@property (nonatomic,readonly) unsigned long long operation; 
@optional
-(void)hostApplicationWillEnterForeground;
-(void)hostApplicationDidEnterBackground;

@required
-(unsigned long long)operation;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;

@end
