/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@protocol AMSMediaTokenServiceProtocol;
@class AMSURLRequestEncoder, ACAccount, AMSProcessInfo, NSString;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding> {

	BOOL _disableAccountMediaTypeComponent;
	id<AMSMediaTokenServiceProtocol> _tokenService;
	AMSURLRequestEncoder* _requestEncoder;

}

@property (nonatomic,readonly) AMSURLRequestEncoder * requestEncoder;                      //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (assign,nonatomic) BOOL disableAccountMediaTypeComponent;                        //@synthesize disableAccountMediaTypeComponent=_disableAccountMediaTypeComponent - In the implementation block
@property (assign,nonatomic) BOOL URLKnownToBeTrusted; 
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (assign,nonatomic) BOOL disableResponseDecoding; 
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder; 
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
-(id)requestWithURL:(id)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(void)setURLKnownToBeTrusted:(BOOL)arg1 ;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(id)initWithTokenService:(id)arg1 bag:(id)arg2 ;
-(AMSURLRequestEncoder *)requestEncoder;
-(BOOL)disableResponseDecoding;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)setDisableResponseDecoding:(BOOL)arg1 ;
-(BOOL)URLKnownToBeTrusted;
-(id)requestWithComponents:(id)arg1 ;
-(BOOL)disableAccountMediaTypeComponent;
-(void)setDisableAccountMediaTypeComponent:(BOOL)arg1 ;
@end

