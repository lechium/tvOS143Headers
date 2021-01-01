/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKeyboardLayoutStarDelegate.h>

@class NSString, UIKeyboardLayoutStar, UIKBScreenTraits, UITextInputTraits, UIKeyboardTaskQueue, UIKBTree, NSMutableArray, UIKBViewForResponderForwarding;

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate> {

	NSString* _inputMode;
	UIKeyboardLayoutStar* _layout;
	UIKBScreenTraits* _screenTraits;
	UITextInputTraits* _textInputTraits;
	UIKeyboardTaskQueue* _taskQueue;
	UIKBTree* _keyboard;
	NSMutableArray* _hiddenKeys;
	UIKBViewForResponderForwarding* _containerForActiveKeys;

}

@property (nonatomic,readonly) NSString * inputModeIdentifier; 
@property (nonatomic,readonly) UIKeyboardLayoutStar * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIKeyboardLayoutStar *)layout;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(NSString *)inputModeIdentifier;
-(long long)overrideUserInterfaceStyle;
-(id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2 ;
-(void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2 ;
-(id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3 ;
-(id)initWithInputModeIdentifier:(id)arg1 textInputTraits:(id)arg2 taskQueue:(id)arg3 ;
-(BOOL)handleHardwareKeyboardEvent:(id)arg1 ;
@end

