/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _TVSUIOffscreenRendererFormat : NSObject <NSCopying> {

	BOOL _opaque;
	BOOL _extendedRange;
	double _scale;

}

@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                            //@synthesize opaque=_opaque - In the implementation block
@property (assign,getter=isExtendedRange,nonatomic) BOOL extendedRange;              //@synthesize extendedRange=_extendedRange - In the implementation block
+(id)formatForTraitCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(BOOL)isExtendedRange;
-(void)setExtendedRange:(BOOL)arg1 ;
@end

