/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSolveResult.h>
@class NSIndexSet, NSSet;


@protocol _UICollectionLayoutSolveResult <NSObject>
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@property (nonatomic,readonly) CGPoint contentOffsetAdjustment; 
@required
-(NSIndexSet *)invalidatedIndexes;
-(CGPoint)contentOffsetAdjustment;
-(NSSet *)invalidatedAuxillaryKinds;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
-(id)invalidatedAuxillaryOffsets;

@end


@class NSIndexSet, NSSet, NSMutableIndexSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult> {

	NSMutableIndexSet* _invalidatedIndexes;
	NSMutableDictionary* _invalidatedAuxillaryIndexesDict;
	CGPoint _contentOffsetAdjustment;

}

@property (assign,nonatomic) CGPoint contentOffsetAdjustment;                  //@synthesize contentOffsetAdjustment=_contentOffsetAdjustment - In the implementation block
@property (nonatomic,readonly) NSIndexSet * invalidatedIndexes; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(NSIndexSet *)invalidatedIndexes;
-(void)addInvalidatedItemIndexes:(id)arg1 ;
-(CGPoint)contentOffsetAdjustment;
-(NSSet *)invalidatedAuxillaryKinds;
-(id)indexesForInvalidatedAuxillariesOfKind:(id)arg1 ;
-(id)invalidatedAuxillaryOffsets;
-(void)addInvalidatedItemIndexesInRange:(NSRange)arg1 ;
-(void)addInvalidatedSupplementariesWithOffsets:(id)arg1 ;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 indexes:(id)arg2 ;
-(void)addInvalidatedItemIndex:(long long)arg1 ;
-(void)addInvalidatedAuxillaryOfKind:(id)arg1 index:(long long)arg2 ;
@end

