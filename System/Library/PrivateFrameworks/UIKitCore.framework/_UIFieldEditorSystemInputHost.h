/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFieldEditorHost.h>

@class _UIFieldEditorSystemInputHostView, UIVisualEffectView, UISystemInputViewController;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {

	_UIFieldEditorSystemInputHostView* _containerView;
	UIVisualEffectView* _backgroundEffectView;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
-(id)description;
-(void)dealloc;
-(void)layoutIfNeeded;
-(BOOL)_isTV;
-(UISystemInputViewController *)_systemInputViewController;
-(id)_viewForHostingFieldEditor;
-(void)addFieldEditor:(id)arg1 ;
-(void)removeFieldEditor;
-(void)addPlaceholderLabel:(id)arg1 ;
-(void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)arg1 ;
@end
