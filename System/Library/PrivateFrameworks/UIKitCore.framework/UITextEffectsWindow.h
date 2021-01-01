/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>
#import <UIKitCore/_UICanvasBasedObject.h>

@class NSDictionary, UIWindowScene, UIEditingOverlayViewController, NSLayoutConstraint, NSString;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UICanvasBasedObject> {

	BOOL _inDealloc;
	unsigned long long _activeEffectsCount;
	BOOL _isFullscreen;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	NSDictionary* _perCanvasOptions;
	UIWindowScene* __intendedWindowScene;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];
	CGSize _hostedSceneSize;
	BOOL _manualHostingOverride;
	UIEditingOverlayViewController* _editingOverlayViewController;
	NSLayoutConstraint* _bottomConstraint;
	UIEdgeInsets _hostedSafeInsets;

}

@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEditingOverlayViewController * editingOverlayViewController;              //@synthesize editingOverlayViewController=_editingOverlayViewController - In the implementation block
@property (readonly) unsigned contextID; 
@property (nonatomic,readonly) BOOL isFullscreen;                                                          //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) double defaultWindowLevel;                                                    //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (nonatomic,readonly) CGSize keyboardScreenReferenceSize; 
@property (nonatomic,readonly) double keyboardWidthForCurrentDevice; 
@property (assign,nonatomic) CGPoint hostedWindowOffset;                                                   //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                                                       //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedSafeInsets;                                                //@synthesize hostedSafeInsets=_hostedSafeInsets - In the implementation block
+(BOOL)_isSecure;
+(id)_sharedTextEffectsWindowforWindowScene:(id)arg1 allowHosted:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3 shouldCreateIfNecessary:(BOOL)arg4 ;
+(id)sharedTextEffectsWindowForWindowScene:(id)arg1 ;
+(id)activeTextEffectsWindowForWindowScene:(id)arg1 ;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(id)_canvasForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowForCanvas:(id)arg1 ;
+(id)activeTextEffectsWindowForCanvas:(id)arg1 ;
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(void)releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(void)dealloc;
-(NSDictionary *)_options;
-(unsigned)contextID;
-(long long)interfaceOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(BOOL)isInternalWindow;
-(void)resetTransform;
-(BOOL)_canAffectStatusBarAppearance;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_isTextEffectsWindow;
-(void)_sceneBoundsDidChange;
-(BOOL)_isFullscreen;
-(void)_updateTransformLayer;
-(BOOL)_extendsScreenSceneLifetime;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(void)_setWindowLevel:(double)arg1 ;
-(CGRect)_usableSceneBounds;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(CGRect)_sceneReferenceBounds;
-(CGRect)actualSceneBounds;
-(CGSize)keyboardScreenReferenceSize;
-(BOOL)_matchingOptions:(id)arg1 ;
-(double)slideOverWindowVerticalOffset;
-(id)_inputWindowController;
-(void)_sortSubviewsOfView:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
-(UIEdgeInsets)hostedSafeInsets;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(id)aboveStatusBarWindow;
-(CGRect)hostedFrame;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(UIWindowScene *)_intendedCanvas;
-(void)_matchDeviceOrientation;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(void)_commonInitWithOptions:(id)arg1 ;
-(double)keyboardWidthForCurrentDevice;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(CGRect)actualSceneFrame;
-(CGRect)_sceneBounds;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_shouldInstallRootPresentationController;
-(void)becomeKeyWindow;
-(BOOL)_shouldResizeWithScene;
-(void)_updateTransformLayerForClassicPresentation;
-(CGPoint)hostedWindowOffset;
-(void)updateEditingOverlayContainer;
-(CGSize)hostedSceneSize;
-(void)addBottomPadding:(double)arg1 ;
-(id)_initBasicWithCanvas:(id)arg1 options:(id)arg2 ;
-(double)defaultWindowLevel;
-(BOOL)isFullscreen;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(void)_commonTextEffectsInit;
-(BOOL)enableRemoteHosting;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)actualSceneFrameForOrientation:(long long)arg1 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(long long)actualSceneOrientation;
-(void)setHostedSafeInsets:(UIEdgeInsets)arg1 ;
-(void)setEnableRemoteHosting:(BOOL)arg1 ;
-(void)_restoreWindowLevel;
-(void)updateSubviewOrdering;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)setHostedSceneSize:(CGSize)arg1 ;
-(UIEditingOverlayViewController *)editingOverlayViewController;
@end

