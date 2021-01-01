/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol PXAnonymousTraitCollection, PXAnonymousViewController;
@class NSObject;

@interface PXExtendedTraitCollection : PXObservable {

	struct {
		BOOL viewSize;
		BOOL layoutReferenceSize;
		BOOL traitCollection;
		BOOL layoutSizeClass;
		BOOL layoutDirection;
		BOOL layoutOrientation;
		BOOL contentSizeCategory;
		BOOL displayScale;
		BOOL safeAreaInsets;
		BOOL layoutMargins;
		BOOL userInterfaceIdiom;
		BOOL userInterfaceFeature;
		BOOL userInterfaceStyle;
		BOOL userInterfaceLevel;
		BOOL windowReferenceSize;
		BOOL windowOrientation;
	}  _needsUpdateFlags;
	BOOL _enabled;
	NSObject*<PXAnonymousTraitCollection> _traitCollection;
	long long _layoutSizeClass;
	long long _layoutSizeSubclass;
	long long _layoutOrientation;
	long long _layoutDirection;
	long long _contentSizeCategory;
	long long _userInterfaceIdiom;
	long long _userInterfaceFeature;
	double _displayScale;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	long long _windowOrientation;
	NSObject*<PXAnonymousViewController> _viewController;
	CGSize _layoutReferenceSize;
	CGSize _windowReferenceSize;
	CGSize __viewSize;
	CGSize __pendingViewTransitionSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _layoutMargins;

}

