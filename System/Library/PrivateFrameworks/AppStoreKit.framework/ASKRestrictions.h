/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore;

@interface ASKRestrictions : NSObject {

	long long _maximumAppContentRating;
	BOOL _isAppInstallationAllowed;
	BOOL _isRunningInStoreDemoMode;
	BOOL _hasManagedAppleID;
	BOOL _isAccountModificationRestricted;
	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) long long maximumAppContentRating; 
@property (nonatomic,readonly) BOOL isAppInstallationAllowed; 
@property (nonatomic,readonly) BOOL isRunningInStoreDemoMode; 
@property (nonatomic,readonly) BOOL hasManagedAppleID; 
@property (nonatomic,readonly) BOOL isAccountModificationRestricted; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACAccountStore *)accountStore;
-(BOOL)isAppInstallationAllowed;
-(id)initWithAccountStore:(id)arg1 ;
-(BOOL)isRunningInStoreDemoMode;
-(BOOL)isAccountModificationRestricted;
-(void)updateRestrictionsAndNotifyIfNeeded;
-(void)updateRestrictionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)maximumAppContentRating;
-(BOOL)hasManagedAppleID;
@end

