/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {

	NSMutableDictionary* _additionalCookieHeaders;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)addCookieHeaders:(id)arg1 ;
@end

