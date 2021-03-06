/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUISoftwareKeyboardManagerDelegate;
@class NSMutableSet;

@interface AXUISoftwareKeyboardManager : NSObject {

	NSMutableSet* _reasonsToDisableSoftwareKeyboard;
	NSMutableSet* _reasonsToEnableSoftwareKeyboard;
	id<AXUISoftwareKeyboardManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXUISoftwareKeyboardManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<AXUISoftwareKeyboardManagerDelegate>)delegate;
-(void)setDelegate:(id<AXUISoftwareKeyboardManagerDelegate>)arg1 ;
-(void)updateKeyboardHardwareState;
-(void)_wst_setIsHardwareKeyboardAttached:(id)arg1 ;
-(void)_setIsHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)_updateHardwareKeyboardState;
-(BOOL)isHardwareKeyboardAttached;
-(void)_overrideSetHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)addReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)addReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToDisableSoftwareKeyboard:(id)arg1 ;
@end

