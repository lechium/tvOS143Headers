/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAFMIPAuthenticateResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccountInfo;

}

@property (nonatomic,readonly) NSString * fmipWipeToken; 
@property (nonatomic,readonly) NSString * fmipUrl; 
@property (nonatomic,readonly) NSString * fmipDsid; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)fmipWipeToken;
-(NSString *)fmipUrl;
-(NSString *)fmipDsid;
@end
