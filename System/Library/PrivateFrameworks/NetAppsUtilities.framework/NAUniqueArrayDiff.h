/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSIndexSet, NSSet;

@interface NAUniqueArrayDiff : NSObject {

	NSArray* _fromArray;
	NSArray* _toArray;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _changedIndexes;
	NSSet* _movedIndexes;

}

@property (nonatomic,retain) NSArray * fromArray;                                  //@synthesize fromArray=_fromArray - In the implementation block
@property (nonatomic,retain) NSArray * toArray;                                    //@synthesize toArray=_toArray - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexes;                          //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedIndexes;                         //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * changedIndexes;                          //@synthesize changedIndexes=_changedIndexes - In the implementation block
@property (nonatomic,retain) NSSet * movedIndexes;                                 //@synthesize movedIndexes=_movedIndexes - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOperations; 
+(id)_createContainerSetFromArray:(id)arg1 options:(id)arg2 ;
+(id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3 ;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)toArray;
-(NSIndexSet *)changedIndexes;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(NSSet *)movedIndexes;
-(void)enumerateMovesUsingBlock:(/*^block*/id)arg1 ;
-(void)setInsertedIndexes:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexes:(NSIndexSet *)arg1 ;
-(void)setFromArray:(NSArray *)arg1 ;
-(void)setToArray:(NSArray *)arg1 ;
-(void)setMovedIndexes:(NSSet *)arg1 ;
-(void)setChangedIndexes:(NSIndexSet *)arg1 ;
-(unsigned long long)numberOfOperations;
-(NSArray *)fromArray;
@end

