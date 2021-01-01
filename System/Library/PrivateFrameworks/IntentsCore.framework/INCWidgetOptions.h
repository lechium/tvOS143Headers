/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface INCWidgetOptions : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _intentType;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentType;                             //@synthesize intentType=_intentType - In the implementation block
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)intentType;
-(NSString *)extensionBundleIdentifier;
-(id)initWithExtensionBundleIdentifier:(id)arg1 intentType:(id)arg2 ;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
@end

