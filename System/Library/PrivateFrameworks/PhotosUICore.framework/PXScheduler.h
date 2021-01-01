/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PXScheduler : NSObject {

	NSMutableArray* _pendingBlocks;
	BOOL _hasPendingPerformInDefaultRunLoopMode;
	BOOL _isPerformingPendingBlocks;

}
+(id)sharedScheduler;
-(id)init;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)dispatchInMainTransaction:(/*^block*/id)arg1 ;
-(void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)scrollViewDidScroll;
-(void)scrollViewWillLayoutSubviews;
-(void)_enteredDefaultRunLoopMode;
-(void)_performPendingBlocksIfNeeded;
-(void)_performPendingBlocks;
-(void)dispatchOnMainThreadWhenNotScrolling:(/*^block*/id)arg1 ;
-(void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
@end
