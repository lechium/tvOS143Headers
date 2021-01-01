/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;
@class UIView, NSString;

@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	UIView*<TVAuxiliaryViewSelecting> __selectingView;
	BOOL _unpressOnEndAnimating;
	struct {
		BOOL respondsToDidUnfocus;
		BOOL respondsToDidSelect;
		BOOL respondsToLayeredImageContainerLayerWithinCollectionViewCell;
	}  _delegateFlags;
	id<TVCollectionViewLockupCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVCollectionViewLockupCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVCollectionViewLockupCellDelegate>)delegate;
-(void)setDelegate:(id<TVCollectionViewLockupCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)layeredImageContainerLayer;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(BOOL)_descendantsShouldHighlight;
-(id)selectingView;
-(id)_selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)_handleSelect;
@end
