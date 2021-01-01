/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, _MXExtensionProvider;

@interface _MXExtensionServiceCenter : NSObject {

	NSObject*<OS_dispatch_queue> _extlock;
	NSDictionary* _extensions;
	NSDictionary* _mapsExtensions;
	NSDictionary* _containingAppProxies;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,copy) NSDictionary * extensions; 
@property (nonatomic,copy) NSDictionary * mapsExtensions; 
@property (nonatomic,copy) NSDictionary * containingAppProxies; 
@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(NSDictionary *)extensions;
-(id)initWithExtensionProvider:(id)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
-(NSDictionary *)mapsExtensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
-(void)setMapsExtensions:(NSDictionary *)arg1 ;
-(void)setContainingAppProxies:(NSDictionary *)arg1 ;
-(void)receivedExtensions:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)containingAppProxies;
-(id)allExtensions;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(void)_clearExtensions;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
@end

