/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACSystemConfigManager : NSObject {

	NSObject*<OS_dispatch_queue> _preferencesQueue;
	SCPreferencesRef _preferencesSession;
	int _applySkipCount;

}
+(id)sharedInstance;
+(unsigned long long)_timeoutInterval;
+(void)_scheduleSharedInstanceTeardown;
+(void)_tearDown;
+(id)_livingInstance;
-(id)init;
-(void)dealloc;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)_createSCPreferencesSession;
-(void)_destroySCPreferencesSession;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2 ;
-(void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2 ;
-(void)_handleSCPreferencesSessionNotification:(unsigned)arg1 ;
@end
