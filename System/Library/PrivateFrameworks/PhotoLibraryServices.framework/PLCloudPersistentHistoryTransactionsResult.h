/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLCloudChangeEventsResult.h>

@class NSString, NSArray, PLPersistentHistoryTransactionIterator, NSPersistentHistoryToken;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {

	NSArray* _transactions;
	PLPersistentHistoryTransactionIterator* _transactionIterator;
	/*^block*/id _isTransactionSyncableFilter;
	long long _resultType;
	NSString* _currentTokenDescription;
	NSPersistentHistoryToken* _lastProcessedCoreDataToken;

}

@property (readonly) long long resultType;                                                    //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSString * currentTokenDescription;                                 //@synthesize currentTokenDescription=_currentTokenDescription - In the implementation block
@property (copy,readonly) NSPersistentHistoryToken * lastProcessedCoreDataToken;              //@synthesize lastProcessedCoreDataToken=_lastProcessedCoreDataToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)isTransactionSyncableFilter;
+(id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2 ;
-(long long)resultType;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)currentTokenDescription;
-(id)initWithSuccesfulTransactionIterator:(id)arg1 ;
-(id)initWithUnsuccessfulResultType:(long long)arg1 ;
-(id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2 ;
-(void)sendLocalEvent:(id)arg1 toEnumerationBlock:(/*^block*/id)arg2 ;
-(id)localEventForAllTransactions;
-(void)updateLastProcessedCoreDataToken;
-(NSPersistentHistoryToken *)lastProcessedCoreDataToken;
@end

