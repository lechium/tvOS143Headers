/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIResponder.h>

@protocol _UITextLoupeResponderProxyDelegate;
@class UIResponder;

@interface _UITextLoupeResponderProxy : UIResponder {

	UIResponder* _responder;
	id<_UITextLoupeResponderProxyDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIResponder * responder;                                    //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextLoupeResponderProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_proxyWithResponder:(id)arg1 ;
-(id<_UITextLoupeResponderProxyDelegate>)delegate;
-(void)setDelegate:(id<_UITextLoupeResponderProxyDelegate>)arg1 ;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIResponder *)responder;
-(void)selectToHere:(id)arg1 ;
@end

