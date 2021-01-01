/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFocusUpdateRequesting.h>

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIWindow, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo, UIFocusAnimationCoordinator, NSString;

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting> {

	BOOL _shouldPerformHapticFeedback;
	UIFocusSystem* _focusSystem;
	_UIFocusInputDeviceInfo* _inputDeviceInfo;
	UIWindow* _window;
	_UIFocusItemInfo* _focusedItemInfo;
	_UIFocusMovementInfo* _movementInfo;
	_UIFocusSearchInfo* _searchInfo;

}

@property (nonatomic,__weak,readonly) UIWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIFocusItemInfo * focusedItemInfo;                                //@synthesize focusedItemInfo=_focusedItemInfo - In the implementation block
@property (nonatomic,retain) _UIFocusMovementInfo * movementInfo;                               //@synthesize movementInfo=_movementInfo - In the implementation block
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                                   //@synthesize searchInfo=_searchInfo - In the implementation block
@property (nonatomic,retain) _UIFocusInputDeviceInfo * inputDeviceInfo;                         //@synthesize inputDeviceInfo=_inputDeviceInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementRequest * fallbackRequest; 
@property (assign,nonatomic) BOOL shouldPerformHapticFeedback;                                  //@synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (getter=isMovementRequest,nonatomic,readonly) BOOL movementRequest; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIWindow *)window;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(id)initWithFocusSystem:(id)arg1 window:(id)arg2 ;
-(void)setMovementInfo:(_UIFocusMovementInfo *)arg1 ;
-(BOOL)isMovementRequest;
-(BOOL)allowsFocusRestoration;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(_UIFocusItemInfo *)focusedItemInfo;
-(_UIFocusMovementInfo *)movementInfo;
-(void)setFocusedItemInfo:(_UIFocusItemInfo *)arg1 ;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusMovementRequest *)fallbackRequest;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)_requestByRedirectingRequestToFocusSystem:(id)arg1 ;
-(void)setShouldPerformHapticFeedback:(BOOL)arg1 ;
-(void)setInputDeviceInfo:(_UIFocusInputDeviceInfo *)arg1 ;
@end
