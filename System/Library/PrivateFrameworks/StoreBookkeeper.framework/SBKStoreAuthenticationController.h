/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject {

	BOOL _shouldAuthenticate;
	SSAccount* _storeAccount;

}

@property (readonly) SSAccount * storeAccount;              //@synthesize storeAccount=_storeAccount - In the implementation block
@property (assign) BOOL shouldAuthenticate;                 //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
+(id)lastSyncedAccountIdentifier;
+(id)lastSyncedAccountName;
+(void)clearLastSyncnedAccount;
+(id)lastFailedSyncAccountIdentifier;
+(id)lastFailedSyncAccountName;
-(id)initWithStoreAccount:(id)arg1 ;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(BOOL)isAuthenticationValidForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)saveAccountToLastSyncedDefaults;
-(void)saveAccountToLastFailedSyncDefaults;
-(SSAccount *)storeAccount;
-(BOOL)shouldForceAuthenticationForTransaction:(id)arg1 ;
-(id)authenticationErrorsForTransaction:(id)arg1 ;
@end

