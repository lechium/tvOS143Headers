/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying> {

	long long _style;
	double _width;
	long long _spokeCount;
	long long _spokeFrameRatio;
	CGSize _shadowOffset;
	CGColorRef _color;
	CGColorRef _shadowColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(CGSize)arg5 color:(CGColorRef)arg6 shadowColor:(CGColorRef)arg7 ;
@end

