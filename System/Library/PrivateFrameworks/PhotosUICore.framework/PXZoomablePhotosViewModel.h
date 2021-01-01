/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXMutableZoomablePhotosViewModel.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class NSSet, PXAssetReference, PXZoomablePhotosAlphaAnimator, PXNumberAnimator, PXZoomablePhotosLayoutSpecManager, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXMediaProvider, NSArray, PXZoomableInlineHeadersDataSourceManager, PXUpdater, PXSelectionSnapshot, NSString;

@interface PXZoomablePhotosViewModel : PXObservable <PXChangeObserver, PXMutableZoomablePhotosViewModel, PXAssetsDataSourceManagerObserver> {

	BOOL _isUpdatingZoomState;
	PXZoomablePhotosAlphaAnimator* _alphaAnimator;
	long long _pendingZoomColumnIndex;
	BOOL _animatePendingZoom;
	PXNumberAnimator* _columnWidthAnimator;
	double _normalizedColumnWidthWhenPinchStarted;
	double _pinchLogValue;
	double _pinchLogVelocity;
	double _pinchLastDate;
	BOOL _wasPinching;
	BOOL _wasInteractiveZooming;
	unsigned long long _supportLevel;
	id _pauseToken;
	BOOL _lowMemoryMode;
	BOOL _isPinching;
	BOOL _viewBasedDecorationsEnabled;
	BOOL _isInSelectMode;
	BOOL _isInteractiveZooming;
	BOOL _aspectFit;
	BOOL _captionsVisible;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _wantsOverBackgroundFloatingHeaderAppearance;
	BOOL _layoutExtendsContentBelowBounds;
	BOOL _shouldHideSurroundingContent;
	BOOL _isPerformingInitialChanges;
	BOOL _hasInlineHeadersContent;
	PXZoomablePhotosLayoutSpecManager* _specManager;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXMediaProvider* _mediaProvider;
	NSSet* _draggedAssetReferences;
	PXAssetReference* _dropTargetAssetReference;
	double _interactiveZoomColumnIndex;
	NSArray* _allowedColumns;
	NSArray* _allowedColumnWidths;
	PXAssetReference* _anchorAssetReference;
	PXZoomableInlineHeadersDataSourceManager* _inlineHeadersDataSourceManager;
	PXUpdater* _updater;
	SCD_Struct_PX47 _pinchState;
	SCD_Struct_PX48 _zoomState;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                                    //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX49 zoomState;                                                                //@synthesize zoomState=_zoomState - In the implementation block
@property (nonatomic,retain) NSArray * allowedColumns;                                                                 //@synthesize allowedColumns=_allowedColumns - In the implementation block
@property (nonatomic,readonly) BOOL isPerformingInitialChanges;                                                        //@synthesize isPerformingInitialChanges=_isPerformingInitialChanges - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSurroundingContent;                                                        //@synthesize shouldHideSurroundingContent=_shouldHideSurroundingContent - In the implementation block
@property (assign,nonatomic) BOOL hasInlineHeadersContent;                                                             //@synthesize hasInlineHeadersContent=_hasInlineHeadersContent - In the implementation block
@property (nonatomic,readonly) BOOL allowDenseLevels; 
@property (nonatomic,readonly) PXZoomablePhotosLayoutSpecManager * specManager;                                        //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager;                                    //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                         //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) id<PXZoomablePhotosUserDefaults> userDefaults; 
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
@property (nonatomic,readonly) BOOL lowMemoryMode;                                                                     //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) BOOL isPinching;                                                                        //@synthesize isPinching=_isPinching - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX46 pinchState;                                                             //@synthesize pinchState=_pinchState - In the implementation block
@property (nonatomic,readonly) BOOL viewBasedDecorationsEnabled;                                                       //@synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isInSelectMode;                                                                    //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,readonly) NSSet * draggedAssetReferences;                                                         //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference;                                            //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL isInteractiveZooming;                                                              //@synthesize isInteractiveZooming=_isInteractiveZooming - In the implementation block
@property (nonatomic,readonly) double interactiveZoomColumnIndex;                                                      //@synthesize interactiveZoomColumnIndex=_interactiveZoomColumnIndex - In the implementation block
@property (nonatomic,readonly) NSArray * allowedColumnWidths;                                                          //@synthesize allowedColumnWidths=_allowedColumnWidths - In the implementation block
@property (nonatomic,readonly) PXAssetReference * anchorAssetReference;                                                //@synthesize anchorAssetReference=_anchorAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingIndividualItems; 
@property (nonatomic,readonly) BOOL aspectFit;                                                                         //@synthesize aspectFit=_aspectFit - In the implementation block
@property (nonatomic,readonly) BOOL captionsVisible;                                                                   //@synthesize captionsVisible=_captionsVisible - In the implementation block
@property (nonatomic,readonly) BOOL wantsDimmedSelectionStyle;                                                         //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsOverBackgroundFloatingHeaderAppearance;                                       //@synthesize wantsOverBackgroundFloatingHeaderAppearance=_wantsOverBackgroundFloatingHeaderAppearance - In the implementation block
@property (nonatomic,readonly) BOOL layoutExtendsContentBelowBounds;                                                   //@synthesize layoutExtendsContentBelowBounds=_layoutExtendsContentBelowBounds - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSourceManager * inlineHeadersDataSourceManager;              //@synthesize inlineHeadersDataSourceManager=_inlineHeadersDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<PXZoomablePhotosUserDefaults>)userDefaults;
-(BOOL)isPinching;
-(void)_setNeedsUpdate;
-(PXMediaProvider *)mediaProvider;
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)wantsDimmedSelectionStyle;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1 ;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(PXAssetReference *)dropTargetAssetReference;
-(long long)_maxColumnsForIndividualItems;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(void)didPerformChanges;
-(PXSelectionSnapshot *)selectionSnapshot;
-(NSSet *)draggedAssetReferences;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(void)setPinchState:(SCD_Struct_PX46)arg1 withAnchorAssetReference:(id)arg2 ;
-(void)zoomToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(BOOL)arg3 ;
-(void)zoomInToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2 ;
-(void)zoomInToIndividualItemsWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2 ;
-(void)resetColumns;
-(void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2 ;
-(BOOL)viewBasedDecorationsEnabled;
-(void)setViewBasedDecorationsEnabled:(BOOL)arg1 ;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(BOOL)aspectFit;
-(void)setAspectFit:(BOOL)arg1 ;
-(BOOL)captionsVisible;
-(void)setCaptionsVisible:(BOOL)arg1 ;
-(void)setIsPinching:(BOOL)arg1 ;
-(BOOL)isInteractiveZooming;
-(void)setIsInteractiveZooming:(BOOL)arg1 ;
-(BOOL)wantsOverBackgroundFloatingHeaderAppearance;
-(void)setWantsOverBackgroundFloatingHeaderAppearance:(BOOL)arg1 ;
-(BOOL)layoutExtendsContentBelowBounds;
-(void)setLayoutExtendsContentBelowBounds:(BOOL)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 selectionManager:(id)arg2 mediaProvider:(id)arg3 specManager:(id)arg4 ;
-(void)performInitialChanges:(/*^block*/id)arg1 ;
-(BOOL)hasContentToZoom;
-(BOOL)allowDenseLevels;
-(BOOL)isDisplayingIndividualItems;
-(long long)denseZoomLevelForZoomState:(SCD_Struct_PX49)arg1 ;
-(long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 ;
-(long long)_clampColumnIndexToValidIndex:(long long)arg1 ;
-(long long)_nextColumnIndexForInitialColumnWidth:(double)arg1 currentColumnWidth:(double)arg2 velocity:(double)arg3 ;
-(long long)_closestColumnIndexForAnimatedValue:(double)arg1 ;
-(long long)_closestColumnIndexForColumnWidth:(double)arg1 ;
-(double)_columnWidthForDesiredColumnIndex:(double)arg1 ;
-(double)_columnIndexForItemWidth:(double)arg1 ;
-(void)setAllowedColumns:(NSArray *)arg1 ;
-(void)setZoomState:(SCD_Struct_PX49)arg1 ;
-(void)setShouldHideSurroundingContent:(BOOL)arg1 ;
-(void)setHasInlineHeadersContent:(BOOL)arg1 ;
-(void)_invalidateAllowedColumns;
-(void)_updateAllowedColumns;
-(void)_invalidatePinchVelocity;
-(void)_updatePinchVelocity;
-(void)_invalidateAlphaAnimator;
-(void)_updateAlphaAnimator;
-(void)_invalidateZoomState;
-(void)_updateZoomState;
-(void)_invalidateShouldHideSurroundingContent;
-(void)_updateShouldHideSurroundingContent;
-(void)_handleSpecChange;
-(PXZoomablePhotosLayoutSpecManager *)specManager;
-(SCD_Struct_PX46)pinchState;
-(double)interactiveZoomColumnIndex;
-(SCD_Struct_PX49)zoomState;
-(NSArray *)allowedColumns;
-(NSArray *)allowedColumnWidths;
-(PXAssetReference *)anchorAssetReference;
-(BOOL)shouldHideSurroundingContent;
-(PXZoomableInlineHeadersDataSourceManager *)inlineHeadersDataSourceManager;
-(PXUpdater *)updater;
-(BOOL)isPerformingInitialChanges;
-(BOOL)hasInlineHeadersContent;
@end

