/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTilingLayoutObserver.h>

@protocol PXTilingScrollController, PXTileSource, PXTileAnimator, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTilingControllerObserver, PXTilingDebugDelegate;
@class PXTilingChange, PXTilingLayout, PXTilingCoordinateSpace, PXTilingCoordinateSpaceConverter, PXTilingScrollInfo, PXTileStatePool, NSMutableIndexSet, NSMutableArray, NSArray, PXTilingControllerDebugInfo, NSString;

@interface PXTilingController : NSObject <PXTilingLayoutObserver> {

	BOOL _isPerformingUpdates;
	BOOL _hasScheduledUpdate;
	struct {
		BOOL scrollControllerMetrics;
		BOOL pagedRect;
		BOOL layoutMetrics;
		BOOL layoutPreferredVisibleOrigin;
		BOOL layoutPosition;
		BOOL layoutVisibleRect;
		BOOL layoutPreparation;
		BOOL tiles;
		BOOL preheating;
		BOOL maxPreheatPadding;
		BOOL scrollInfo;
	}  _needsUpdateFlags;
	SCD_Struct_PX71 _scrollDelegateFlags;
	SCD_Struct_PX71 _transitionDelegateFlags;
	BOOL _hasInitializedLayout;
	PXTileIdentifier* _identifierBuffer;
	PXTileGeometry* _geometryBuffer;
	unsigned long long _bufferCount;
	BOOL _shouldAggressivelyEvictTileCaches;
	PXTilingChange* __currentChange;
	PXTilingLayout* _targetLayout;
	PXTilingLayout* _currentLayout;
	id<PXTilingScrollController> _scrollController;
	id<PXTileSource> _tileSource;
	id<PXTileAnimator> _tileAnimator;
	id<PXTilingControllerScrollDelegate> _scrollDelegate;
	id<PXTilingControllerTransitionDelegate> _transitionDelegate;
	PXTilingCoordinateSpace* __coordinateSpace;
	void* __coordinateSpaceIdentifier;
	PXTilingCoordinateSpaceConverter* __coordinateSpaceConverter;
	PXTilingLayout* __layoutWithInitializedVisibleOrigin;
	PXTilingScrollInfo* __scrollInfo;
	PXTileStatePool* __tileStates;
	NSMutableIndexSet* __dirtyTileIndexes;
	NSMutableArray* __preheatRecords;
	id<PXTilingControllerObserver> _observer;
	NSArray* _compositionInvalidationContexts;
	id<PXTilingDebugDelegate> _debugDelegate;
	CGSize __referenceSize;
	CGPoint __updatedPreferredVisibleOrigin;
	CGPoint __layoutDesiredOrigin;
	UIEdgeInsets __contentInset;
	CGRect __activeRect;
	CGRect __visibleRect;
	CGRect __pagedRect;
	CGRect __cachedRect;
	CGRect __dirtyRect;
	UIEdgeInsets __maxPreheatPadding;

}

