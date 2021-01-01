/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIDataSourceSnapshotTranslating.h>

@class NSString;

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating> {

	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotterForSectionCountsProvider:(/*^block*/id)arg1 ;
+(id)snapshotterForSnapshot:(id)arg1 ;
+(id)snapshotterForDataSourceBackedView:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)snapshot;
-(long long)numberOfItems;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(NSRange)rangeForSection:(long long)arg1 ;
-(BOOL)_deleteSection:(long long)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 ;
-(BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2 ;
-(BOOL)_incrementSectionCount:(long long)arg1 ;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg1 ;
-(id)indexPathForAppendingInsertInSection:(long long)arg1 ;
-(id)initWithDataSourceBackedView:(id)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(void)_recomputeRangeLocations;
-(BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(id)initWithSectionCounts:(id)arg1 ;
-(BOOL)_deleteAllSections;
@end

