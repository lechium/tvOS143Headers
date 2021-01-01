/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe> {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)badgeSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

