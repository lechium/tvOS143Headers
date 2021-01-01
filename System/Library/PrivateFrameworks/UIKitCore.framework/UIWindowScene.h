/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScene.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKitCore/_UISceneUIWindowHosting.h>
#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding.h>

@protocol _UIDisplayInfoProviding, UICoordinateSpace, _UISceneMetricsCalculating;
@class UIScreen, UITraitCollection, UIStatusBarManager, _UIContextBinder, NSPointerArray, HBUILaunchAnimator, ASOOverlayManager, UIAlertControllerStackManager, _UICanvasDefinition, FBSScene, _UISystemAppearanceManager, UIInputResponderController, UIScreenshotService, NSString, _UIBannerManager, UIWindow, FBSDisplayConfigurationRequest, UISceneSizeRestrictions, NSArray;

@interface UIWindowScene : UIScene <_UIFallbackEnvironment, _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding> {

	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	_UIContextBinder* _contextBinder;
	NSPointerArray* _keyWindowHistory;
	BOOL _isPerformingSystemSnapshot;
	id<_UIDisplayInfoProviding> _displayEdgeInfoProvider;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _shouldDisableTouchCancellationOnRotation;
	BOOL _windowWasInitializedWithDefaultStoryboard;
	BOOL _didMakeKeyAndVisible;
	id<_UISceneMetricsCalculating> _metricsCalculator;
	BOOL __isKeyWindowScene;
	BOOL _excludedFromWindowsMenu;
	long long _screenRequestedOverscanCompensation;
	long long _avkitRequestedOverscanCompensation;

}

