/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRTextDecoderCTCV2.h>

@interface CRTextDecoderCTCEspresso : CRTextDecoderCTCV2
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3 ;
-(id)_buildActivationMatrices:(id)arg1 ;
-(void)_decodeFeaturesWithInfo:(id)arg1 activations:(id)arg2 imageSize:(CGSize)arg3 error:(id*)arg4 ;
-(void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long*)arg2 outputArrays:(vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg3 ;
@end

