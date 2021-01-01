/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSHashable.h>

@class NSString, ACAccount;

@interface AMSAccountsChangedResult : NSObject <AMSHashable> {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 ;
-(ACAccount *)account;
-(NSString *)hashedDescription;
@end
