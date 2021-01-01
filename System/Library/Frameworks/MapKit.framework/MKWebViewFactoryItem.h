/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MKWebBridgeConfiguration, WKWebView, MKWebViewMessageHandlerProxy;

@interface MKWebViewFactoryItem : NSObject {

	MKWebBridgeConfiguration* _bridgeConfiguration;
	WKWebView* _webView;
	MKWebViewMessageHandlerProxy* _messageHandlerProxy;

}

@property (nonatomic,copy,readonly) MKWebBridgeConfiguration * bridgeConfiguration;              //@synthesize bridgeConfiguration=_bridgeConfiguration - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) MKWebViewMessageHandlerProxy * messageHandlerProxy;               //@synthesize messageHandlerProxy=_messageHandlerProxy - In the implementation block
-(WKWebView *)webView;
-(id)initWithBridgeConfiguration:(id)arg1 webView:(id)arg2 messageHandlerProxy:(id)arg3 ;
-(MKWebViewMessageHandlerProxy *)messageHandlerProxy;
-(MKWebBridgeConfiguration *)bridgeConfiguration;
@end

