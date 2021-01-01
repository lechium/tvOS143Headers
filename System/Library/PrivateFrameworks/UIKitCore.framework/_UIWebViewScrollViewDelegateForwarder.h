/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class UIWebView, NSString;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	id<UIScrollViewDelegate> _delegate;
	UIWebView* _webView;

}

@property (assign,nonatomic) id<UIScrollViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<UIScrollViewDelegate>)delegate;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
@end

