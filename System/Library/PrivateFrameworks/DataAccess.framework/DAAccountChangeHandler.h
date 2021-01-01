/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DAAccountChangeHandler : NSObject
+(BOOL)_handleAccountAddOrModify:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 accountUpdater:(id)arg4 ;
+(BOOL)_handleCalDAVAccountModifiedByDataAccess:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 accountUpdater:(id)arg4 ;
+(void)_handleAccountDelete:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 ;
+(void)_cleanupStoreForDisabledAccount:(id)arg1 inStore:(id)arg2 ;
+(void)_setupStoreForNewAccount:(id)arg1 ;
+(BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)arg1 inStore:(id)arg2 accountUpdater:(id)arg3 ;
+(void)_sanityCheckCalDAVAccount:(id)arg1 modifiedDataClasses:(id)arg2 ;
+(BOOL)_sanityCheckChildAccountOfType:(id)arg1 withParent:(id)arg2 accountChangeInfo:(id)arg3 inStore:(id)arg4 updater:(id)arg5 ;
+(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
+(void)_performBlockWithGenericClientDB:(/*^block*/id)arg1 ;
+(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)_pickAccountToKeepWithAccount:(id)arg1 andAccount:(id)arg2 ;
+(BOOL)_sanityCheckChildDAVAccount:(id)arg1 withParent:(id)arg2 modifiedDataClasses:(id)arg3 ;
+(BOOL)handleAccountWillChange:(id)arg1 withChangeInfo:(id)arg2 store:(id)arg3 accountUpdater:(id)arg4 ;
+(void)handleAccountDidChange:(id)arg1 withChangeInfo:(id)arg2 store:(id)arg3 ;
@end

