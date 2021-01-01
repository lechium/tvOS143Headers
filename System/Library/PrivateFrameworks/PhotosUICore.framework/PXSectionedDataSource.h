/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXSectionedLayoutEngineDataSourceSnapshot.h>

@class NSNumber, PXIndexPathSet, NSString;

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot> {

	NSNumber* _containsAnyItemsCache;
	NSNumber* _containsMultipleItemsCache;
	PXSimpleIndexPath _firstItemIndexPathCache;
	PXSimpleIndexPath _lastItemIndexPathCache;
	unsigned long long _identifier;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> sectionedDataSourceLog; 
@property (nonatomic,readonly) unsigned long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) BOOL containsAnyItems; 
@property (nonatomic,readonly) BOOL containsMultipleItems; 
@property (nonatomic,readonly) PXSimpleIndexPath firstSectionIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath lastSectionIndexPath; 
@property (nonatomic,readonly) PXIndexPathSet * allSectionIndexPaths; 
@property (nonatomic,readonly) PXSimpleIndexPath firstItemIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath lastItemIndexPath; 
@property (nonatomic,readonly) PXIndexPathSet * allItemIndexPaths; 
@property (nonatomic,readonly) PXIndexPathSet * allIndexPaths; 
@property (nonatomic,readonly) id<PXFastEnumeration> allItemsEnumerator; 
@property (nonatomic,readonly) id<PXFastEnumeration> allSectionsEnumerator; 
@property (nonatomic,readonly) id<PXFastEnumeration> allObjectsEnumerator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyDataSource;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)identifier;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(unsigned long long)totalItemCount;
-(id)inputForItem:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectID:(id)arg1 ;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectReferenceAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathSetForObjectIDs:(id)arg1 ;
-(BOOL)containsAnyItems;
-(BOOL)containsMultipleItems;
-(BOOL)couldObjectReferenceAppear:(id)arg1 ;
-(void)prefetchIndexPaths:(id)arg1 ;
-(void)prefetchSections:(id)arg1 ;
-(id)objectIDAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(Class)objectReferenceClassForSection;
-(Class)objectReferenceClassForItem;
-(Class)objectReferenceClassForSubItem;
-(NSObject*<OS_os_log>)sectionedDataSourceLog;
-(id)objectReferenceForObjectReference:(id)arg1 ;
-(PXSimpleIndexPath)convertIndexPath:(PXSimpleIndexPath)arg1 fromSectionedDataSource:(id)arg2 ;
-(id)convertIndexPathSet:(id)arg1 fromSectionedDataSource:(id)arg2 ;
-(void)enumerateItemIndexPathsStartingAtIndexPath:(PXSimpleIndexPath)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateItemIndexPathsStartingAtIndexPath:(PXSimpleIndexPath)arg1 untilEndIndexPath:(PXSimpleIndexPath)arg2 usingBlock:(/*^block*/id)arg3 ;
-(PXSimpleIndexPath)firstSectionIndexPath;
-(PXSimpleIndexPath)lastSectionIndexPath;
-(PXIndexPathSet *)allSectionIndexPaths;
-(PXSimpleIndexPath)firstNonEmptySectionAtOrBeforeSection:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)firstItemIndexPath;
-(PXSimpleIndexPath)lastItemIndexPath;
-(PXIndexPathSet *)allItemIndexPaths;
-(PXIndexPathSet *)allIndexPaths;
-(id)itemsEnumeratorForIndexPaths:(id)arg1 ;
-(id<PXFastEnumeration>)allItemsEnumerator;
-(id)sectionsEnumeratorForIndexPaths:(id)arg1 ;
-(id<PXFastEnumeration>)allSectionsEnumerator;
-(id)objectsEnumeratorForIndexPaths:(id)arg1 ;
-(id<PXFastEnumeration>)allObjectsEnumerator;
-(id)indexPathSetForItemsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)itemIndexPathsForSections:(id)arg1 ;
-(id)indexPathSetFromIndexPath:(PXSimpleIndexPath)arg1 toIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)objectIDsForIndexPathSet:(id)arg1 ;
-(id)fetchAllItemObjects;
-(long long)_numberOfAssetsWithMaximum:(long long)arg1 ;
@end

