/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSHashTable, NSObject;

@interface PCSLockManager : NSObject {

	NSHashTable* _observers;
	NSHashTable* _holders;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSHashTable * observers;               //@synthesize observers=_observers - In the implementation block
@property (retain) NSHashTable * holders;                 //@synthesize holders=_holders - In the implementation block
@property (retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)manager;
+(BOOL)holdAssertion;
+(void)dropAssertion;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)holdAssertion:(id)arg1 ;
-(void)dropAssertion:(id)arg1 ;
-(id)initManager;
-(void)_onlockDropAssertion:(id)arg1 ;
-(id)lockAssertion:(id)arg1 ;
-(NSHashTable *)holders;
-(void)setHolders:(NSHashTable *)arg1 ;
@end