@property (nonatomic,readonly) PXTilingCoordinateSpace * _coordinateSpace;                                                                            //@synthesize _coordinateSpace=__coordinateSpace - In the implementation block
@property (nonatomic,readonly) void* _coordinateSpaceIdentifier;                                                                                      //@synthesize _coordinateSpaceIdentifier=__coordinateSpaceIdentifier - In the implementation block
@property (nonatomic,readonly) PXTilingCoordinateSpaceConverter * _coordinateSpaceConverter;                                                          //@synthesize _coordinateSpaceConverter=__coordinateSpaceConverter - In the implementation block
@property (setter=_setCurrentLayout:,nonatomic,retain) PXTilingLayout * currentLayout;                                                                //@synthesize currentLayout=_currentLayout - In the implementation block
@property (setter=_setTargetLayout:,nonatomic,retain) PXTilingLayout * targetLayout;                                                                  //@synthesize targetLayout=_targetLayout - In the implementation block
@property (assign,setter=_setLayoutWithInitializedVisibleOrigin:,nonatomic,__weak) PXTilingLayout * _layoutWithInitializedVisibleOrigin;              //@synthesize _layoutWithInitializedVisibleOrigin=__layoutWithInitializedVisibleOrigin - In the implementation block
@property (assign,setter=_setReferenceSize:,nonatomic) CGSize _referenceSize;                                                                         //@synthesize _referenceSize=__referenceSize - In the implementation block
@property (assign,setter=_setContentInset:,nonatomic) UIEdgeInsets _contentInset;                                                                     //@synthesize _contentInset=__contentInset - In the implementation block
@property (assign,setter=_setActiveRect:,nonatomic) CGRect _activeRect;                                                                               //@synthesize _activeRect=__activeRect - In the implementation block
@property (assign,setter=_setVisibleRect:,nonatomic) CGRect _visibleRect;                                                                             //@synthesize _visibleRect=__visibleRect - In the implementation block
@property (assign,setter=_setUpdatedPreferredVisibleOrigin:,nonatomic) CGPoint _updatedPreferredVisibleOrigin;                                        //@synthesize _updatedPreferredVisibleOrigin=__updatedPreferredVisibleOrigin - In the implementation block
@property (assign,setter=_setLayoutDesiredOrigin:,nonatomic) CGPoint _layoutDesiredOrigin;                                                            //@synthesize _layoutDesiredOrigin=__layoutDesiredOrigin - In the implementation block
@property (setter=_setScrollInfo:,nonatomic,copy) PXTilingScrollInfo * _scrollInfo;                                                                   //@synthesize _scrollInfo=__scrollInfo - In the implementation block
@property (assign,setter=_setPagedRect:,nonatomic) CGRect _pagedRect;                                                                                 //@synthesize _pagedRect=__pagedRect - In the implementation block
@property (assign,setter=_setCachedRect:,nonatomic) CGRect _cachedRect;                                                                               //@synthesize _cachedRect=__cachedRect - In the implementation block
@property (nonatomic,readonly) PXTileStatePool * _tileStates;                                                                                         //@synthesize _tileStates=__tileStates - In the implementation block
@property (nonatomic,readonly) PXTilingChange * _currentChange;                                                                                       //@synthesize _currentChange=__currentChange - In the implementation block
@property (assign,setter=_setDirtyRect:,nonatomic) CGRect _dirtyRect;                                                                                 //@synthesize _dirtyRect=__dirtyRect - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * _dirtyTileIndexes;                                                                                 //@synthesize _dirtyTileIndexes=__dirtyTileIndexes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _preheatRecords;                                                                                      //@synthesize _preheatRecords=__preheatRecords - In the implementation block
@property (assign,setter=_setMaxPreheatPadding:,nonatomic) UIEdgeInsets _maxPreheatPadding;                                                           //@synthesize _maxPreheatPadding=__maxPreheatPadding - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerObserver> observer;                                                                          //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) NSArray * compositionInvalidationContexts;                                                                                 //@synthesize compositionInvalidationContexts=_compositionInvalidationContexts - In the implementation block
@property (nonatomic,readonly) CGRect layoutContentBounds; 
@property (nonatomic,readonly) CGRect layoutScrollBounds; 
@property (nonatomic,readonly) CGPoint layoutPreferredOrigin; 
@property (nonatomic,readonly) CGPoint layoutOrigin; 
@property (nonatomic,readonly) PXTilingScrollInfo * scrollInfo; 
@property (assign,nonatomic,__weak) id<PXTilingDebugDelegate> debugDelegate;                                                                          //@synthesize debugDelegate=_debugDelegate - In the implementation block
@property (nonatomic,readonly) PXTilingControllerDebugInfo * debugInfo; 
@property (assign,nonatomic,__weak) id<PXTilingScrollController> scrollController;                                                                    //@synthesize scrollController=_scrollController - In the implementation block
@property (assign,nonatomic,__weak) id<PXTileSource> tileSource;                                                                                      //@synthesize tileSource=_tileSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXTileAnimator> tileAnimator;                                                                                  //@synthesize tileAnimator=_tileAnimator - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerScrollDelegate> scrollDelegate;                                                              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerTransitionDelegate> transitionDelegate;                                                      //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAggressivelyEvictTileCaches;                                                                                  //@synthesize shouldAggressivelyEvictTileCaches=_shouldAggressivelyEvictTileCaches - In the implementation block
@property (nonatomic,readonly) void* contentCoordinateSpaceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setObserver:(id<PXTilingControllerObserver>)arg1 ;
-(PXTilingLayout *)currentLayout;
-(id<PXTilingControllerObserver>)observer;
-(CGRect)_dirtyRect;
-(id)debugQuickLookObject;
-(id)initWithLayout:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)updateLayout;
-(PXTilingControllerDebugInfo *)debugInfo;
-(void)beginUpdate;
-(void)endUpdate;
-(void)_setContentInset:(UIEdgeInsets)arg1 ;
-(CGRect)_visibleRect;
-(void)_setNeedsUpdate;
-(void)_invalidateRect:(CGRect)arg1 ;
-(PXTilingCoordinateSpace *)_coordinateSpace;
-(void)requestFocus;
-(CGSize)_referenceSize;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(CGRect)_activeRect;
-(CGRect)_pagedRect;
-(CGRect)_cachedRect;
-(PXTilingScrollInfo *)_scrollInfo;
-(void*)_coordinateSpaceIdentifier;
-(UIEdgeInsets)_contentInset;
-(PXTilingScrollInfo *)scrollInfo;
-(void)_invalidatePreheating;
-(void)_updatePreheatingIfNeeded;
-(void)tilingLayout:(id)arg1 invalidatedWithContext:(id)arg2 ;
-(void)transitionToLayout:(id)arg1 ;
-(void)setScrollController:(id<PXTilingScrollController>)arg1 ;
-(void)setScrollDelegate:(id<PXTilingControllerScrollDelegate>)arg1 ;
-(void)setTransitionDelegate:(id<PXTilingControllerTransitionDelegate>)arg1 ;
-(void*)contentCoordinateSpaceIdentifier;
-(PXTileIdentifier)tileIdentifierForTile:(void*)arg1 ;
-(BOOL)getTile:(out void*)arg1 geometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forTileWithIdentifier:(PXTileIdentifier)arg5 ;
-(PXTileIdentifier)hitTestTileAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)registerPreheatHandler:(id)arg1 withPadding:(UIEdgeInsets)arg2 tileGroup:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)unregisterPreheatHandler:(id)arg1 context:(void*)arg2 ;
-(void)_setReferenceSize:(CGSize)arg1 ;
-(void)_setActiveRect:(CGRect)arg1 ;
-(void)_setVisibleRect:(CGRect)arg1 ;
-(void)_setMaxPreheatPadding:(UIEdgeInsets)arg1 ;
-(void)_setPagedRect:(CGRect)arg1 ;
-(void)_setDirtyRect:(CGRect)arg1 ;
-(void)_setTargetLayout:(id)arg1 ;
-(id)_indexesOfVisibleTilesInRect:(CGRect)arg1 withOptions:(id)arg2 ;
-(void)_handleTileAnimationCompletionWithIndex:(unsigned long long)arg1 ;
-(id)_preheatRecordForPreheatHandler:(id)arg1 context:(void*)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)_prepareBufferForCount:(unsigned long long)arg1 ;
-(void)_fillBuffersWithTileStatesAtIndexes:(id)arg1 ;
-(void)_markRectAsCached:(CGRect)arg1 ;
-(void)invalidateScrollControllerMetrics;
-(void)invalidateLayoutPreferredVisibleOrigin;
-(void)setReferenceSize:(CGSize)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(CGRect)layoutContentBounds;
-(CGRect)layoutScrollBounds;
-(CGPoint)layoutPreferredOrigin;
-(CGPoint)layoutOrigin;
-(void)setLayoutOrigin:(CGPoint)arg1 ;
-(CGPoint)convertPointFromLayout:(CGPoint)arg1 ;
-(CGRect)convertRectFromLayout:(CGRect)arg1 ;
-(id)convertScrollInfoFromLayout:(id)arg1 ;
-(void)_ensureCurrentChange;
-(PXTilingChange *)_currentChange;
-(id)_currentChangeIfExists;
-(void)_discardCurrentChange;
-(void)updateMetrics;
-(void)_invalidateScrollControllerMetrics;
-(void)_updateScrollControllerMetricsIfNeeded;
-(void)_invalidateLayoutMetrics;
-(void)_updateLayoutMetricsIfNeeded;
-(void)_invalidateLayoutPreferredVisibleOrigin;
-(void)_updateLayoutPreferredVisibleOriginIfNeeded;
-(void)_invalidateLayoutPosition;
-(void)_updateLayoutPositionIfNeeded;
-(void)_invalidateLayoutVisibleRect;
-(void)_updateLayoutVisibleRectIfNeeded;
-(void)_invalidateLayoutPreparation;
-(void)_updateLayoutPreparationIfNeeded;
-(void)_invalidatePagedRect;
-(void)_updatePagedRectIfNeeded;
-(void)_invalidateAllCachedRects;
-(void)_invalidateCachesOutsideRect:(CGRect)arg1 ;
-(void)_invalidateTiles;
-(void)_updateTilesIfNeeded;
-(void)_invalidateMaxPreheatPadding;
-(void)_updateMaxPreheatPaddingIfNeeded;
-(void)_invalidateScrollInfo;
-(void)_updateScrollInfoIfNeeded;
-(void)_updateDebugDelegateIfNeeded;
-(PXTilingLayout *)targetLayout;
-(void)_setCurrentLayout:(id)arg1 ;
-(id<PXTilingScrollController>)scrollController;
-(id<PXTileSource>)tileSource;
-(void)setTileSource:(id<PXTileSource>)arg1 ;
-(id<PXTileAnimator>)tileAnimator;
-(void)setTileAnimator:(id<PXTileAnimator>)arg1 ;
-(id<PXTilingControllerScrollDelegate>)scrollDelegate;
-(id<PXTilingControllerTransitionDelegate>)transitionDelegate;
-(BOOL)shouldAggressivelyEvictTileCaches;
-(void)setShouldAggressivelyEvictTileCaches:(BOOL)arg1 ;
-(PXTilingCoordinateSpaceConverter *)_coordinateSpaceConverter;
-(PXTilingLayout *)_layoutWithInitializedVisibleOrigin;
-(void)_setLayoutWithInitializedVisibleOrigin:(id)arg1 ;
-(CGPoint)_updatedPreferredVisibleOrigin;
-(void)_setUpdatedPreferredVisibleOrigin:(CGPoint)arg1 ;
-(CGPoint)_layoutDesiredOrigin;
-(void)_setLayoutDesiredOrigin:(CGPoint)arg1 ;
-(void)_setScrollInfo:(id)arg1 ;
-(void)_setCachedRect:(CGRect)arg1 ;
-(PXTileStatePool *)_tileStates;
-(NSMutableIndexSet *)_dirtyTileIndexes;
-(NSMutableArray *)_preheatRecords;
-(UIEdgeInsets)_maxPreheatPadding;
-(NSArray *)compositionInvalidationContexts;
-(void)setCompositionInvalidationContexts:(NSArray *)arg1 ;
-(id<PXTilingDebugDelegate>)debugDelegate;
-(void)setDebugDelegate:(id<PXTilingDebugDelegate>)arg1 ;
-(id)imageTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(id)titleSubtitleTileWithIdentifier:(PXTileIdentifier)arg1 ;
@end

