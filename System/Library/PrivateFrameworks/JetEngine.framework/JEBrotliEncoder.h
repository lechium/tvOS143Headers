/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliEncoder : NSObject {

	unsigned _quality;
	unsigned _sizeHint;
	BrotliEncoderStateStructRef _encoder;

}

@property (nonatomic,readonly) BrotliEncoderStateStructRef encoder;              //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) unsigned quality;                                   //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) unsigned sizeHint;                                  //@synthesize sizeHint=_sizeHint - In the implementation block
@property (nonatomic,readonly) BOOL isFinished; 
-(id)init;
-(void)dealloc;
-(BOOL)isFinished;
-(void)setQuality:(unsigned)arg1 ;
-(unsigned)quality;
-(BrotliEncoderStateStructRef)encoder;
-(void)setSizeHint:(unsigned)arg1 ;
-(BOOL)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long*)arg2 nextIn:(const char**)arg3 availableOut:(unsigned long long*)arg4 nextOut:(char**)arg5 ;
-(unsigned)sizeHint;
@end
