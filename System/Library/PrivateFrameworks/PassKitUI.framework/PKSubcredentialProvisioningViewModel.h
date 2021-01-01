/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSubcredentialProvisioningViewModelProtocol.h>

@class PKSubcredentialProvisioningController, PKSubcredentialProvisioningConfiguration, NSString;

@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol> {

	PKSubcredentialProvisioningController* _provisioningController;
	PKSubcredentialProvisioningConfiguration* _config;

}

@property (nonatomic,retain) PKSubcredentialProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) PKSubcredentialProvisioningConfiguration * config;                           //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKSubcredentialProvisioningConfiguration *)config;
-(void)setConfig:(PKSubcredentialProvisioningConfiguration *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(PKSubcredentialProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKSubcredentialProvisioningController *)arg1 ;
-(void)cancelProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)startProvisioning;
-(void)rescindSimilarInvitationsToSharingRequest:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
