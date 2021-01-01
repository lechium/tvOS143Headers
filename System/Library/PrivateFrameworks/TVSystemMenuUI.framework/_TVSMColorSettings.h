/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface _TVSMColorSettings : NSObject <NSCopying> {

	UIColor* _color;
	NSString* _compositingFilter;

}

@property (nonatomic,readonly) UIColor * color;                           //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSString * compositingFilter;              //@synthesize compositingFilter=_compositingFilter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(NSString *)compositingFilter;
-(id)initWithColor:(id)arg1 compositingFilter:(id)arg2 ;
@end

