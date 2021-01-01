/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMScreenGrabber : NSObject
-(double)_adjustedScaleFactorForInputSize:(CGSize)arg1 constrainingToPreferredInputSizeFromDetectors:(id)arg2 ;
-(id)_ioSurfaceConfigurationWithSize:(CGSize)arg1 ;
-(id)_renderOptionsForSurface:(IOSurfaceRef)arg1 captureRect:(CGRect)arg2 displayName:(id)arg3 scaleFactor:(double)arg4 ignoredLayerContextIDs:(id)arg5 includedLayerContextIDs:(id)arg6 ;
-(id)grabScreenWithRect:(CGRect)arg1 orientation:(long long)arg2 options:(id)arg3 metrics:(id)arg4 error:(id*)arg5 ;
@end
