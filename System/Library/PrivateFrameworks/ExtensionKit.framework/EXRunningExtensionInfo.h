/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EXExtensionInfoProviding.h>

@class NSString;

@interface EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding> {

	NSString* _bundleIdentifier;
	NSString* _containerBundleIdentifier;
	NSString* _containingViewControllerClassName;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * containerBundleIdentifier;                      //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * containingViewControllerClassName;              //@synthesize containingViewControllerClassName=_containingViewControllerClassName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyExtensionMainCalled;
+(id)extensionInfoForCurrentProcess;
-(NSString *)bundleIdentifier;
-(id)initForCurrentProcess;
-(NSString *)containerBundleIdentifier;
-(NSString *)containingViewControllerClassName;
@end

