/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DAContactsAccountProvider : NSObject
+(id)providerWithContactStore:(id)arg1 ;
+(id)providerWithAddressBook:(void*)arg1 ;
-(id)allAccounts;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
@end
