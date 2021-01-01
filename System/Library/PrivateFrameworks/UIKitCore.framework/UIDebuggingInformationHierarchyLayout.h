/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol UIDebuggingInformationHierarchyLayoutDelegate;
@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {

	NSMutableArray* _indexPathsToDelete;
	id<UIDebuggingInformationHierarchyLayoutDelegate> _delegate;
	NSDictionary* _allAttributes;
	NSMutableDictionary* _allLineAttributes;

}

@property (nonatomic,retain) NSDictionary * allAttributes;                                                   //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allLineAttributes;                                        //@synthesize allLineAttributes=_allLineAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<UIDebuggingInformationHierarchyLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)layoutAttributesClass;
-(id<UIDebuggingInformationHierarchyLayoutDelegate>)delegate;
-(void)setDelegate:(id<UIDebuggingInformationHierarchyLayoutDelegate>)arg1 ;
-(void)invalidateLayout;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(void)_recomputeAttributes;
-(NSDictionary *)allAttributes;
-(NSMutableDictionary *)allLineAttributes;
-(void)setAllAttributes:(NSDictionary *)arg1 ;
-(void)setAllLineAttributes:(NSMutableDictionary *)arg1 ;
@end

