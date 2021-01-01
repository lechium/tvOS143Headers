/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, IKViewElement, NSString;

@interface _TVProductStackView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _lastFocusedView;
	UIView* _titleView;
	NSArray* _viewsAboveDescription;
	UIView* _descriptionView;
	NSArray* _viewsBelowDescription;
	UIView* _buttonsRowView;
	UIView* _initialFocusView;
	IKViewElement* _stackElement;

}

@property (nonatomic,retain) UIView * titleView;                           //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSArray * viewsAboveDescription;              //@synthesize viewsAboveDescription=_viewsAboveDescription - In the implementation block
@property (nonatomic,retain) UIView * descriptionView;                     //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelowDescription;              //@synthesize viewsBelowDescription=_viewsBelowDescription - In the implementation block
@property (nonatomic,retain) UIView * buttonsRowView;                      //@synthesize buttonsRowView=_buttonsRowView - In the implementation block
@property (nonatomic,retain) UIView * initialFocusView;                    //@synthesize initialFocusView=_initialFocusView - In the implementation block
@property (nonatomic,retain) IKViewElement * stackElement;                 //@synthesize stackElement=_stackElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productStackViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setTitleView:(UIView *)arg1 ;
-(UIView *)titleView;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIView *)descriptionView;
-(UIView *)buttonsRowView;
-(NSArray *)viewsAboveDescription;
-(NSArray *)viewsBelowDescription;
-(void)setButtonsRowView:(UIView *)arg1 ;
-(void)setViewsAboveDescription:(NSArray *)arg1 ;
-(void)setDescriptionView:(UIView *)arg1 ;
-(void)setViewsBelowDescription:(NSArray *)arg1 ;
-(void)setInitialFocusView:(UIView *)arg1 ;
-(void)setStackElement:(IKViewElement *)arg1 ;
-(UIView *)initialFocusView;
-(IKViewElement *)stackElement;
@end

