/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSError;

@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding> {

	NSString* _apiToken;
	NSError* _error;

}

@property (nonatomic,copy) NSString * apiToken;                     //@synthesize apiToken=_apiToken - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
-(NSString *)apiToken;
-(void)setApiToken:(NSString *)arg1 ;
@end

