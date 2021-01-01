/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface BurstThumbnailCluster : NSObject {

	CVBufferRef _imagePixelBuffer;
	/*^block*/id _completionBlock;
	NSMutableArray* _burstImages;
	NSMutableDictionary* _imageProps;

}

@property (retain) NSMutableArray * burstImages;                  //@synthesize burstImages=_burstImages - In the implementation block
@property (retain) NSMutableDictionary * imageProps;              //@synthesize imageProps=_imageProps - In the implementation block
@property (copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) CVBufferRef imagePixelBuffer;                  //@synthesize imagePixelBuffer=_imagePixelBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(NSMutableArray *)burstImages;
-(NSMutableDictionary *)imageProps;
-(id)initWithImageData:(CVBufferRef)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
-(CVBufferRef)imagePixelBuffer;
-(void)setImagePixelBuffer:(CVBufferRef)arg1 ;
@end
