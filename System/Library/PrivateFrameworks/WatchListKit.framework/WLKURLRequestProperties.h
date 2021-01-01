/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, NSDictionary, NSNumber;

@interface WLKURLRequestProperties : NSObject {

	NSString* _endpoint;
	NSString* _httpMethod;
	NSDictionary* _queryParameters;
	NSDictionary* _headers;
	NSString* _caller;
	NSNumber* _timeout;
	NSNumber* _apiVersion;
	long long _options;

}

@property (nonatomic,copy) NSString * endpoint;                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                       //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * caller;                           //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSNumber * timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSNumber * apiVersion;                       //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign,nonatomic) long long options;                         //@synthesize options=_options - In the implementation block
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(long long)arg8 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setTimeout:(NSNumber *)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(NSString *)endpoint;
-(NSNumber *)timeout;
-(void)setEndpoint:(NSString *)arg1 ;
-(id)shortDescription;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)httpMethod;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSNumber *)apiVersion;
-(void)setApiVersion:(NSNumber *)arg1 ;
-(id)URLRequestWithConfiguration:(id)arg1 ;
@end

