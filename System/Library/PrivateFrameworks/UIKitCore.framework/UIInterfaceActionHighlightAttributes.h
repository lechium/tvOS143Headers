/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying> {

	double _opacity;
	NSArray* _filters;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) double opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) NSArray * filters;                      //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)newBackgroundHighlightView;
-(BOOL)_hasNonClearBackgroundColor;
@end

