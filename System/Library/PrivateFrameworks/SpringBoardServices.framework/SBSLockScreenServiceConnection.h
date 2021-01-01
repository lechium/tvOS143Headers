/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class BSServiceConnection, NSCountedSet;

@interface SBSLockScreenServiceConnection : NSObject {

	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	NSCountedSet* _lock_preventPasscodeLockReasons;
	NSCountedSet* _lock_preventSpuriousScreenUndimReasons;

}
-(id)init;
-(void)dealloc;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
@end

