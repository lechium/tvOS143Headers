/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface VUIShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateLayout;
	BOOL _invalidateVerticalBumps;
	NSIndexPath* _focusedItemIndexPath;

}

@property (assign,nonatomic) BOOL invalidateLayout;                           //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL invalidateVerticalBumps;                    //@synthesize invalidateVerticalBumps=_invalidateVerticalBumps - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedItemIndexPath;              //@synthesize focusedItemIndexPath=_focusedItemIndexPath - In the implementation block
-(BOOL)invalidateLayout;
-(void)setInvalidateLayout:(BOOL)arg1 ;
-(void)setInvalidateVerticalBumps:(BOOL)arg1 ;
-(void)setFocusedItemIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)invalidateVerticalBumps;
-(NSIndexPath *)focusedItemIndexPath;
@end

