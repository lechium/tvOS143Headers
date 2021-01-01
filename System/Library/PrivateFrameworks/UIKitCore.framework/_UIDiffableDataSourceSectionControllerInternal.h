/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDiffableDataSourceSectionController.h>

@class NSArray, NSSet;

@interface _UIDiffableDataSourceSectionControllerInternal : _UIDiffableDataSourceSectionController

@property (nonatomic,readonly) NSArray * itemRenderers; 
@property (nonatomic,readonly) NSSet * associatedSectionIdentifiers; 
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)collectionViewDiffableDataSourceSectionController;
-(id)initWithItemRenderers:(id)arg1 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(/*^block*/id)arg3 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(/*^block*/id)arg4 ;
@end

