/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest {

	NSString* _countryCode;
	NSString* _query;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                   //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(NSString *)query;
-(NSString *)countryCode;
-(void)setQuery:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

