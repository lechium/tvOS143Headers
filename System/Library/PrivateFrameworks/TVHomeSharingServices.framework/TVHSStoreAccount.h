/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVHSStoreAccount : NSObject {

	NSString* _accountName;
	NSString* _password;

}

@property (nonatomic,copy) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * password;                 //@synthesize password=_password - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(id)initWithAccountName:(id)arg1 andPassword:(id)arg2 ;
-(void)homeSharingGroupIDWithCompletion:(/*^block*/id)arg1 ;
@end

