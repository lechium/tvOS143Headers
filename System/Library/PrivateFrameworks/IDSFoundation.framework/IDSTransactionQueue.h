/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSTransactionQueue : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _transactions;

}

@property (nonatomic,retain) NSMutableArray * transactions;              //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                      //@synthesize lock=_lock - In the implementation block
-(id)init;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)_prependTransaction:(id)arg1 ;
-(void)_appendTransaction:(id)arg1 ;
-(void)_readyTransaction:(id)arg1 ;
-(void)_removeTransaction:(id)arg1 ;
-(NSMutableArray *)transactions;
-(void)prependItem:(id)arg1 ;
-(void)appendItem:(id)arg1 ;
-(/*^block*/id)appendPendingItem:(id)arg1 ;
-(void)executeReadyItemsWithBlock:(/*^block*/id)arg1 ;
-(void)setTransactions:(NSMutableArray *)arg1 ;
@end

