/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup {

	CGColorRef _cgColor;
	NSString* _colorName;
	BOOL _substituteWithSystemColor;

}

@property (nonatomic,readonly) CGColorRef cgColor; 
@property (nonatomic,readonly) BOOL substituteWithSystemColor;              //@synthesize substituteWithSystemColor=_substituteWithSystemColor - In the implementation block
@property (nonatomic,readonly) NSString * systemColorName;                  //@synthesize colorName=_colorName - In the implementation block
-(void)dealloc;
-(CGColorRef)cgColor;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(NSString *)systemColorName;
-(BOOL)substituteWithSystemColor;
@end

