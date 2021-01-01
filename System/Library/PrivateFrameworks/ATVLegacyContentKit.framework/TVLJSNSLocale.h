/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class NSLocale;

@interface TVLJSNSLocale : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(void)addClassDefinitionInContext:(OpaqueJSContextRef)arg1 ;
+(id)localeFromJSValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithLocale:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
@end
