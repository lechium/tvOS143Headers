/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSSet;

@interface _UICollectionViewSelectionController : NSObject {

	NSMutableSet* _selectedIndexPaths;
	NSMutableSet* _highlightedIndexPaths;
	NSMutableSet* _nonvisibleTrackedSelectedIdentifiers;
	BOOL _allowsMultipleSelection;

}

@property (nonatomic,readonly) long long selectedItemsCount; 
@property (nonatomic,readonly) long long highlightedItemsCount; 
@property (nonatomic,copy,readonly) NSSet * selectedIndexPaths; 
@property (nonatomic,copy,readonly) NSSet * highlightedIndexPaths; 
@property (assign,nonatomic) BOOL allowsMultipleSelection;                      //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
-(id)init;
-(void)reset;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(NSSet *)selectedIndexPaths;
-(void)deselectItemAtIndexPath:(id)arg1 ;
-(BOOL)isSelectedAtIndexPath:(id)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(long long)selectedItemsCount;
-(BOOL)isHighlightedAtIndexPath:(id)arg1 ;
-(void)unhighlightItemAtIndexPath:(id)arg1 ;
-(NSSet *)highlightedIndexPaths;
-(void)unhighlightAllItems;
-(void)highlightItemAtIndexPath:(id)arg1 ;
-(void)rebaseItemsWithDiffableTransaction:(id)arg1 ;
-(id)rebaseIndexPath:(id)arg1 withDiffableTransaction:(id)arg2 ;
-(void)deselectAllItems;
-(void)rebaseItemsWithTranslator:(id)arg1 ;
-(long long)highlightedItemsCount;
-(void)selectItemsAtIndexPaths:(id)arg1 ;
-(void)deselectItemsAtIndexPaths:(id)arg1 ;
-(void)highlightItemsAtIndexPaths:(id)arg1 ;
-(void)unhighlightItemsAtIndexPaths:(id)arg1 ;
-(id)rebaseIndexPath:(id)arg1 withTranslator:(id)arg2 ;
-(id)selectedIdentifiersForSnapshot:(id)arg1 ;
-(id)highlightedIdentifiersForSnapshot:(id)arg1 ;
@end

