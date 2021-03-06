/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACTimedExpirer : NSObject {

	unsigned long long _invalidationInterval;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	os_unfair_lock_s _invalidationTimerLock;

}
+(id)expirerWithTimeout:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)scheduleExpiration:(/*^block*/id)arg1 ;
-(void)_cancelTimer;
-(void)_unsafeCancelTimer;
@end

