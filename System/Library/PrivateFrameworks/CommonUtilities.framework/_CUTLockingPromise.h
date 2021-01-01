/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTPromise.h>

@class NSRecursiveLock, CUTResult, NSMutableArray;

@interface _CUTLockingPromise : CUTPromise {

	NSRecursiveLock* _lock;
	BOOL _done;
	CUTResult* _result;
	NSMutableArray* _resultBlocks;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL done;                                  //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultBlocks;              //@synthesize resultBlocks=_resultBlocks - In the implementation block
-(id)init;
-(NSRecursiveLock *)lock;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end
