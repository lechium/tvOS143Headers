/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSCountedSet, NSMutableArray;

@interface NSFilePresenterRelinquishment : NSObject {

	os_unfair_lock_s _lock;
	NSCountedSet* _blockingAccessClaimIDs;
	NSMutableArray* _relinquishReplies;
	/*^block*/id _reacquirer;
	NSMutableArray* _blockingPrerelinquishReplies;
	BOOL _prerelinquishInProgress;

}
-(void)dealloc;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg1 ;
-(void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setReacquirer:(/*^block*/id)arg1 ;
-(void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(/*^block*/id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_locked_addPrerelinquishReply:(/*^block*/id)arg1 ;
-(BOOL)_locked_addRelinquishReply:(/*^block*/id)arg1 ;
-(void)didRelinquish;
@end

