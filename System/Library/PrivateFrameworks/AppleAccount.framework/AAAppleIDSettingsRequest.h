/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class ACAccountStore, ACAccount;

@interface AAAppleIDSettingsRequest : AARequest {

	ACAccountStore* _store;
	BOOL _forceGSToken;
	ACAccount* _grandSlamAccount;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;              //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (assign,nonatomic) BOOL forceGSToken;                           //@synthesize forceGSToken=_forceGSToken - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(BOOL)forceGSToken;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(ACAccount *)grandSlamAccount;
-(void)setForceGSToken:(BOOL)arg1 ;
@end
