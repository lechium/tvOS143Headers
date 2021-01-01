/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutItemSolver, NSCollectionLayoutItem;

@interface _UICollectionSolutionGroupArrangementItem : NSObject {

	_UICollectionLayoutItemSolver* _solution;
	CGRect _layoutFrame;

}

@property (assign,nonatomic) CGRect layoutFrame;                                      //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutItemSolver * solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
-(NSCollectionLayoutItem *)item;
-(_UICollectionLayoutItemSolver *)solution;
-(CGRect)layoutFrame;
-(id)initWithSolution:(id)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
@end

