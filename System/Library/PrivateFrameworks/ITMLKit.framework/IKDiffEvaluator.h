/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSIndexSet, NSDictionary;

@interface IKDiffEvaluator : NSObject {

	NSArray* _objects;
	NSArray* _oldObjects;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _oldIndexesByNewIndex;

}

@property (nonatomic,copy,readonly) NSArray * objects;                                  //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * oldObjects;                               //@synthesize oldObjects=_oldObjects - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                          //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                        //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;              //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * oldIndexesByNewIndex;                //@synthesize oldIndexesByNewIndex=_oldIndexesByNewIndex - In the implementation block
-(NSArray *)objects;
-(NSIndexSet *)removedIndexes;
-(NSDictionary *)movedIndexesByNewIndex;
-(NSIndexSet *)addedIndexes;
-(id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(/*^block*/id)arg3 ;
-(void)enumerateCommonObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)_evaluateWithHashing:(/*^block*/id)arg1 ;
-(NSArray *)oldObjects;
-(NSDictionary *)oldIndexesByNewIndex;
@end

