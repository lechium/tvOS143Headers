/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXArrayChangeDetails.h>

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {

	BOOL _isNonIncremental;

}
+(id)changeDetailsWithNoIncrementalChanges;
+(BOOL)_mutableCopyInputs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasIncrementalChanges;
-(void)addChangeDetails:(id)arg1 ;
-(void)_becomeNonIncremental;
-(void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1 ;
-(void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2 ;
-(void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2 ;
-(void)_addRemovedIndex:(unsigned long long)arg1 ;
-(void)_addRemovedIndexes:(id)arg1 ;
-(void)_addInsertedRange:(NSRange)arg1 ;
-(void)_addInsertedIndexes:(id)arg1 ;
-(void)_updateMovesWithChangesDetails:(id)arg1 ;
-(void)_updateChangedIndexesWithChangeDetails:(id)arg1 ;
-(void)_updatePropertyChangesWithChangeDetails:(id)arg1 ;
@end

