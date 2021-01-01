/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@interface GeometricCutTools : NSObject
+(id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(CGSize)arg2 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andLineThroughPoint:(CGPoint)arg3 andPoint:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andSegmentStartingAt:(CGPoint)arg3 andEndingAt:(CGPoint)arg4 intersectAt:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andRectangle:(CGRect)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(BOOL)lineThroughPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 andImageWithSize:(CGSize)arg3 intersectAtPoint:(CGPoint*)arg4 andPoint:(CGPoint*)arg5 ;
+(id)widestVersionOfRect:(id)arg1 insideImageWithSize:(CGSize)arg2 ;
+(BOOL)isPointArrayARectangle:(id)arg1 ;
+(id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(CGSize)arg2 plusPadding:(CGPoint)arg3 destSize:(CGSize*)arg4 networkInputSize:(CGSize)arg5 ;
+(id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2 improved:(BOOL)arg3 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withCodeMap:(const int*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 networkInputSize:(CGSize)arg9 garbageSymbol:(unsigned short)arg10 ;
+(id)cleanTextDetectorOutput:(id)arg1 ;
+(BOOL)derotateContentsOf:(id)arg1 inImage:(vImage_Buffer*)arg2 andOutputTo:(vImage_Buffer*)arg3 withPadding:(CGPoint)arg4 networkInputSize:(CGSize)arg5 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 ;
+(id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 garbageSymbol:(unsigned short)arg9 ;
+(id)geometricRecognitionCandidatesOf:(id)arg1 inDerotatedRegion:(vImage_Buffer*)arg2 withPadding:(CGPoint)arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(CGSize)arg5 withNetwork:(CHNeuralNetwork*)arg6 activations:(vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*)arg7 invert:(BOOL)arg8 recognitionWindowSize:(CGSize)arg9 ;
@end
