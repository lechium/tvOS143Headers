/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITableViewCell;


@protocol UITable_UITableViewCellDelegate <UITable>
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
@property (getter=_popoverControllerStyle,nonatomic,readonly) long long popoverControllerStyle; 
@property (getter=_isInModalViewController,nonatomic,readonly) BOOL inModalViewController; 
@property (getter=_wasEditing,nonatomic,readonly) BOOL wasEditing; 
@property (getter=_isEditingForSwipeDeletion,nonatomic,readonly) BOOL editingForSwipeDeletion; 
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UITableViewCell * swipeToDeleteCell; 
@required
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
-(void)_swipeToDeleteCell:(id)arg1;
-(BOOL)_beginReorderingForCell:(id)arg1 touch:(id)arg2;
-(void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3;
-(void)_animateDeletionOfRowAtIndexPath:(id)arg1;
-(BOOL)_shouldDrawThickSeparators;
-(double)_rowSpacing;
-(UIEdgeInsets*)_rawSeparatorInset;
-(void)_cellDidShowSelectedBackground:(id)arg1;
-(void)_cellDidHideSelectedBackground:(id)arg1;
-(BOOL)_canFocusCell:(id)arg1;
-(void)_cellDidBecomeFocused:(id)arg1;
-(void)_cellDidBecomeUnfocused:(id)arg1;
-(BOOL)_shouldShowMenuForCell:(id)arg1;
-(BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
-(CGRect*)_calloutTargetRectForCell:(id)arg1;
-(id)_reorderingCell;
-(BOOL)_isCellReorderable:(id)arg1;
-(BOOL)_isReorderControlActiveForCell:(id)arg1;
-(void)_didInsertRowForTableCell:(id)arg1;
-(id)_titleForDeleteConfirmationButton:(id)arg1;
-(void)_animateDeletionOfRowWithCell:(id)arg1;
-(void)_highlightCell:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4;
-(void)_updateCell:(id)arg1 withValue:(id)arg2;
-(void)_accessoryButtonAction:(id)arg1;
-(void)_userSelectCell:(id)arg1;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(BOOL)_wasEditing;
-(BOOL)_isEditingForSwipeDeletion;
-(id)_swipeToDeleteCell;
-(void)_setSwipeToDeleteCell:(id)arg1;

@end

