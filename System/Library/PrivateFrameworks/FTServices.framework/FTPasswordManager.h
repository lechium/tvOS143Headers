/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACMonitoredAccountStoreDelegateProtocol.h>
#import <FTServices/FTPasswordManager.h>

@protocol FTPasswordManager <NSObject>
@required
-(id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 failIfNotSilent:(BOOL)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 forceRenewal:(BOOL)arg6 failIfNotSilent:(BOOL)arg7 outRequestID:(id*)arg8 completionBlock:(/*^block*/id)arg9;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8;
-(BOOL)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2;
-(void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5;
-(void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;
-(void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;
-(void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg1 username:(id)arg2;
-(void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4;
-(void)setAccountStatus:(id)arg1 forProfileID:(id)arg2 username:(id)arg3 service:(id)arg4;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
-(id)profileIDForACAccount:(id)arg1;
-(void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)cleanUpAccountsBasedOnInUseUsernamesBlock:(/*^block*/id)arg1 profileIDBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)performCleanUpWithCompletion:(/*^block*/id)arg1;
-(void)updatePreviousUsername:(id)arg1 toNewUsername:(id)arg2;

@end


@class NSMutableSet, ACAccountStore, IMUserNotificationCenter, _FTPasswordManagerCachedAuthTokenInfo, NSString;

@interface FTPasswordManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager> {

	NSMutableSet* _runningQueries;
	ACAccountStore* _accountStore;
	IMUserNotificationCenter* _userNotificationCenter;
	_FTPasswordManagerCachedAuthTokenInfo* _cachedAuthTokenInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(BOOL)arg3 showForgetPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 ;
-(id)init;
-(void)accountWasRemoved:(id)arg1 ;
-(void)accountCredentialChanged:(id)arg1 ;
-(id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(id)_findIDSAccountInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
-(id)_accountWithUsername:(id)arg1 inStore:(id)arg2 ;
-(id)_profileIDForUsername:(id)arg1 inStore:(id)arg2 ;
-(id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3 ;
-(id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2 ;
-(id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_usernameHasCorrespondingIdMSAccount:(id)arg1 ;
-(id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3 ;
-(id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2 ;
-(id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 failIfNotSilent:(BOOL)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 forceRenewal:(BOOL)arg6 failIfNotSilent:(BOOL)arg7 outRequestID:(id*)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)_renewCredentialsIfPossibleForAccount:(id)arg1 username:(id)arg2 inServiceIdentifier:(id)arg3 originalInServiceIdentifier:(id)arg4 serviceName:(id)arg5 failIfNotSilent:(BOOL)arg6 renewHandler:(/*^block*/id)arg7 shortCircuitCompletionBlock:(/*^block*/id)arg8 ;
-(BOOL)_shouldForceSilentOnlyAuthForUsername:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2 shouldFailIfNotSilent:(BOOL)arg3 ;
-(void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8 ;
-(double)authTokenGracePeriod;
-(BOOL)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2 ;
-(void)_updateStatus:(id)arg1 onAccount:(id)arg2 ;
-(void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg1 username:(id)arg2 ;
-(void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4 ;
-(void)setAccountStatus:(id)arg1 forProfileID:(id)arg2 username:(id)arg3 service:(id)arg4 ;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)profileIDForACAccount:(id)arg1 ;
-(void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cleanUpAccountsBasedOnInUseUsernamesBlock:(/*^block*/id)arg1 profileIDBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performCleanUpWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePreviousUsername:(id)arg1 toNewUsername:(id)arg2 ;
-(BOOL)supportsAuthTokenRequests;
-(id)_findIDSAccountsInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
@end

