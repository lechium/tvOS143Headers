/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNACAccountProvider.h>

@class NSArray;

@interface _CNACAccountStaticProvider : CNACAccountProvider {

	NSArray* _accountChildAccountsPairs;

}

@property (nonatomic,readonly) NSArray * accountChildAccountsPairs;              //@synthesize accountChildAccountsPairs=_accountChildAccountsPairs - In the implementation block
-(id)accountsWithAccountType:(id)arg1 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(NSArray *)accountChildAccountsPairs;
-(id)initWithAccounts:(id)arg1 ;
@end
