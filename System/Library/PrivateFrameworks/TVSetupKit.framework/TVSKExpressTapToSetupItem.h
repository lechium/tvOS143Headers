/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVSKExpressTapToSetupItem : NSObject {

	unsigned long long _types;
	NSString* _descriptionText;
	NSString* _imageSymbolName;
	long long _imageSymbolScale;

}

@property (nonatomic,readonly) unsigned long long types;                     //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageSymbolName;              //@synthesize imageSymbolName=_imageSymbolName - In the implementation block
@property (nonatomic,readonly) long long imageSymbolScale;                   //@synthesize imageSymbolScale=_imageSymbolScale - In the implementation block
-(id)description;
-(unsigned long long)types;
-(NSString *)descriptionText;
-(NSString *)imageSymbolName;
-(long long)imageSymbolScale;
-(id)initWithTypes:(unsigned long long)arg1 descriptionText:(id)arg2 imageSymbolName:(id)arg3 imageSymbolScale:(long long)arg4 ;
@end

