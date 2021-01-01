/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@protocol UITextCursorAssertion;
@class UIKeyboardInputMode, UIKeyboard, UILayoutGuide, UIViewController, NSArray, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	double _currentResumeTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	BOOL _tearingDownInputController;
	double _resetInputModeTime;
	unsigned long long _latestDelayTime;
	UILayoutGuide* _focusSafeAreaLayoutGuide;
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) UIViewController * inputController;                      //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;                  //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;                //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * focusSafeAreaLayoutGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(id)inputViewControllerWithView:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
-(void)dealloc;
-(void)setInputMode:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)_keyboard;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)preferredFocusedView;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(id)_compatibilityController;
-(void)willResume:(id)arg1 ;
-(void)setTearingDownInputController;
-(void)rebuildChildConstraints;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(id)_initAsDeferredController;
-(void)tearDownInputController;
-(void)didSuspend:(id)arg1 ;
-(void)isHosted:(id)arg1 ;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)killIncomingExtension;
-(UIViewController *)inputController;
-(NSArray *)internalEdgeMatchConstraints;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(id)_compatView;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)resetInputModeInMainThread;
-(void)resetInputMode;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(void)removeSnapshotView;
-(void)takeSnapshotView;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)childCompatibilityController;
-(id)_keyboardForThisViewController;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)assertCurrentInputModeIfNecessary;
-(void)validateInputModeIsDisplayed;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(UILayoutGuide *)focusSafeAreaLayoutGuide;
@end