@property (assign,setter=hbui_setIdleModeVisualEffectsEnabled:,getter=hbui_idleModeVisualEffectsEnabled,nonatomic) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) HBUILaunchAnimator * hbui_launchAnimator; 
@property (nonatomic,readonly) ASOOverlayManager * _aso_appOverlayManager; 
@property (nonatomic,readonly) UIAlertControllerStackManager * _alertControllerStackManager; 
@property (nonatomic,readonly) long long state; 
@property (getter=isKeyCanvas,nonatomic,readonly) BOOL keyCanvas; 
@property (nonatomic,readonly) _UICanvasDefinition * _definition; 
@property (getter=_scene,nonatomic,readonly) FBSScene * scene; 
@property (nonatomic,readonly) UIStatusBarManager * statusBarManager; 
@property (nonatomic,readonly) _UISystemAppearanceManager * _systemAppearanceManager; 
@property (nonatomic,readonly) UIInputResponderController * inputResponderController; 
@property (nonatomic,readonly) UIScreenshotService * screenshotService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_bannerManager,nonatomic,readonly) _UIBannerManager * _bannerManager; 
@property (nonatomic,readonly) _UIContextBinder * _contextBinder; 
@property (nonatomic,readonly) UIWindow * _keyWindow; 
@property (nonatomic,readonly) BOOL _canReceiveDeviceOrientationEvents; 
@property (nonatomic,readonly) UIEdgeInsets _peripheryInsets; 
@property (nonatomic,readonly) id<_UIDisplayInfoProviding> _displayInfoProvider; 
@property (setter=_setDisplayConfigurationRequest:,getter=_displayConfigurationRequest,nonatomic,retain) FBSDisplayConfigurationRequest * _displayConfigurationRequest; 
@property (assign,setter=_setScreenRequestedDisplayNativePixelSize:,getter=_screenRequestedDisplayNativePixelSize,nonatomic) CGSize _screenRequestedDisplayNativePixelSize; 
@property (assign,setter=_setScreenRequestedOverscanCompensation:,getter=_screenRequestedOverscanCompensation,nonatomic) long long _screenRequestedOverscanCompensation;                 //@synthesize screenRequestedOverscanCompensation=_screenRequestedOverscanCompensation - In the implementation block
@property (assign,setter=_setAVKitRequestedOverscanCompensation:,getter=_avkitRequestedOverscanCompensation,nonatomic) long long _avkitRequestedOverscanCompensation;                    //@synthesize avkitRequestedOverscanCompensation=_avkitRequestedOverscanCompensation - In the implementation block
@property (assign,nonatomic) BOOL _isKeyWindowScene;                                                                                                                                     //@synthesize _isKeyWindowScene=__isKeyWindowScene - In the implementation block
@property (assign,getter=isExcludedFromWindowsMenu,nonatomic) BOOL excludedFromWindowsMenu;                                                                                              //@synthesize excludedFromWindowsMenu=_excludedFromWindowsMenu - In the implementation block
@property (assign,setter=_setBackgroundStyle:,nonatomic) long long _backgroundStyle; 
@property (assign,setter=_setKeepContextAssociationInBackground:,getter=_keepContextAssociationInBackground,nonatomic) BOOL keepContextAssociationInBackground; 
@property (nonatomic,readonly) BOOL _isPerformingSystemSnapshot;                                                                                                                         //@synthesize isPerformingSystemSnapshot=_isPerformingSystemSnapshot - In the implementation block
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) UISceneSizeRestrictions * sizeRestrictions; 
@property (nonatomic,readonly) NSArray * windows; 
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
+(void)initialize;
+(BOOL)_hostsWindows;
+(id)_canvasForScene:(id)arg1 ;
+(void)_registerComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3 ;
+(id)_placeholderWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(BOOL)_shouldRestoreKeyWindowSceneOnActivation;
+(id)_findNewKeyWindowSceneOnScreen:(id)arg1 ;
+(void)_setShouldRestoreKeyWindowSceneOnActivation:(BOOL)arg1 ;
+(id)_keyWindowScene;
+(id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(id)_keyboardWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(void)_updateVisibleSceneAndWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)hbui_setIdleModeVisualEffectsEnabled:(BOOL)arg1 additionalModifications:(/*^block*/id)arg2 ;
-(BOOL)hbui_idleModeVisualEffectsEnabled;
-(void)hbui_setIdleModeVisualEffectsEnabled:(BOOL)arg1 ;
-(id)hb_userInteractionManager;
-(HBUILaunchAnimator *)hbui_launchAnimator;
-(ASOOverlayManager *)_aso_appOverlayManager;
-(NSString *)description;
-(long long)state;
-(void)_invalidate;
-(long long)_interfaceOrientation;
-(long long)interfaceOrientation;
-(id)_scene;
-(long long)_backgroundStyle;
-(UIScreen *)screen;
-(CGRect)_referenceBounds;
-(UIScreen *)_screen;
-(UITraitCollection *)traitCollection;
-(_UICanvasDefinition *)_definition;
-(NSArray *)windows;
-(id<UICoordinateSpace>)coordinateSpace;
-(UIStatusBarManager *)statusBarManager;
-(UITraitCollection *)_traitCollection;
-(UIEdgeInsets)_peripheryInsets;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2 ;
-(id<UICoordinateSpace>)_coordinateSpace;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(UIWindow *)_keyWindow;
-(UISceneSizeRestrictions *)sizeRestrictions;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(BOOL)_isPerformingSystemSnapshot;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(BOOL*)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)_prepareForSuspend;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(id)_allWindows;
-(void)_computeMetricsForWindows:(id)arg1 animated:(BOOL)arg2 ;
-(void)_readySceneForConnection;
-(void)_makeKeyAndVisibleIfNeeded;
-(void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg1 ;
-(BOOL)_windowIsFront:(id)arg1 ;
-(id)_topVisibleWindowPassingTest:(/*^block*/id)arg1 ;
-(id)_visibleWindows;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(void)_computeMetrics:(BOOL)arg1 ;
-(double)_systemMinimumMargin;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_needsMakeKeyAndVisible;
-(void)_prepareForResume;
-(id)_fallbackTraitCollection;
-(UIAlertControllerStackManager *)_alertControllerStackManager;
-(UIInputResponderController *)inputResponderController;
-(id<_UIDisplayInfoProviding>)_displayInfoProvider;
-(id)canvasToolbar;
-(BOOL)_isKeyWindowScene;
-(BOOL)isKeyCanvas;
-(void)_registerSettingsDiffActions:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterSettingsDiffActionsForKey:(id)arg1 ;
-(void)_registerSceneActionsHandler:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterSceneActionsHandler:(id)arg1 ;
-(void)_registerComponent:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterComponentForKey:(id)arg1 ;
-(id)_componentForKey:(id)arg1 ;
-(_UIContextBinder *)_contextBinder;
-(BOOL)_permitContextCreationForBindingDescription:(SCD_Struct_UI33)arg1 ;
-(unsigned long long)_currentlySupportedInterfaceOrientations;
-(void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_attachWindow:(id)arg1 ;
-(void)_detachWindow:(id)arg1 ;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(UIStatusBarManager *)_statusBarManager;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2 ;
-(_UISystemAppearanceManager *)_systemAppearanceManager;
-(UIScreenshotService *)screenshotService;
-(id)_screenshotServiceIfPresent;
-(void)_setScreenRequestedDisplayNativePixelSize:(CGSize)arg1 ;
-(long long)_screenRequestedOverscanCompensation;
-(void)_setScreenRequestedOverscanCompensation:(long long)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(BOOL)_canReceiveDeviceOrientationEvents;
-(void)_setBackgroundStyle:(long long)arg1 ;
-(void)_applySnapshotSettings:(id)arg1 forActions:(/*^block*/id)arg2 ;
-(_UIBannerManager *)_bannerManager;
-(BOOL)_windowsIgnoreSceneClientOrientation;
-(void)_recycleAttachmentForWindow:(id)arg1 ;
-(BOOL)_shouldLoadStoryboard;
-(void)_loadWindowWithStoryboardIfNeeded:(id)arg1 ;
-(id)_windowSceneDelegate;
-(id)_inheritingWindowsIncludingInvisible:(BOOL)arg1 ;
-(FBSDisplayConfigurationRequest *)_displayConfigurationRequest;
-(void)_setDisplayConfigurationRequest:(id)arg1 ;
-(long long)_resolvedOverscanCompensation;
-(BOOL)_keepContextAssociationInBackground;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg1 ;
-(void)_updateTraitCollection;
-(void)_setShouldDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(id)_disableTouchCancellationOnRotation;
-(CGSize)_screenRequestedDisplayNativePixelSize;
-(void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3 ;
-(void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1 ;
-(long long)_avkitRequestedOverscanCompensation;
-(void)_setAVKitRequestedOverscanCompensation:(long long)arg1 ;
-(void)set_isKeyWindowScene:(BOOL)arg1 ;
-(BOOL)isExcludedFromWindowsMenu;
-(void)setExcludedFromWindowsMenu:(BOOL)arg1 ;
@end

