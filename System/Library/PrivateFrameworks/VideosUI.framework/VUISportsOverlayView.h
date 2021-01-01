/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIOverlayWithMaterialRendering.h>
#import <libobjc.A.dylib/VUISportsScoreboardManagerDelegate.h>
#import <libobjc.A.dylib/_TVImageSampling.h>
#import <libobjc.A.dylib/VUIImageSampling.h>

@class UIImage, VUISportsOverlayLayout, VUISportsScoreboardViewModel, VUIScorecardView, VUITextBadgeView, UIView, IKViewElement, IKImageElement, NSOperation, UICollectionReusableView, NSString;

@interface VUISportsOverlayView : UIView <VUIOverlayWithMaterialRendering, VUISportsScoreboardManagerDelegate, _TVImageSampling, VUIImageSampling> {

	BOOL _textBadgeHasMaterial;
	BOOL _backgroundImageHasChanged;
	BOOL _isHostSetup;
	BOOL _isFocused;
	UIImage* _backgroundImageForMaterialRendering;
	VUISportsOverlayLayout* _overlayLayout;
	VUISportsScoreboardViewModel* _scoreboardViewModel;
	VUIScorecardView* _scorecardView;
	VUITextBadgeView* _textBadge;
	UIView* _logoView;
	IKViewElement* _viewElement;
	IKImageElement* _logoElement;
	NSOperation* _pendingOperation;
	UIImage* _scorecardViewBackgroundImage;
	UICollectionReusableView* _containingCell;
	CGSize _logoSize;

}

@property (nonatomic,retain) VUISportsScoreboardViewModel * scoreboardViewModel;              //@synthesize scoreboardViewModel=_scoreboardViewModel - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic) BOOL textBadgeHasMaterial;                                       //@synthesize textBadgeHasMaterial=_textBadgeHasMaterial - In the implementation block
@property (nonatomic,retain) IKImageElement * logoElement;                                    //@synthesize logoElement=_logoElement - In the implementation block
@property (assign,nonatomic) CGSize logoSize;                                                 //@synthesize logoSize=_logoSize - In the implementation block
@property (nonatomic,retain) NSOperation * pendingOperation;                                  //@synthesize pendingOperation=_pendingOperation - In the implementation block
@property (nonatomic,retain) UIImage * scorecardViewBackgroundImage;                          //@synthesize scorecardViewBackgroundImage=_scorecardViewBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL backgroundImageHasChanged;                                  //@synthesize backgroundImageHasChanged=_backgroundImageHasChanged - In the implementation block
@property (assign,nonatomic,__weak) UICollectionReusableView * containingCell;                //@synthesize containingCell=_containingCell - In the implementation block
@property (assign,nonatomic) BOOL isHostSetup;                                                //@synthesize isHostSetup=_isHostSetup - In the implementation block
@property (assign,nonatomic) BOOL isFocused;                                                  //@synthesize isFocused=_isFocused - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageForMaterialRendering;                   //@synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering - In the implementation block
@property (nonatomic,retain) VUISportsOverlayLayout * overlayLayout;                          //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) VUIScorecardView * scorecardView;                                //@synthesize scorecardView=_scorecardView - In the implementation block
@property (nonatomic,retain) VUITextBadgeView * textBadge;                                    //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) UIView * logoView;                                               //@synthesize logoView=_logoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedDrawQueue;
+(BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(CGRect)arg1 currentBackgroundImage:(id)arg2 ;
+(id)sportsOverlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
+(id)sharedDrawQueue;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isFocused;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(IKViewElement *)viewElement;
-(void)setLogoSize:(CGSize)arg1 ;
-(CGSize)logoSize;
-(UIView *)logoView;
-(void)setLogoView:(UIView *)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_setupHosting;
-(void)_teardownHosting;
-(UICollectionReusableView *)containingCell;
-(void)setContainingCell:(UICollectionReusableView *)arg1 ;
-(void)sampleWithImage:(id)arg1 ;
-(void)setOverlayLayout:(VUISportsOverlayLayout *)arg1 ;
-(BOOL)_updateTextBadge:(id)arg1 ;
-(BOOL)updateScoreView:(id)arg1 ;
-(void)updateBackgroundMaterialImagesWithBackgroundImageSize:(CGSize)arg1 performSynchronously:(BOOL)arg2 ;
-(VUITextBadgeView *)textBadge;
-(void)_updateBadgePosition;
-(void)_toggleLayoutSubviewsSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)registerOverlayView;
-(void)unregisterOverlayView;
-(void)vui_setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_cancelPendingOperation;
-(BOOL)_scorecardViewBackgroundImageNeedsUpdating;
-(void)_redrawScorecardViewWithDuration:(double)arg1 ;
-(BOOL)_textBadgeBackgroundImageNeedsUpdating;
-(void)_redrawTextBadgeWithDuration:(double)arg1 ;
-(void)_updateBackgroundImagesWithCompletedOperation:(id)arg1 ;
-(BOOL)updateTextBadge;
-(BOOL)_scorecardViewRequiresBackgroundImage;
-(BOOL)_textBadgeRequiresBackgroundImage;
-(void)_redrawView:(id)arg1 withDuration:(double)arg2 ;
-(VUISportsOverlayLayout *)overlayLayout;
-(void)setBackgroundImageForMaterialRendering:(UIImage *)arg1 ;
-(void)backgroundImageSizeDidChange:(CGSize)arg1 ;
-(UIImage *)backgroundImageForMaterialRendering;
-(void)updateScoreboard:(id)arg1 ;
-(id)getJSContextDictionary;
-(long long)styleForScorecardView:(id)arg1 ;
-(long long)numberOfRowsInScorecardView:(id)arg1 ;
-(long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2 ;
-(id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3 ;
-(double)maximumWidthForScorecardView:(id)arg1 ;
-(id)backgroundImageForScorecardViewMaterial:(id)arg1 ;
-(int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2 ;
-(VUISportsScoreboardViewModel *)scoreboardViewModel;
-(void)setScoreboardViewModel:(VUISportsScoreboardViewModel *)arg1 ;
-(VUIScorecardView *)scorecardView;
-(void)setScorecardView:(VUIScorecardView *)arg1 ;
-(void)setTextBadge:(VUITextBadgeView *)arg1 ;
-(BOOL)textBadgeHasMaterial;
-(void)setTextBadgeHasMaterial:(BOOL)arg1 ;
-(IKImageElement *)logoElement;
-(void)setLogoElement:(IKImageElement *)arg1 ;
-(NSOperation *)pendingOperation;
-(void)setPendingOperation:(NSOperation *)arg1 ;
-(UIImage *)scorecardViewBackgroundImage;
-(void)setScorecardViewBackgroundImage:(UIImage *)arg1 ;
-(BOOL)backgroundImageHasChanged;
-(void)setBackgroundImageHasChanged:(BOOL)arg1 ;
-(BOOL)isHostSetup;
-(void)setIsHostSetup:(BOOL)arg1 ;
-(void)setIsFocused:(BOOL)arg1 ;
@end

