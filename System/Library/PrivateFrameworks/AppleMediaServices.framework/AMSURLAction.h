/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString, NSURL, AMSAuthenticateResult, AMSDialogResult, NSDictionary;

@interface AMSURLAction : NSObject <NSSecureCoding> {

	long long _actionType;
	NSError* _error;
	NSString* _reason;
	NSURL* _redirectURL;
	NSString* _retryIdentifier;
	AMSAuthenticateResult* _authenticateResult;
	AMSDialogResult* _dialogResult;
	NSDictionary* _updatedHeaders;

}

@property (nonatomic,retain) AMSAuthenticateResult * authenticateResult;              //@synthesize authenticateResult=_authenticateResult - In the implementation block
@property (nonatomic,retain) AMSDialogResult * dialogResult;                          //@synthesize dialogResult=_dialogResult - In the implementation block
@property (nonatomic,retain) NSDictionary * updatedHeaders;                           //@synthesize updatedHeaders=_updatedHeaders - In the implementation block
@property (nonatomic,readonly) long long actionType;                                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSURL * redirectURL;                                   //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,retain) NSString * retryIdentifier;                              //@synthesize retryIdentifier=_retryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)retryAction;
+(id)actionWithError:(id)arg1 ;
+(id)redirectActionWithURL:(id)arg1 ;
+(id)proceedAction;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSError *)error;
-(id)initWithType:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(long long)actionType;
-(NSURL *)redirectURL;
-(void)setRetryIdentifier:(NSString *)arg1 ;
-(void)setUpdatedHeaders:(NSDictionary *)arg1 ;
-(void)setDialogResult:(AMSDialogResult *)arg1 ;
-(void)setAuthenticateResult:(AMSAuthenticateResult *)arg1 ;
-(AMSDialogResult *)dialogResult;
-(NSString *)retryIdentifier;
-(id)initWithType:(long long)arg1 error:(id)arg2 reason:(id)arg3 redirectURL:(id)arg4 ;
-(AMSAuthenticateResult *)authenticateResult;
-(NSDictionary *)updatedHeaders;
@end
