/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentCredential.h>

@class PKEncryptedPushProvisioningTarget, NSString, NSData;

@interface PKPaymentShareableCredential : PKPaymentCredential {

	BOOL _backgroundProvisioning;
	PKEncryptedPushProvisioningTarget* _encryptedProvisioningTarget;
	NSString* _sharingInstanceIdentifier;
	NSData* _passThumbnailImageData;

}

@property (nonatomic,readonly) PKEncryptedPushProvisioningTarget * encryptedProvisioningTarget;              //@synthesize encryptedProvisioningTarget=_encryptedProvisioningTarget - In the implementation block
@property (nonatomic,readonly) NSString * sharingInstanceIdentifier;                                         //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * passThumbnailImageData;                                              //@synthesize passThumbnailImageData=_passThumbnailImageData - In the implementation block
@property (getter=isBackgroundProvisioning,nonatomic,readonly) BOOL backgroundProvisioning;                  //@synthesize backgroundProvisioning=_backgroundProvisioning - In the implementation block
-(NSString *)sharingInstanceIdentifier;
-(id)initWithEncryptedProvisioningTarget:(id)arg1 provisioningSharingIdentifier:(id)arg2 passThumbnailImageData:(id)arg3 ;
-(id)initWithProvisioningSharingIdentifer:(id)arg1 isBackgroundProvisioning:(BOOL)arg2 ;
-(PKEncryptedPushProvisioningTarget *)encryptedProvisioningTarget;
-(NSData *)passThumbnailImageData;
-(BOOL)isBackgroundProvisioning;
@end

