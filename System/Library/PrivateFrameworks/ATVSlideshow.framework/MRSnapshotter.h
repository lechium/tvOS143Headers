/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRRenderer, EAGLContext, MRTexture;

@interface MRSnapshotter : NSObject {

	MRRenderer* _renderer;
	EAGLContext* _context;
	MRTexture* _texture;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL isFlipped; 
@property (assign,nonatomic) double timeQuantum; 
@property (nonatomic,readonly) CGColorSpaceRef colorSpace; 
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)isFlipped;
-(CGColorSpaceRef)colorSpace;
-(void)setIsFlipped:(BOOL)arg1 ;
-(double)timeQuantum;
-(void)setTimeQuantum:(double)arg1 ;
-(id)initWithMontage:(id)arg1 andAssetManagementDelegate:(id)arg2 isReadOnly:(BOOL)arg3 ;
-(CGImageRef)CGImageSnapshotAtTime:(double)arg1 ;
-(void)_snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned)arg2 ;
-(CGImageRef)_CGImageSnapshot;
-(void)snapshotToBuffer:(unsigned*)arg1 withBytesPerRow:(unsigned)arg2 atTime:(double)arg3 ;
-(CGImageRef)CGImageSnapshotAtState:(id)arg1 ;
@end

