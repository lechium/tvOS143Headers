/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSArray, NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	unsigned long long _featureIdentifier;
	NSArray* _certificates;
	NSURL* _baseURL;
	NSString* _coreIDVNextStepToken;
	NSString* _previousContextIdentifier;
	NSString* _actionIdentifier;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                            //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                      //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                                                      //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * coreIDVNextStepToken;                                             //@synthesize coreIDVNextStepToken=_coreIDVNextStepToken - In the implementation block
@property (nonatomic,copy) NSString * previousContextIdentifier;                                        //@synthesize previousContextIdentifier=_previousContextIdentifier - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                                                 //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(NSArray *)certificates;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(unsigned long long)featureIdentifier;
-(NSString *)actionIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(NSString *)coreIDVNextStepToken;
-(void)setCoreIDVNextStepToken:(NSString *)arg1 ;
-(NSString *)previousContextIdentifier;
-(void)setPreviousContextIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

