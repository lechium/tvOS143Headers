/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingImageHelpers : NSObject
+(id)scaleImage:(id)arg1 toWidth:(double)arg2 andHeight:(double)arg3 ;
+(id)thresholdMask:(id)arg1 ;
+(id)blurImage:(id)arg1 withSigma:(double)arg2 ;
+(id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3 ;
+(id)erodeMask:(id)arg1 usingRadius:(int)arg2 ;
+(id)absoluteDiffBetweenImage:(id)arg1 andImage:(id)arg2 ;
+(id)invertMask:(id)arg1 ;
+(id)computePerChannelSumsOfPixelsInImage:(id)arg1 onArea:(CGRect)arg2 ;
+(id)findEquidistantPointsOnMaskDiagonal:(id)arg1 tileSize:(int)arg2 maxDistanceBetweenPoints:(int)arg3 diagonalityDirection:(int)arg4 ;
+(id)extractTileFromImage:(id)arg1 aroundCenterPoint:(CGPoint)arg2 tileSize:(int)arg3 ;
+(id)compositeImage:(id)arg1 overImage:(id)arg2 ;
+(id)scaleImage:(id)arg1 toSize:(CGSize)arg2 ;
+(CGRect)expandBoundingBoxToRectangle:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5 ;
+(id)moveOriginForImage:(id)arg1 to:(CGPoint)arg2 ;
+(CGRect)computeTileRectForImage:(id)arg1 aroundCenterPoint:(CGPoint)arg2 tileSize:(int)arg3 ;
+(id)multiplyImage:(id)arg1 withMask:(id)arg2 ;
+(id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3 andGaussianBlendRadius:(int)arg4 ;
+(CGRect)expandBoundingBoxToSquare:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5 ;
+(id)reclampImageWith1PixBoundary:(id)arg1 ;
+(id)compositeImageNoReclamping:(id)arg1 overImage:(id)arg2 ;
+(id)compositeImageWithReclamping:(id)arg1 overImage:(id)arg2 ;
+(int)findTile1DOffsetForCenter:(int)arg1 maxBound:(int)arg2 tileSize:(int)arg3 ;
+(CGRect)expandBoundingBox:(CGRect)arg1 toWidth:(int)arg2 andHeight:(int)arg3 withinArea:(CGSize)arg4 ;
+(CGRect)expandBoundingBox:(CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(CGSize)arg4 ;
+(double)expandDimension:(double)arg1 toOneOfTheResolutions:(id)arg2 ;
+(id)dilateMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2 ;
+(id)erodeMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2 ;
+(id)padImage:(id)arg1 toExtent:(CGRect)arg2 usingColor:(id)arg3 ;
+(id)computePerChannelAvgPixelValueInImage:(id)arg1 onArea:(CGRect)arg2 ;
+(void)saveCIImage:(id)arg1 asPNGAt:(id)arg2 ;
+(id)scaleImage:(id)arg1 toShorterEdgeSize:(double)arg2 ;
+(id)dilateMask:(id)arg1 usingRadius:(int)arg2 ;
+(id)padMask:(id)arg1 toImageSize:(id)arg2 ;
+(id)createBGRAVImageWrapperFromCIImage:(id)arg1 ;
+(void)saveCIImage:(id)arg1 asTIFFAt:(id)arg2 ;
+(void)saveVImageWrapper:(id)arg1 asPNGAt:(id)arg2 ;
@end

