/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIBackgroundBlurView, SiriUIVisualEffectView, UIImageView;

@interface AFUISiriEyesFreeView : UIView {

	SiriUIBackgroundBlurView* _backdropView;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	long long _eyesFreeMode;

}

@property (nonatomic,readonly) long long eyesFreeMode;              //@synthesize eyesFreeMode=_eyesFreeMode - In the implementation block
-(id)backdropView;
-(id)initWithFrame:(CGRect)arg1 eyesFreeMode:(long long)arg2 ;
-(void)_configureEyesFreePresentation:(long long)arg1 ;
-(long long)eyesFreeMode;
@end
