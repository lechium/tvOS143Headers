/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKPaymentWebService, PKCredentialRegistrationMetadata;

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration {

	PKPaymentWebService* _webService;
	PKCredentialRegistrationMetadata* _registrationMetadata;

}

@property (nonatomic,readonly) PKPaymentWebService * webService;                                     //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) PKCredentialRegistrationMetadata * registrationMetadata;              //@synthesize registrationMetadata=_registrationMetadata - In the implementation block
-(PKPaymentWebService *)webService;
-(PKCredentialRegistrationMetadata *)registrationMetadata;
-(id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3 ;
@end

