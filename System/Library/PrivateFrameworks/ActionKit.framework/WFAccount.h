/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface WFAccount : MTLModel <NSSecureCoding> {

	NSString* _accountID;
	NSDate* _createdAt;
	NSDate* _updatedAt;

}

@property (nonatomic,copy,readonly) NSString * accountID;                  //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdAt;                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSDate * updatedAt;                    //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(id)accounts;
+(id)serviceID;
+(id)_accounts;
+(BOOL)deleteAccount:(id)arg1 ;
+(BOOL)saveAccount:(id)arg1 ;
+(unsigned long long)numberOfAccounts;
+(id)localizedServiceName;
+(Class)loginViewControllerClass;
+(BOOL)allowsMultipleAccounts;
+(id)pendingIgnoredNotifications;
+(void)notifyAccountsChanged;
+(void)setShouldIgnoreNotificationForService:(id)arg1 ;
+(id)addAccountObserver:(/*^block*/id)arg1 ;
+(void)removeAccountObserver:(id)arg1 ;
+(BOOL)shouldIgnoreNotificationForService:(id)arg1 ;
+(void)handleChangeForService:(id)arg1 ;
+(void)useAccountObservers:(/*^block*/id)arg1 ;
+(id)accountCache;
+(unsigned long long)_numberOfAccounts;
+(void)addAccountObserver:(/*^block*/id)arg1 forService:(id)arg2 ;
+(id)migrate:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(NSString *)localizedName;
-(NSString *)accountID;
-(NSDate *)createdAt;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)updatedAt;
@end

