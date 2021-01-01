/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@protocol _UITextFieldClearButtonImageProviding;
@interface _UITextFieldClearButton : UIButton {

	id<_UITextFieldClearButtonImageProviding> _imageProvider;

}

@property (assign,nonatomic,__weak) id<_UITextFieldClearButtonImageProviding> imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(id<_UITextFieldClearButtonImageProviding>)imageProvider;
-(void)setImageProvider:(id<_UITextFieldClearButtonImageProviding>)arg1 ;
-(BOOL)_isModernButton;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1 ;
-(id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
@end

