/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/GKResourceDataConsumer.h>

@class NSString;

@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer> {

	BOOL _isLayeredImage;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL isLayeredImage;                 //@synthesize isLayeredImage=_isLayeredImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(double)scale;
-(id)objectForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLayeredImage;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 isLayeredImage:(BOOL)arg3 ;
@end
