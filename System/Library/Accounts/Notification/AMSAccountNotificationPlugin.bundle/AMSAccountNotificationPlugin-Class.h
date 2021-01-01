/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_postActiveAccountChangedNotification;
+(void)_removeAccount:(id)arg1 ;
+(BOOL)_shouldProcessChangeForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 ;
+(id)_stringForAccountChangeType:(int)arg1 ;
+(void)_postAccountsChangedNotificationsIfNeededForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 ;
+(void)_postStorefontChangedNotificationIfNeededForAccount:(id)arg1 oldAccount:(id)arg2 store:(id)arg3 ;
+(void)_updateLocalAccountStorefrontIfNeededForAccount:(id)arg1 store:(id)arg2 ;
+(void)_saveAccount:(id)arg1 ;
+(void)_logDeltasForCookies:(id)arg1 oldCookies:(id)arg2 ;
+(void)_postAccountsChangedInternalNotification;
+(void)_postAccountsChangedNotification;
+(id)_activeStorefrontIdentifier;
+(void)_setActiveStorefrontIdentifier:(id)arg1 ;
+(void)_postStorefrontChangedNotification;
+(BOOL)_shouldSignOutOfModifiedAccount:(id)arg1 ;
+(BOOL)_shouldRemoveModifiedAccount:(id)arg1 ;
+(id)_mergeCookiesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)_logDirtyPropertiesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)_processAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_processAccountDeletion:(id)arg1 inStore:(id)arg2 ;
-(void)_processAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_processAccountFlagsForAccount:(id)arg1 oldAccount:(id)arg2 store:(id)arg3 ;
-(void)_processPrivacyAcknowledgementForAccount:(id)arg1 oldAccount:(id)arg2 store:(id)arg3 ;
-(BOOL)_handleRemoteDeviceChangeLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_handleAccountMediaTypeLogicForAccountWillChange:(id)arg1 ;
-(BOOL)_handleCookieLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(BOOL)_handleLocalAccountLogicForAccountWillChange:(id)arg1 ;
-(BOOL)_handleMultiUserLogicForAccountWillChange:(id)arg1 ;
-(BOOL)_handlePrivacyAcknowledgementLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(BOOL)_handleSandboxAccountLogicForAccountWillChange:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_handleStorefrontLogicForAccountWillChange:(id)arg1 ;
-(BOOL)_handleUserManagementLogicForAccountWillChange:(id)arg1 changeType:(int)arg2 ;
-(BOOL)_canSaveAccount:(id)arg1 withOtherAccounts:(id)arg2 ;
-(void)_processiCloudAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_processiTunesAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_logoutOfAccount:(id)arg1 store:(id)arg2 ;
-(void)_processIDMSAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_processiTunesAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_deactivateAllAccountsExcept:(id)arg1 inStore:(id)arg2 ;
-(void)_resetBiometricsForAccount:(id)arg1 ;
-(void)_resetFollowUpsForAccount:(id)arg1 ;
-(void)_resetMusicSpecificPreferences;
-(void)_resetSpringBoardDefaultPNGSnapshots;
-(void)_resetStoreDownloadQueue;
-(void)_resetSubscriptionStatusForAccount:(id)arg1 ;
-(void)_resetDeviceOffersIfNeeded;
-(BOOL)_mergeLocalPrivacyAcknowledgementIntoAccount:(id)arg1 withStore:(id)arg2 ;
-(void)_processNotificationsForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 store:(id)arg4 ;
-(id)_fetchPersonaIDIfCurrentPersonaIsEnterprise;
@end

