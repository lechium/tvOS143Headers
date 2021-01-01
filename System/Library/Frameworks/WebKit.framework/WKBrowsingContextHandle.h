/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding> {

	ObjectIdentifier<WebKit::WebPageProxyIdentifierType> _pageProxyID;
	ObjectIdentifier<WebCore::PageIdentifierType> _webPageID;

}

@property (getter=_pageProxyID,nonatomic,readonly) ObjectIdentifier<WebKit::WebPageProxyIdentifierType> pageProxyID;              //@synthesize pageProxyID=_pageProxyID - In the implementation block
@property (getter=_webPageID,nonatomic,readonly) ObjectIdentifier<WebCore::PageIdentifierType> webPageID;                         //@synthesize webPageID=_webPageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithPageProxyID:(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)arg1 andWebPageID:(ObjectIdentifier<WebCore::PageIdentifierType>)arg2 ;
-(id)_initWithPageProxy:(NakedRef<WebKit::WebPageProxy>*)arg1 ;
-(id)_initWithPage:(NakedRef<WebKit::WebPage>*)arg1 ;
-(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)_pageProxyID;
-(ObjectIdentifier<WebCore::PageIdentifierType>)_webPageID;
@end
