/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, IKViewElement, NSArray, _TVStackingPosterView, VUIEditorialCellLayout, NSString;

@interface VUIEditorialCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	UIView*<TVAuxiliaryViewSelecting> _selectingView;
	IKViewElement* _viewElement;
	NSArray* _labelViews;
	_TVStackingPosterView* _stackingPosterView;
	UIView* _stackView;
	VUIEditorialCellLayout* _layout;

}

@property (nonatomic,retain) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                           //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;                   //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIView * stackView;                                           //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) VUIEditorialCellLayout * layout;                              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(VUIEditorialCellLayout *)layout;
-(void)prepareForReuse;
-(void)setLayout:(VUIEditorialCellLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)stackView;
-(void)setStackView:(UIView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(NSArray *)labelViews;
-(void)setLabelViews:(NSArray *)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(_TVStackingPosterView *)stackingPosterView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
@end

