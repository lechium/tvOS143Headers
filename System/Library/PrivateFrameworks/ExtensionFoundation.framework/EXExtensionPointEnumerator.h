/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSEnumerator, _EXExtensionPoint;

@interface EXExtensionPointEnumerator : NSEnumerator {

	NSDictionary* _extensionPoints;
	NSEnumerator* _extensionPointsKeyEnumerator;
	NSDictionary* _currentExtensionPointDict;
	_EXExtensionPoint* _currentExtensionPoint;

}

@property (readonly) NSDictionary * extensionPoints;                           //@synthesize extensionPoints=_extensionPoints - In the implementation block
@property (readonly) NSEnumerator * extensionPointsKeyEnumerator;              //@synthesize extensionPointsKeyEnumerator=_extensionPointsKeyEnumerator - In the implementation block
@property (readonly) NSDictionary * currentExtensionPointDict;                 //@synthesize currentExtensionPointDict=_currentExtensionPointDict - In the implementation block
@property (readonly) _EXExtensionPoint * currentExtensionPoint;                //@synthesize currentExtensionPoint=_currentExtensionPoint - In the implementation block
+(void)enumerateExtensionPointsInDirectoryAtURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)nextObject;
-(id)initWithCacheURLs:(id)arg1 ;
-(id)translateXPCCacheDictionary:(id)arg1 ;
-(NSDictionary *)extensionPoints;
-(NSEnumerator *)extensionPointsKeyEnumerator;
-(NSDictionary *)currentExtensionPointDict;
-(_EXExtensionPoint *)currentExtensionPoint;
@end