@property (assign,setter=_setViewSize:,nonatomic) CGSize _viewSize;                                                          //@synthesize _viewSize=__viewSize - In the implementation block
@property (assign,setter=_setPendingViewTransitionSize:,nonatomic) CGSize _pendingViewTransitionSize;                        //@synthesize _pendingViewTransitionSize=__pendingViewTransitionSize - In the implementation block
@property (setter=_setTraitCollection:,nonatomic,retain) NSObject*<PXAnonymousTraitCollection> traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,setter=_setLayoutReferenceSize:,nonatomic) CGSize layoutReferenceSize;                                     //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,setter=_setLayoutSizeClass:,nonatomic) long long layoutSizeClass;                                          //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,setter=_setLayoutSizeSubclass:,nonatomic) long long layoutSizeSubclass;                                    //@synthesize layoutSizeSubclass=_layoutSizeSubclass - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                                                      //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,setter=_setLayoutOrientation:,nonatomic) long long layoutOrientation;                                      //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) long long contentSizeCategory;                                                                  //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,setter=_setUserInterfaceIdiom:,nonatomic) long long userInterfaceIdiom;                                    //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,setter=_setUserInterfaceStyle:,nonatomic) long long userInterfaceStyle;                                    //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,setter=_setUserInterfaceLevel:,nonatomic) long long userInterfaceLevel;                                    //@synthesize userInterfaceLevel=_userInterfaceLevel - In the implementation block
@property (assign,setter=_setUserInterfaceFeature:,nonatomic) long long userInterfaceFeature;                                //@synthesize userInterfaceFeature=_userInterfaceFeature - In the implementation block
@property (assign,setter=_setDisplayScale:,nonatomic) double displayScale;                                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                                                    //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                                     //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<PXAnonymousViewController> viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) CGSize windowReferenceSize;                                                                   //@synthesize windowReferenceSize=_windowReferenceSize - In the implementation block
@property (nonatomic,readonly) long long windowOrientation;                                                                  //@synthesize windowOrientation=_windowOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)unregisterObservations;
-(void)registerObservations;
-(BOOL)_needsUpdate;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(long long)userInterfaceIdiom;
-(UIEdgeInsets)safeAreaInsets;
-(long long)layoutOrientation;
-(void)setContentSizeCategory:(long long)arg1 ;
-(long long)contentSizeCategory;
-(CGSize)_viewSize;
-(long long)windowOrientation;
-(NSObject*<PXAnonymousViewController>)viewController;
-(void)_updateIfNeeded;
-(NSObject*<PXAnonymousTraitCollection>)traitCollection;
-(UIEdgeInsets)layoutMargins;
-(long long)userInterfaceStyle;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(double)displayScale;
-(void)_setNeedsUpdate;
-(void)_setTraitCollection:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(long long)userInterfaceFeature;
-(id)mutableChangeObject;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)didPerformChanges;
-(id)createTraitCollection;
-(void)getUserInterfaceIdiom:(out long long*)arg1 ;
-(void)getLayoutDirection:(out long long*)arg1 ;
-(void)getUserInterfaceStyle:(out long long*)arg1 ;
-(void)getUserInterfaceLevel:(out long long*)arg1 ;
-(void)getSizeClass:(out long long*)arg1 sizeSubclass:(out long long*)arg2 ;
-(void)getContentSizeCategory:(out long long*)arg1 ;
-(double)displayScaleFromTraitCollection:(id)arg1 ;
-(long long)layoutSizeClass;
-(CGSize)layoutReferenceSize;
-(long long)layoutSizeSubclass;
-(void)_invalidateLayoutSizeClass;
-(void)_setDisplayScale:(double)arg1 ;
-(long long)userInterfaceLevel;
-(void)viewControllerViewDidLoad;
-(void)viewControllerViewWillAppear;
-(void)viewControllerViewDidAppear;
-(void)viewControllerViewWillLayoutSubviews;
-(void)_viewWillLayoutSubviews;
-(void)viewControllerViewWillTransitionToSize:(CGSize)arg1 ;
-(void)viewControllerTraitCollectionDidChange;
-(void)viewControllerLayoutOrientationDidChange;
-(void)viewControllerViewSafeAreaInsetsDidChange;
-(void)viewControllerViewLayoutMarginsDidChange;
-(void)viewControllerDidMoveToParentViewController:(id)arg1 ;
-(void)_setLayoutSizeClass:(long long)arg1 ;
-(void)_setLayoutSizeSubclass:(long long)arg1 ;
-(void)_setViewSize:(CGSize)arg1 ;
-(void)_setPendingViewTransitionSize:(CGSize)arg1 ;
-(void)_setLayoutReferenceSize:(CGSize)arg1 ;
-(void)_setLayoutOrientation:(long long)arg1 ;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(void)_setUserInterfaceFeature:(long long)arg1 ;
-(void)_setUserInterfaceStyle:(long long)arg1 ;
-(void)_setUserInterfaceLevel:(long long)arg1 ;
-(void)_setWindowReferenceSize:(CGSize)arg1 ;
-(void)_setWindowOrientation:(long long)arg1 ;
-(void)_invalidateViewSize;
-(void)_updateViewSizeIfNeeded;
-(void)_invalidateLayoutReferenceSize;
-(void)_updateLayoutReferenceSizeIfNeeded;
-(void)invalidateTraitCollection;
-(void)_updateTraitCollectionIfNeeded;
-(void)_updateLayoutSizeClassIfNeeded;
-(void)_invalidateUserInterfaceIdiom;
-(void)_updateUserInterfaceIdiomIfNeeded;
-(void)_invalidateUserInterfaceStyle;
-(void)_updateUserInterfaceStyleIfNeeded;
-(void)_invalidateUserInterfaceLevel;
-(void)_updateUserInterfaceLevelIfNeeded;
-(void)_invalidateUserInterfaceFeature;
-(long long)userInterfaceFeatureForViewController:(id)arg1 ;
-(void)_updateUserInterfaceFeatureIfNeeded;
-(void)_invalidateLayoutDirection;
-(void)_updateLayoutDirectionIfNeeded;
-(void)_invalidateLayoutOrientation;
-(void)_updateLayoutOrientationIfNeeded;
-(void)_invalidateContentSizeCategory;
-(void)_updateContentSizeCategoryIfNeeded;
-(void)invalidateDisplayScale;
-(void)_updateDisplayScaleIfNeeded;
-(void)invalidateSafeAreaInsets;
-(void)_updateSafeAreaInsetsIfNeeded;
-(void)invalidateLayoutMargins;
-(void)_updateLayoutMarginsIfNeeded;
-(void)_invalidateWindowReferenceSize;
-(void)_updateWindowReferenceSizeIfNeeded;
-(void)_invalidateWindowOrientation;
-(void)_updateWindowOrientationIfNeeded;
-(CGSize)windowReferenceSize;
-(CGSize)_pendingViewTransitionSize;
@end

