/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVHKStoreAccount : NSObject {

	NSString* _accountName;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                 //@synthesize password=_password - In the implementation block
+(id)new;
-(id)init;
-(NSString *)password;
-(NSString *)accountName;
-(id)initWithAccountName:(id)arg1 andPassword:(id)arg2 ;
-(void)homeSharingGroupIDWithCompletion:(/*^block*/id)arg1 ;
@end

